#include <QApplication>
#include "calculator/calculator.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    calculator w;
    w.show();
    return QApplication::exec();
}
