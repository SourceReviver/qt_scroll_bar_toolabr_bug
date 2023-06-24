#include "mwindow.h"
#include <QDockWidget>
#include <QToolBar>
#include <QStyle>

mwindow::mwindow(QWidget *p): QMainWindow(p) {
    auto d1 = new QDockWidget(this);
    auto t1 = new QToolBar(this);
    auto w1 = new QWidget(this);
    w1->setStyleSheet("background: blue;");

    t1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    for (int i = 0; i < 10; ++i) {
        auto temp = new QAction("Dummy Long Text");
        temp->setIcon(this->style()->standardIcon(QStyle::SP_DirIcon));
        t1->addAction(temp);

    }

    addDockWidget(Qt::LeftDockWidgetArea,d1);
    addToolBar(t1);

    setCentralWidget(w1);

    resize(400,400);
}
