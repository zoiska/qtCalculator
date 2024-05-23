#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QString>
#include <string>


QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QWidget {
Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);

    ~calculator() override;

private slots:
    void zero();
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();
    void multiply();
    void divide();
    void subtract();
    void add();
    void comma();
    void enter();
    void del();
    void all_clear();
    void negate();
    void bracket_open();
    void bracket_close();

private:
    Ui::calculator *ui;
};


#endif //CALCULATOR_H
