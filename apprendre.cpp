#include "apprendre.h"
#include "ui_apprendre.h"
#include "macirculation.h"
#include <QPixmap>
#include <QPainter>

int couner = 0;
bool on_off = true;

Apprendre::Apprendre(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Apprendre)
{

    m_ui->setupUi(this);
    m_ui->label->setPixmap(QPixmap(":/new/prefix1/mu0"));
    m_ui->pushButton_2->setText("Sauvegarde");
    m_ui->pushButton_3->setText("Retour Menu");
    m_ui->pushButton->setText("Comprendre l'exécution");
    m_ui->pushButton_4->setText("pause");
    m_ui->listWidget->addItem("LDA");
    m_ui->listWidget->addItem("STO");
    m_ui->listWidget->addItem("ADD");
    m_ui->listWidget->addItem("SUB");
    m_ui->listWidget->addItem("OR");
    m_ui->listWidget->addItem("AND");
    m_ui->listWidget->addItem("XOR");
    m_ui->listWidget->addItem("ROL");
    m_ui->listWidget->addItem("LDR");
    m_ui->listWidget->addItem("JGE");
    m_ui->listWidget->addItem("GNE");
    m_ui->listWidget->addItem("STP");
    m_ui->listWidget->addItem("JMP");
    m_ui->listWidget->addItem("LDI");
    m_ui->listWidget->addItem("STI");
    m_ui->listWidget->addItem("XPC");



scene = new QGraphicsScene(this);
m_ui->graphicsView->setScene(scene);
m_ui->graphicsView->setRenderHint(QPainter::Antialiasing);
scene->setSceneRect(-100,-100,100,100);
QPen mypen = QPen(Qt::yellow);

QLineF TopLine(scene->sceneRect().topLeft(), scene->sceneRect().topRight());
QLineF LeftLine(scene->sceneRect().topLeft(), scene->sceneRect().bottomLeft());
QLineF RightLine(scene->sceneRect().topRight(), scene->sceneRect().bottomRight());
QLineF BottomLine(scene->sceneRect().bottomLeft(), scene->sceneRect().bottomRight());

scene->addLine(TopLine,mypen);
scene->addLine(LeftLine,mypen);
scene->addLine(RightLine,mypen);
scene->addLine(BottomLine,mypen);


int circule = 1;
for(int i = 0; i < circule; i++)
{
    MaCirculation *circule = new MaCirculation();
    scene->addItem(circule);
}

timer = new QTimer(this);
connect(timer,SIGNAL(timeout()), scene, SLOT(advance()));
timer->start(10);






}

Apprendre::~Apprendre()
{
    delete m_ui;
}

void Apprendre::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Apprendre::on_pushButton_clicked()
{
    on_off = true;
    while(on_off == true){

    QApplication::processEvents();
    QPixmap ship(":/new/prefix1/mu0");
    QPixmap rotate(ship.size());

    QPainter p(&rotate);
    p.setRenderHint(QPainter::Antialiasing);
    p.setRenderHint(QPainter::SmoothPixmapTransform);
    p.setRenderHint(QPainter::HighQualityAntialiasing);
    p.translate(rotate.size().width() / 2, rotate.size().height() / 2);
    p.rotate(couner);
    p.translate(-rotate.size().width() / 2, rotate.size().height() / 2);

    p.drawPixmap(0, 0, ship);
    p.end();
    m_ui->label->setPixmap(rotate);
    couner++;
}
}

void Apprendre::on_pushButton_4_clicked()
{
    on_off = false;
}
