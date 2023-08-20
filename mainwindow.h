#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDate>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QTableView>
#include <string>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_calendarWidget_selectionChanged();

    void on_addButton_clicked();

    void on_tableViewForData_clicked(const QModelIndex &index);

    void on_removeButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::MainWindow *ui;
    QDate selectedDate;
    QDate todayDate;
    QDate tommorowDate;
    QDate currentDay;

    QSqlDatabase db;
    QSqlTableModel *dataModel;
    QTableView const *dataView;

    void setDataBase();
    void recordNewData();
    void setDataModel();
    void isTommorow();

    int currentRow;
    bool isTableViewActivated = false;
    QString selectedDateString;

};
#endif // MAINWINDOW_H
