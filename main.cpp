#include "mainwindow.h"
#include <iostream>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cout << "hello" << endl;
    cout << "bye bye" << endl;

    MainWindow w;
    w.show();
    return a.exec();
}
