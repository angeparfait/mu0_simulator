#ifndef APPRENDRE_H
#define APPRENDRE_H

#include <QtGui/QDialog>
#include <QtCore>
#include <QtGui>

namespace Ui {
    class Apprendre;
}

class Apprendre : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Apprendre)
public:
    explicit Apprendre(QWidget *parent = 0);
    virtual ~Apprendre();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Apprendre *m_ui;
    QGraphicsScene *scene;
    QTimer *timer;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();
};

#endif // APPRENDRE_H
