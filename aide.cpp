#include "aide.h"
#include "ui_aide.h"
#include <QPainter>
#include <QPixmap>
int on2_off2 = 0;
Aide::Aide(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Aide)
{
    m_ui->setupUi(this);
    m_ui->pushButton->setText("Quitter");
    m_ui->pushButton_2->setText("LDA");
    m_ui->pushButton_3->setText("STO");
    m_ui->pushButton_17->setText("ADD");
    m_ui->pushButton_18->setText("SUB");
    m_ui->pushButton_4->setText("OR");
    m_ui->pushButton_5->setText("AND");
    m_ui->pushButton_6->setText("XOR");
    m_ui->pushButton_7->setText("ROL");
    m_ui->pushButton_9->setText("LDR");
    m_ui->pushButton_10->setText("JGE");
    m_ui->pushButton_11->setText("GNE");
    m_ui->pushButton_12->setText("STP");
    m_ui->pushButton_13->setText("JMP");
    m_ui->pushButton_14->setText("LDI");
    m_ui->pushButton_15->setText("STI");
    m_ui->pushButton_16->setText("XPC");


}

Aide::~Aide()
{
    delete m_ui;
}

void Aide::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Aide::on_pushButton_2_clicked()
{
    m_ui->textBrowser->setText("ACC <= mem16 [addr] :Charge dans l�accumulateur une valeur cod�e sur 16 bits stock�e dans la m�moire � l�adresse addr (aussi sur 16 bits)");
   // Phonon::MediaObject *music = Phonon::createPlayer(Phonon::MusicCategory,
                                                     // Phonon::MediaSource("\Desktop\musics\[Official Video] Little Drummer Boy - Pentatonix.mp3"));
   // music->play();
}


void Aide::on_pushButton_3_clicked()
{
    m_ui->textBrowser->setText("mem16 [addr] <= ACC :Stocke la valeur de l�accumulateur dans l�adresse de 16 bits point�e");
}

void Aide::on_pushButton_4_clicked()
{
   m_ui->textBrowser->setText("ACC <= ACC or mem16 [addr] :OU logique entre l�accumulateur et le contenu de l�adresse de 16 bits et le r�sultat est plac� dans le registre ACC.");
}

void Aide::on_pushButton_5_clicked()
{
    m_ui->textBrowser->setText("ACC <= ACC and mem16 [addr] :ET logique entre l�accumulateur et le contenu de l�adresse de 16 bits et le r�sultat est plac� dans l�accumulateur");
}

void Aide::on_pushButton_6_clicked()
{
    m_ui->textBrowser->setText("ACC <= ACC xor mem16 [addr] :OU eXclusif logique entre l�accumulateur et le contenu de l�adresse de 16 bits et le r�sultat est plac� dans le registre ACC");
}

void Aide::on_pushButton_7_clicked()
{
    m_ui->textBrowser->setText("ACC <= ACC rol mem16 [addr] (rotate left) :Rotation � gauche, effectue une rotation des bits sur la gauche sur 16 bits. Le bit de poids fort (MSB) est d�plac� en lieu et place du bit de poids faible (LSB), et d�place tous les autres bits de 1 rang vers la gauche. L�op�ration est r�p�t�e autant de fois que la valeur stock�e � l�adresse addr en m�moire et le r�sultat est plac� dans le registre ACC.");
}


void Aide::on_pushButton_9_clicked()
{
    m_ui->textBrowser->setText("R <= addr :Registre de chargement, charge l�adresse dans le registre R");
}

void Aide::on_pushButton_10_clicked()
{
    m_ui->textBrowser->setText("Branchement conditionnel (si ACC = 0) � l�adresse.");
}

void Aide::on_pushButton_11_clicked()
{
  m_ui->textBrowser->setText("Branchement conditionnel (si ACC <= 0) � l�adresse.");
}

void Aide::on_pushButton_12_clicked()
{
   m_ui->textBrowser->setText("Arr�ter le programme");
}

void Aide::on_pushButton_13_clicked()
{
    m_ui->textBrowser->setText("Branchement inconditionnel � l�adresse");
}

void Aide::on_pushButton_14_clicked()
{
    m_ui->textBrowser->setText("ACC <= mem16 [R] ; R <= R+1 :Charge dans la m�moire la valeur point�e par R dans la m�moire et le r�sultat est plac� dans l�accumulateur et incr�mente la valeur de R.");
}

void Aide::on_pushButton_15_clicked()
{
    m_ui->textBrowser->setText("R <= R-1; mem16 [R] <= ACC :D�cr�mente la valeur contenue dans R et charge dans la m�moire � l�adresse �R� la valeur contenue dans le registre ACC.");
}

void Aide::on_pushButton_16_clicked()
{
     m_ui->textBrowser->setText("ACC <= PC (eXchange PC and ACC) :Les registres accumulateur et compteur programme �changent leur contenu.");
}

void Aide::on_pushButton_17_clicked()
{
  m_ui->textBrowser->setText("ACC = ACC + mem16 [addr] :Additionne le contenu du registre ACC et le contenu stock�e � l�adresse addr de 16 bits en m�moire. Cette valeur est ensuite contenue dans ACC.");
}

void Aide::on_pushButton_18_clicked()
{
    m_ui->textBrowser->setText("ACC <= ACC - mem16 [addr] :soustrait le contenu du registre ACC le contenu de l�adresse addr. Le r�sultat est plac� dans l�accumulateur");
}
