#ifndef TEST_H
#define TEST_H

#include <QtGui/QDialog>

namespace Ui {
    class Test;
}

class Test : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Test)
public:
    explicit Test(QWidget *parent = 0);
    virtual ~Test();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Test *m_ui;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
};

#endif // TEST_H
