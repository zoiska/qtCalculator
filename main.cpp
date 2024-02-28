#include <QApplication>
#include <QPushButton>
#include "calculator.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    calculator w;
    w.show();
    return QApplication::exec();
}
