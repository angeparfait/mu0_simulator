#ifndef MU0_H
#define MU0_H

#include <QMainWindow>
#include "apprendre.h"
#include "test.h"
#include "aide.h"

namespace Ui {
class Mu0;
}

class Mu0 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mu0(QWidget *parent = 0);
    ~Mu0();

private slots:
    void on_actionApprendre_triggered();

    void on_pushButton_clicked();

    void on_actionTest_triggered();

    void on_actionAide_triggered();

private:
    Ui::Mu0 *ui;
    Apprendre *apprendre;
    Test *test;
    Aide *aide;
};

#endif // MU0_H
