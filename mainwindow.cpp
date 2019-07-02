#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_result->setAlignment(Qt::AlignRight);
    connect(ui->pushButton_num0, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num1, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num2, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num3, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num4, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num5, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num6, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num7, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num8, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num9, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
    connect(ui->pushButton_num00, &QPushButton::clicked, this, &MainWindow::numButtonsClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numButtonsClicked()
{
    QString src = this->sender()->objectName();
    qDebug()<<src;
}

void MainWindow::on_pushButton_ce_clicked()
{
    ui->lineEdit_result->setText("0");
}
