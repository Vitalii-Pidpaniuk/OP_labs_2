#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    NumberRangeWidget widget;
    widget.show();

    return app.exec();
}
