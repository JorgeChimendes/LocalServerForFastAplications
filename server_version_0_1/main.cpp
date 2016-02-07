#include <QCoreApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "myserver.h"

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);


    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    return app.exec();

    MyServer mServer;




}

