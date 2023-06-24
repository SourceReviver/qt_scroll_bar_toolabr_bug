#include <QDebug>
#include <QApplication>
#include "mwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    auto win = new mwindow(nullptr);
    win->show();
    return QApplication::exec();
}
