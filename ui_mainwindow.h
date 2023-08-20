/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *currentDate;
    QCalendarWidget *calendarWidget;
    QTableView *tableViewForData;
    QLabel *mainLabel;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *clearButton;
    QLabel *firstlabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *today_label;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 791, 551));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        currentDate = new QLabel(page);
        currentDate->setObjectName("currentDate");
        currentDate->setGeometry(QRect(90, 90, 141, 41));
        currentDate->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 9pt \"Tahoma\";\n"
"	font-size:18px;\n"
"}"));
        calendarWidget = new QCalendarWidget(page);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(400, 130, 391, 251));
        calendarWidget->setStyleSheet(QString::fromUtf8("#qt_calendar_calendarview {\n"
"background: rgb(100, 95, 95);\n"
"font: 9pt \"Tahoma\";\n"
"font-size:17px;\n"
"color:black;\n"
"outline: 0;\n"
"}\n"
"#qt_calendar_navigationbar {\n"
"background: rgb(100, 95, 95);\n"
"font: 900 9pt \"Segoe UI\";\n"
"color:black;\n"
"outline: 0;\n"
"}\n"
"QToolButton {\n"
"	icon-size: 30px, 30px;\n"
"	width: 80px;\n"
"	height: 30px;\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_prevmonth {\n"
"background: rgb(100, 95, 95) ;\n"
"width: 40px;\n"
"font: 900 9pt \"Segoe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_nextmonth {\n"
"background: rgb(100, 95, 95) ;\n"
"width: 40px;\n"
"font: 900 9pt \"Segoe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_monthbutton {\n"
"background: rgb(121, 121, 121);\n"
"padding-right: 20px;\n"
"font: 900 9pt \"Segoe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_yearbutton {\n"
"background: rgb(121, 121, 121);\n"
"font: 900 9pt \"Segoe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_ca"
                        "lendar_monthbutton::menu-indicator{\n"
"	subcontrol-origin: padding;\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	subcontrol-position: center right;\n"
"	right: 3px;\n"
"	width: 10px;\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	color:black;\n"
"	outline: 0;\n"
"}\n"
"QAbstractItemView {\n"
"font: 900 9pt \"Segoe UI\";\n"
"	color: black;\n"
"selection-color: white;\n"
"selection-background-color: rgb(147, 147, 147);\n"
"font: 15px;\n"
"outline: 0;\n"
"}\n"
"\n"
""));
        tableViewForData = new QTableView(page);
        tableViewForData->setObjectName("tableViewForData");
        tableViewForData->setGeometry(QRect(0, 130, 401, 351));
        tableViewForData->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    background-color: rgb(100, 95, 95);\n"
"	font: 900 9pt \"Segoe UI\";\n"
"    alternate-background-color: rgb(141, 163, 215);\n"
"	font-size:15px;\n"
"	outline: 0;\n"
"	color:white;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    color: white;\n"
"	font: 900 9pt \"Segoe UI\";\n"
"    background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color:rgb(64, 64, 64);\n"
"} \n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"}"));
        mainLabel = new QLabel(page);
        mainLabel->setObjectName("mainLabel");
        mainLabel->setGeometry(QRect(10, 90, 71, 41));
        mainLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 9pt \"Tahoma\";\n"
"	font-size:18px;\n"
"}"));
        addButton = new QPushButton(page);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(10, 510, 101, 41));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(100, 95, 95);\n"
"	font-size: 15px;	\n"
"	border-radius: 15px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(139, 255, 30);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(130, 130, 130);\n"
"}"));
        removeButton = new QPushButton(page);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(280, 510, 101, 41));
        removeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(100, 95, 95);\n"
"	font-size: 15px;	\n"
"	border-radius: 15px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(139, 255, 30);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(130, 130, 130);\n"
"}"));
        clearButton = new QPushButton(page);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(140, 510, 101, 41));
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(100, 95, 95);\n"
"	font-size: 15px;	\n"
"	border-radius: 15px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(139, 255, 30);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(130, 130, 130);\n"
"}"));
        firstlabel = new QLabel(page);
        firstlabel->setObjectName("firstlabel");
        firstlabel->setGeometry(QRect(420, 390, 341, 31));
        firstlabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 9pt \"Tahoma\";\n"
"	font-size:18px;\n"
"}"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 381, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 9pt \"Tahoma\";\n"
"	font-size:25px;\n"
"}"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 450, 71, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 9pt \"Tahoma\";\n"
"	font-size:18px;\n"
"}"));
        today_label = new QLabel(page);
        today_label->setObjectName("today_label");
        today_label->setGeometry(QRect(500, 450, 101, 41));
        today_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 9pt \"Tahoma\";\n"
"	font-size:18px;\n"
"}"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 601, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 9pt \"Tahoma\";\n"
"	font-size:20px;\n"
"}"));
        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        currentDate->setText(QString());
        mainLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\273\320\260 \320\275\320\260 ", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        firstlabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 SmartDays. ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\320\263\320\276\320\264\320\275\321\217", nullptr));
        today_label->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\267\320\260\320\277\320\270\321\201\321\213\320\262\320\260\320\271\321\202\320\265 \320\222\320\260\321\210\320\270 \320\264\320\265\320\273\320\260 \320\275\320\260 \320\272\320\260\320\266\320\264\321\213\320\271 \320\264\320\265\320\275\321\214!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
