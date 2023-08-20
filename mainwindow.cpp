#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    todayDate = QDate::currentDate();

    ui->currentDate->setText(todayDate.toString("dd.MM.yyyy"));
    ui->today_label->setText(todayDate.toString("dd.MM.yyyy"));

    selectedDate = ui->calendarWidget->selectedDate(); // получение выбранной даты
    qDebug() << "Selected date: " << todayDate.toString("dd.MM.yyyy");
    ui->currentDate->setText(todayDate.toString("dd.MM.yyyy"));
    const QString todayDateString = todayDate.toString("dd.MM.yyyy");
    setDataBase();
    QSqlQuery query (db);

    if(db.open()){
            qDebug()<<"nice";
            setDataModel();
            query.exec();
            dataModel->setFilter("this_date = " + QString(" '") + todayDateString + QString("'"));
            qDebug()<<"this_date = " + QString(" '") + todayDateString +QString("'") ;
            dataModel->select();
            recordNewData();
        }

    setDataBase();
    if(db.open())
    {
       isTommorow();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete dataModel;
    dataModel = nullptr;
    delete dataView;
    dataView = nullptr;
}


void MainWindow::setDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("SmartDays.db");
}


void MainWindow::isTommorow()
{
    tommorowDate = todayDate.addDays(1);
    QString tommorowDateString = tommorowDate.toString("dd.MM.yyyy");
    QSqlQuery query;
    query.prepare("SELECT * FROM data WHERE this_date = :Date");
    query.bindValue(":Date", tommorowDateString);
    query.exec();

    if (query.next())
            ui->firstlabel->setText("Не забудьте, у вас завтра дела!");
    else
            ui->firstlabel->setText("Ура, на завтра дел нет, хорошего дня!");
}


void MainWindow::recordNewData()
{
    dataModel->database().transaction();
    if(dataModel->submitAll())
    {
        dataModel->database().commit();
    }
    else
    {
        dataModel->database().rollback();
    }
}

void MainWindow::setDataModel()
{
    dataModel = new QSqlTableModel(this);
    dataModel->setTable("data");
    ui->tableViewForData->setModel(dataModel);
    ui->tableViewForData->setColumnHidden(0, true);
    ui->tableViewForData->setColumnHidden(1, true);
}


void MainWindow::on_calendarWidget_selectionChanged()
{
    selectedDate = ui->calendarWidget->selectedDate(); // получение выбранной даты
    qDebug() << "Selected date: " << selectedDate.toString("dd.MM.yyyy");
    ui->currentDate->setText(selectedDate.toString("dd.MM.yyyy"));
    selectedDateString = selectedDate.toString("dd.MM.yyyy");
    qDebug()<<"sds: "<<selectedDateString;
    setDataBase();
    QSqlQuery query (db);

    if(db.open()){
            qDebug()<<"nice";
            setDataModel();
            query.exec();
            dataModel->setFilter("this_date = " + QString(" '") + selectedDateString + QString("'"));
            qDebug()<<"this_date = " + QString(" '") + selectedDateString +QString("'") ;
            dataModel->select();
            recordNewData();
        }
    isTommorow();
}


void MainWindow::on_addButton_clicked()
{
    setDataBase();
    QSqlQuery query (db);
    if(db.open()){
            qDebug()<<"nice";
            selectedDateString = selectedDate.toString("dd.MM.yyyy");
            setDataModel();
            query.prepare("INSERT INTO data (this_date, Заметки, Время) VALUES (?, ?, ?)");
            query.addBindValue(selectedDate.toString("dd.MM.yyyy"));
            query.addBindValue("Пишите здесь");
            query.addBindValue("Пишите здесь");
            query.exec();
            dataModel->setFilter("this_date = " + QString(" '") + selectedDateString + QString("'"));
            dataModel->select();
            recordNewData();
        }
    isTommorow();
}


void MainWindow::on_tableViewForData_clicked(const QModelIndex &index)
{
    currentRow = index.row();
    isTableViewActivated = true;
}


void MainWindow::on_removeButton_clicked()
{
    if(isTableViewActivated)
    {
        selectedDateString = selectedDate.toString("dd.MM.yyyy");
        QSqlQuery query (db);
        QModelIndex idIndexBasket = dataModel->index(currentRow, 0, QModelIndex());
        QString idBasketValue = ui->tableViewForData->model()->data(idIndexBasket).toString();
        qDebug()<< ui->tableViewForData->model()->data(idIndexBasket).toString();
        query.exec("DELETE FROM data WHERE id = " + QString(idBasketValue));
        setDataModel();
        dataModel->setFilter("this_date = " + QString(" '") + selectedDateString + QString("'"));
        dataModel->select();
        recordNewData();
    }
    isTommorow();
}


void MainWindow::on_clearButton_clicked()
{
    selectedDateString = selectedDate.toString("dd.MM.yyyy");
    QSqlQuery query (db);
    query.exec("DELETE FROM data WHERE this_date = " + QString(" '") + selectedDateString + QString("'"));
    setDataModel();
    dataModel->setFilter("this_date = " + QString(" '") + selectedDateString + QString("'"));
    dataModel->select();
    recordNewData();
    isTommorow();
}

