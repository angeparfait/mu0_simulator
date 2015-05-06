#include "apprendre.h"
#include "ui_apprendre.h"
#include <QString>
#include <QFile>
#include <QTextStream>

Apprendre::Apprendre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Apprendre)
{
    ui->setupUi(this);
    ui->pushButton_4->setText("Afficher Code Saisi");
    ui->label->setPixmap(QPixmap(":/new/prefix1/mu01"));
    ui->pushButton->setText("Quitter");
    ui->pushButton_5->setText("Exécuter");
    ui->label_2->setText("Saisir Instruction");
    ui->label_3->setText("Mon code saisi");
    ui->pushButton_2->setText("Sauvegarder");
    ui->pushButton_3->setText("Exécuter");
    /*ui->listWidget->addItem("LDA");
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
    int n = 50;
    for(int i = 0; i<n ; i++)
    {
        ui->listWidget->addItem(QString::number(i) + "instruction");
    }
}

Apprendre::~Apprendre()
{
    delete ui;
}

void Apprendre::on_pushButton_clicked()
{
    QApplication::exit();
}

void Apprendre::on_pushButton_3_clicked()
{

        if("LDA"){
        ui->label->setPixmap(QPixmap(":/new/prefix1/lda"));}
        //ui->label->setPixmap(QPixmap(":/new/prefix1/mu0");

}


void Apprendre::on_pushButton_2_clicked()
{
    writefile();
}

void Apprendre::writefile()
{
    QString str = ui->lineEdit->text();
    QString filename = "sauvegarde.txt";
    QFile file(filename);
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out << str << endl;
    file.close();
}

void Apprendre::on_pushButton_4_clicked()
{
    readfile();
}

void Apprendre::readfile()
{
    QString filename1 = "sauvegarde.txt";
    QFile file1(filename1);
    file1.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&file1);
    QString str1 = in.readLine();
    ui->lineEdit_2->setText(str1);
    file1.close();
}

