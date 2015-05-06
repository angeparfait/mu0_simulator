#include "mu0.h"
#include "ui_mu0.h"

Mu0::Mu0(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mu0)
{
    ui->setupUi(this);
    ui->pushButton->setText("Quitter");
    ui->label_4->setPixmap(QPixmap(":/new/prefix1/mu0"));
}

Mu0::~Mu0()
{
    delete ui;
}

void Mu0::on_actionApprendre_triggered()
{
    apprendre = new Apprendre(this);
    apprendre->show();
}

void Mu0::on_pushButton_clicked()
{
    QApplication::exit();
}

void Mu0::on_actionTest_triggered()
{
    test = new Test(this);
    test->show();
}

void Mu0::on_actionAide_triggered()
{
    aide = new Aide(this);
    aide->show();
}
