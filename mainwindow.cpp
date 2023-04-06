#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datamanager.h"
#include <QtCore>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{ 
    ui->setupUi(this);
    showMaximized();
    QJsonObject o1
    {
        { "key", 1 },
        { "colorborder", "#234324" },
        {"colorlink","green"},
        { "color", "red" },
        {"type","1"},
        {"name","سبزوار"},
        {"title","CEO"},
    };
    QJsonObject o6
    {
        { "key", 2 },
        { "colorborder", "#234324" },
        {"colorlink","green"},
        { "color", "red" },
        {"type","1"},
        {"name","مشهد"},
        {"title","CEO"},
        {"parent",1},
    };
    QJsonObject o2
    {
        { "key", 3 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","نیشابور"},
        {"title","CEO"},
        {"parent",1},
    };
    QJsonObject o3
    {
        { "key", 4 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","شاهرود"},
        {"title","CEO"},
        {"parent",1},
    };
    QJsonObject o4
    {
        { "key", 5 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","سمنان"},
        {"title","CEO"},
        {"parent",2},
    };
    QJsonObject o5
    {
        { "key", 6 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",5},
    };
    QJsonObject o7
    {
        { "key", 7 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",5},
    };
    QJsonObject o8
    {
        { "key", 8 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",6},
    };
    QJsonObject o9
    {
        { "key", 9 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",8},
    };
    QJsonObject o10
    {
        { "key", 10 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",8},
    };
    QJsonObject o11
    {
        { "key", 11 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",10},
    };
    QJsonObject o12
    {
        { "key", 6 },
        { "colorborder", "#234324" },
        { "color", "red" },
        {"colorlink","green"},
        {"type","1"},
        {"name","تهران"},
        {"title","CEO"},
        {"parent",5},
    };
    QJsonArray arr;
    arr.append ( o1 );
    arr.append ( o2 );
    arr.append(o3);
    arr.append ( o4 );
    arr.append ( o5 );
    arr.append(o6);
    arr.append(o7);
    arr.append(o8);
    arr.append(o9);
    arr.append(o10);
    arr.append(o11);
    arr.append(o12);
    ///dispaly qml
    d=new DataManager();
    d->setJosnArray(arr);
    d->setBackdigram("#383b4d");
    d->setBackgrand("#2e355f");
    d->setfont(15);
    /// get file main.qml
    view= new QQuickView();
    QQmlContext *context =  view->rootContext();
    context->setContextProperty("Datamanager",d);
    view->setSource(QUrl("qrc:/main.qml"));
    /// set data class datamanager to main qml
    //view->engine()->rootContext()->setContextProperty("Datamanager",d);
    ///set qml to widget
    qmlwidget=QWidget::createWindowContainer(view);
    /// horizontalLayout creat in ui
    ui->horizontalLayout->addWidget(qmlwidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}

