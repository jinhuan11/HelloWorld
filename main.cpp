#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Hello World!";
    qDebug() << "I is using github first.";
    qDebug() << "end the program with any key.";

    return a.exec();
}
