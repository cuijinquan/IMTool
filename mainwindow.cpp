#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{   
    ui->setupUi(this);
    init();
}

void MainWindow::init()
{
    m_client.SetMainWin(ui);

    QObject::connect(ui->Test_Button,SIGNAL(pressed()),&m_client,SLOT(Connect()));
    QObject::connect(ui->Send_Button,SIGNAL(pressed()),&m_client,SLOT(SendData()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
