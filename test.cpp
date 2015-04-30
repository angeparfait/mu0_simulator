#include "test.h"
#include "ui_test.h"
#include <QPixmap>
#include <QPainter>

int couner1 = 0;
bool on1_off1 = true;

Test::Test(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Test)
{
    m_ui->setupUi(this);
    m_ui->label->setPixmap(QPixmap(":new/prefix1/mu0"));
    m_ui->pushButton_3->setText("Comprendre l'exécution");
    m_ui->pushButton_4->setText("pause");
    m_ui->pushButton->setText("Sauvarge votre code");
    m_ui->pushButton_2->setText("Retour Menu");
     m_ui->listWidget->addItem("LDA");
    m_ui->listWidget->addItem("STO");
    m_ui->listWidget->addItem("OR");
    m_ui->listWidget->addItem("AND");
    m_ui->listWidget->addItem("XOR");
    m_ui->listWidget->addItem("ROL");
    m_ui->listWidget->addItem("ROR");
    m_ui->listWidget->addItem("LDR");
    m_ui->listWidget->addItem("JGE");
    m_ui->listWidget->addItem("GNE");
    m_ui->listWidget->addItem("STP");
    m_ui->listWidget->addItem("JMP");
    m_ui->listWidget->addItem("LDI");
    m_ui->listWidget->addItem("STI");
    m_ui->listWidget->addItem("XPC");
}

Test::~Test()
{
    delete m_ui;
}

void Test::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Test::on_pushButton_3_clicked()
{
    on1_off1 = true;
    while(on1_off1 == true){

    QApplication::processEvents();
    QPixmap ship(":/new/prefix1/mu0");
    QPixmap rotate(ship.size());

    QPainter p(&rotate);
    p.setRenderHint(QPainter::Antialiasing);
    p.setRenderHint(QPainter::SmoothPixmapTransform);
    p.setRenderHint(QPainter::HighQualityAntialiasing);
    p.translate(rotate.size().width() / 2, rotate.size().height() / 2);
    p.rotate(couner1);
    p.translate(-rotate.size().width() / 2, rotate.size().height() / 2);

    p.drawPixmap(0, 0, ship);
    p.end();
    m_ui->label->setPixmap(rotate);
    couner1++;
}
}

void Test::on_pushButton_4_clicked()
{
    on1_off1 = false;
}
