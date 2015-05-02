#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QModelIndex>
#include "apprendre.h"
#include "test.h"
#include "aide.h"
namespace Ui
{
    class MainWindowClass;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;
    Apprendre *apprendre;
    Test *test;
    Aide *aide;

private slots:
    void on_actionAide_triggered();
    void on_actionTester_triggered();
    void on_actionApprendre_triggered();
};

#endif // MAINWINDOW_H
