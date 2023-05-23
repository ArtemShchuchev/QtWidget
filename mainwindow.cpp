#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->centralwidget-> // Не нашел как сделать окно минимального размера (установил размер в "Дизайн")?

    ui->groupBox->setTitle("Список опций");
    ui->radioButton->setText("Опция 1");
    ui->radioButton_2->setText("Опция 2");

    for (int i(1); i<=5; ++i)
    {
        ui->comboBox->addItem("Выпадающий список " + QString::number(i));
    }

    ui->progressBar->setRange(0,10);
    ui->progressBar->setValue(0);

    ui->pushButton->setText("+10%");
    ui->pushButton->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    int count = ui->progressBar->value();
    if (++count > 10) count = 0;
    ui->progressBar->setValue(count);
}

