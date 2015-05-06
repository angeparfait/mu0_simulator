#include "aide.h"
#include "ui_aide.h"

Aide::Aide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Aide)
{
    ui->setupUi(this);
    int n=50;
    for(int i=0;i<n;i++)
    {
        ui->listWidget->addItem(QString::number(i) + "instruction");
    }
   /* ui->pushButton->setText("LDA");
    ui->pushButton_2->setText("STO");
    ui->pushButton_3->setText("ADD");
    ui->pushButton_4->setText("SUB");
    ui->pushButton_5->setText("OR");
    ui->pushButton_6->setText("AND");
    ui->pushButton_7->setText("XOR");
    ui->pushButton_8->setText("ROL");
    ui->pushButton_9->setText("LDR");
    ui->pushButton_10->setText("JGE");
    ui->pushButton_11->setText("GNE");
    ui->pushButton_12->setText("STP");
    ui->pushButton_13->setText("JMP");
    ui->pushButton_14->setText("LDI");
    ui->pushButton_15->setText("STI");
    ui->pushButton_16->setText("XPC");
    ui->pushButton_17->setText("Quitter");*/
}

Aide::~Aide()
{
    delete ui;
}

/*void Aide::on_pushButton_clicked()
{
    ui->textBrowser->setText("ACC <= mem16 [addr] :Charge dans l’accumulateur une valeur codée sur 16 bits stockée dans la mémoire à l’adresse addr (aussi sur 16 bits)");
}

void Aide::on_pushButton_2_clicked()
{
    ui->textBrowser->setText("mem16 [addr] <= ACC :Stocke la valeur de l’accumulateur dans l’adresse de 16 bits pointée");
}

void Aide::on_pushButton_3_clicked()
{
    ui->textBrowser->setText("ACC = ACC + mem16 [addr] :Additionne le contenu du registre ACC et le contenu stockée à l’adresse addr de 16 bits en mémoire. Cette valeur est ensuite contenue dans ACC.");}

void Aide::on_pushButton_4_clicked()
{
    ui->textBrowser->setText("ACC <= ACC - mem16 [addr] :soustrait le contenu du registre ACC le contenu de l’adresse addr. Le résultat est placé dans l’accumulateur");
}

void Aide::on_pushButton_5_clicked()
{
    ui->textBrowser->setText("ACC <= ACC or mem16 [addr] :OU logique entre l’accumulateur et le contenu de l’adresse de 16 bits et le résultat est placé dans le registre ACC.");
}

void Aide::on_pushButton_6_clicked()
{
    ui->textBrowser->setText("ACC <= ACC and mem16 [addr] :ET logique entre l’accumulateur et le contenu de l’adresse de 16 bits et le résultat est placé dans l’accumulateur");
}

void Aide::on_pushButton_7_clicked()
{
    ui->textBrowser->setText("ACC <= ACC xor mem16 [addr] :OU eXclusif logique entre l’accumulateur et le contenu de l’adresse de 16 bits et le résultat est placé dans le registre ACC");
}

void Aide::on_pushButton_8_clicked()
{
    ui->textBrowser->setText("ACC <= ACC rol mem16 [addr] (rotate left) :Rotation à gauche, effectue une rotation des bits sur la gauche sur 16 bits. Le bit de poids fort (MSB) est déplacé en lieu et place du bit de poids faible (LSB), et déplace tous les autres bits de 1 rang vers la gauche. L’opération est répétée autant de fois que la valeur stockée à l’adresse addr en mémoire et le résultat est placé dans le registre ACC.");
}

void Aide::on_pushButton_9_clicked()
{
    ui->textBrowser->setText("R <= addr :Registre de chargement, charge l’adresse dans le registre R");
}

void Aide::on_pushButton_10_clicked()
{
    ui->textBrowser->setText("Branchement conditionnel (si ACC = 0) à l’adresse.");
}

void Aide::on_pushButton_11_clicked()
{
    ui->textBrowser->setText("Branchement conditionnel (si ACC <= 0) à l’adresse.");
}

void Aide::on_pushButton_12_clicked()
{
    ui->textBrowser->setText("Arrêter le programme");
}

void Aide::on_pushButton_13_clicked()
{
    ui->textBrowser->setText("Branchement inconditionnel à l’adresse");
}

void Aide::on_pushButton_14_clicked()
{
    ui->textBrowser->setText("ACC <= mem16 [R] ; R <= R+1 :Charge dans la mémoire la valeur pointée par R dans la mémoire et le résultat est placé dans l’accumulateur et incrémente la valeur de R.");
}

void Aide::on_pushButton_15_clicked()
{
    ui->textBrowser->setText("R <= R-1; mem16 [R] <= ACC :Décrémente la valeur contenue dans R et charge dans la mémoire à l’adresse “R” la valeur contenue dans le registre ACC.");
}

void Aide::on_pushButton_16_clicked()
{
    ui->textBrowser->setText("ACC <= PC (eXchange PC and ACC) :Les registres accumulateur et compteur programme échangent leur contenu.");
}
*/
void Aide::on_pushButton_17_clicked()
{
    QApplication::exit();
}
