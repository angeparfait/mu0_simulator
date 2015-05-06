#ifndef APPRENDRE_H
#define APPRENDRE_H

#include <QDialog>

namespace Ui {
class Apprendre;
}

class Apprendre : public QDialog
{
    Q_OBJECT

public:
    explicit Apprendre(QWidget *parent = 0);
    ~Apprendre();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Apprendre *ui;
    void writefile();
    void readfile();
};

#endif // APPRENDRE_H
