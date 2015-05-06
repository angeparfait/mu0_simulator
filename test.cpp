#include "test.h"
#include "ui_test.h"

Test::Test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Test)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/new/prefix1/mu01"));
   /* ui->listWidget->addItem("LDA");
    ui->listWidget->addItem("STO");
    ui->listWidget->addItem("ADD");
    ui->listWidget->addItem("SUB");
    ui->listWidget->addItem("OR");
    ui->listWidget->addItem("AND");
    ui->listWidget->addItem("XOR");
    ui->listWidget->addItem("ROL");
    ui->listWidget->addItem("LDR");
    ui->listWidget->addItem("JGE");
    ui->listWidget->addItem("GNE");
    ui->listWidget->addItem("STP");
    ui->listWidget->addItem("JMP");
    ui->listWidget->addItem("LDI");
    ui->listWidget->addItem("STI");
    ui->listWidget->addItem("XPC");*/
    ui->pushButton->setText("Exécuter");
    ui->pushButton_3->setText("Quitter");
    ui->pushButton_2->setText("Sauvegarder");
    int n = 50;
    for(int i = 0; i<n; i++)
    {
        ui->listWidget->addItem(QString::number(i) + "instruction");
    }
}

Test::~Test()
{
    delete ui;
}

void Test::on_pushButton_3_clicked()
{
    QApplication::exit();
}
