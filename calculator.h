#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QWidget {
Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);

    ~calculator() override;

private:
    Ui::calculator *ui;
};


#endif //CALCULATOR_H
