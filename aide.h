#ifndef AIDE_H
#define AIDE_H
#include <phonon/MediaObject>
#include <phonon/MediaSource>
#include <QtGui/QDialog>

namespace Ui {
    class Aide;
}

class Aide : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Aide)
public:
    explicit Aide(QWidget *parent = 0);
    virtual ~Aide();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Aide *m_ui;
    //Phonon::MediaObject *music;

private slots:
    void on_pushButton_18_clicked();
    void on_pushButton_17_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
};

#endif // AIDE_H
