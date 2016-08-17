/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Test_Button;
    QPushButton *Send_Button;
    QTextEdit *Edit_IP;
    QTextEdit *Edit_Port;
    QTextEdit *Receive_Edit;
    QLabel *label_12;
    QTextEdit *Msg_ID_Edit;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *User_ID_Edit;
    QLabel *label_5;
    QTextEdit *Msg_CMD_Edit;
    QTextEdit *Length_Edit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *From_Edit;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *To_Edit;
    QTextEdit *Cluster_Edit;
    QTextEdit *Node_Edit;
    QTextEdit *Flag_Edit;
    QLabel *label_11;
    QLabel *label_13;
    QTextEdit *Time_Edit;
    QLabel *label_14;
    QTextEdit *Reserve_Edit;
    QTextEdit *Send_Edit;
    QLabel *label_15;
    QTextEdit *Loop_Edit;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(408, 424);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 8, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(219, 8, 67, 17));
        Test_Button = new QPushButton(centralWidget);
        Test_Button->setObjectName(QString::fromUtf8("Test_Button"));
        Test_Button->setGeometry(QRect(287, 38, 99, 27));
        Send_Button = new QPushButton(centralWidget);
        Send_Button->setObjectName(QString::fromUtf8("Send_Button"));
        Send_Button->setGeometry(QRect(280, 210, 99, 61));
        Edit_IP = new QTextEdit(centralWidget);
        Edit_IP->setObjectName(QString::fromUtf8("Edit_IP"));
        Edit_IP->setGeometry(QRect(42, 8, 141, 21));
        Edit_Port = new QTextEdit(centralWidget);
        Edit_Port->setObjectName(QString::fromUtf8("Edit_Port"));
        Edit_Port->setGeometry(QRect(271, 8, 121, 21));
        Receive_Edit = new QTextEdit(centralWidget);
        Receive_Edit->setObjectName(QString::fromUtf8("Receive_Edit"));
        Receive_Edit->setGeometry(QRect(18, 320, 361, 61));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(158, 290, 67, 17));
        Msg_ID_Edit = new QTextEdit(centralWidget);
        Msg_ID_Edit->setObjectName(QString::fromUtf8("Msg_ID_Edit"));
        Msg_ID_Edit->setGeometry(QRect(80, 70, 121, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 72, 81, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 72, 67, 17));
        User_ID_Edit = new QTextEdit(centralWidget);
        User_ID_Edit->setObjectName(QString::fromUtf8("User_ID_Edit"));
        User_ID_Edit->setGeometry(QRect(270, 70, 121, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 100, 67, 17));
        Msg_CMD_Edit = new QTextEdit(centralWidget);
        Msg_CMD_Edit->setObjectName(QString::fromUtf8("Msg_CMD_Edit"));
        Msg_CMD_Edit->setGeometry(QRect(80, 98, 121, 21));
        Length_Edit = new QTextEdit(centralWidget);
        Length_Edit->setObjectName(QString::fromUtf8("Length_Edit"));
        Length_Edit->setGeometry(QRect(270, 98, 121, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 100, 71, 20));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(11, 130, 41, 20));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(120, 130, 21, 17));
        From_Edit = new QTextEdit(centralWidget);
        From_Edit->setObjectName(QString::fromUtf8("From_Edit"));
        From_Edit->setGeometry(QRect(50, 129, 61, 21));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(305, 130, 41, 20));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(204, 130, 51, 20));
        To_Edit = new QTextEdit(centralWidget);
        To_Edit->setObjectName(QString::fromUtf8("To_Edit"));
        To_Edit->setGeometry(QRect(140, 130, 61, 21));
        Cluster_Edit = new QTextEdit(centralWidget);
        Cluster_Edit->setObjectName(QString::fromUtf8("Cluster_Edit"));
        Cluster_Edit->setGeometry(QRect(253, 130, 51, 21));
        Node_Edit = new QTextEdit(centralWidget);
        Node_Edit->setObjectName(QString::fromUtf8("Node_Edit"));
        Node_Edit->setGeometry(QRect(340, 130, 51, 21));
        Flag_Edit = new QTextEdit(centralWidget);
        Flag_Edit->setObjectName(QString::fromUtf8("Flag_Edit"));
        Flag_Edit->setGeometry(QRect(141, 161, 61, 21));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(115, 161, 31, 17));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(11, 161, 41, 20));
        Time_Edit = new QTextEdit(centralWidget);
        Time_Edit->setObjectName(QString::fromUtf8("Time_Edit"));
        Time_Edit->setGeometry(QRect(50, 160, 61, 21));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(210, 162, 67, 17));
        Reserve_Edit = new QTextEdit(centralWidget);
        Reserve_Edit->setObjectName(QString::fromUtf8("Reserve_Edit"));
        Reserve_Edit->setGeometry(QRect(270, 160, 121, 21));
        Send_Edit = new QTextEdit(centralWidget);
        Send_Edit->setObjectName(QString::fromUtf8("Send_Edit"));
        Send_Edit->setGeometry(QRect(20, 210, 231, 61));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(281, 284, 41, 20));
        Loop_Edit = new QTextEdit(centralWidget);
        Loop_Edit->setObjectName(QString::fromUtf8("Loop_Edit"));
        Loop_Edit->setGeometry(QRect(320, 283, 61, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 408, 25));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "IMTool", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "IP", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Port", 0, QApplication::UnicodeUTF8));
        Test_Button->setText(QApplication::translate("MainWindow", "Test", 0, QApplication::UnicodeUTF8));
        Send_Button->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Receive", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "msg id", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "user id", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "length", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "msg cmd", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "from", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "to", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "node", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "cluster", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "flag", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "time", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "reserve", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "loop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
