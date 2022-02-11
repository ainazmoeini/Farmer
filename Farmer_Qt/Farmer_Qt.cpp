#include "Farmer_Qt.h"
#include <QMessageBox>

Farmer_Qt::Farmer_Qt(QWidget *parent)
    : QMainWindow(parent)
{
    coin = 1000;
    sickle = 50;
    water = 100;
    wheat = 0;
    corn = 0;
    potatoes = 0;
    coinPs = 1;
    sicklePs = 0;
    waterPs = 0;
    wheatPs = 0;
    cornPs = 0;
    potatoesPs = 0;
    actions = 0;
    ui.setupUi(this);
    player = new Farmer("Ainaz", 20);
    Land_UI_Element* big1 = new Land_UI_Element(0, 0, new Land(100, 200, 2000));
    Land_UI_Element* big2 = new Land_UI_Element(150, 100, new Land(100, 200, 2000));
    Land_UI_Element* big3 = new Land_UI_Element(0, 300, new Land(100, 200, 2000));
    Land_UI_Element* medium1 = new Land_UI_Element(250, 0, new Land(100, 100, 1000));
    Land_UI_Element* medium2 = new Land_UI_Element(0, 100, new Land(100, 100, 1000));
    Land_UI_Element* medium3 = new Land_UI_Element(100, 200, new Land(100, 100, 1000));
    Land_UI_Element* medium4 = new Land_UI_Element(0, 200, new Land(100, 100, 1000));
    Land_UI_Element* medium5 = new Land_UI_Element(200, 300, new Land(100, 100, 1000));
    Land_UI_Element* small1 = new Land_UI_Element(200, 0, new Land(50, 50, 250));
    Land_UI_Element* small2 = new Land_UI_Element(200, 50, new Land(50,50 , 250));
    Land_UI_Element* small3 = new Land_UI_Element(100, 100, new Land(50,50 , 250));
    Land_UI_Element* small4 = new Land_UI_Element(100, 150, new Land(50, 50, 250));
    Land_UI_Element* small5 = new Land_UI_Element(200, 200, new Land(50, 50, 250));
    Land_UI_Element* small6 = new Land_UI_Element(250, 200, new Land(50, 50, 250));
    Land_UI_Element* small7 = new Land_UI_Element(200, 250, new Land(50, 50, 250));
    Land_UI_Element* small8 = new Land_UI_Element(250, 250, new Land(50, 50, 250));

    BigLands.push_back(big1);
    BigLands.push_back(big2);
    BigLands.push_back(big3);
    MediumLands.push_back(medium1);
    MediumLands.push_back(medium2);
    MediumLands.push_back(medium3);
    MediumLands.push_back(medium4);
    MediumLands.push_back(medium5);
    SmallLands.push_back(small1);
    SmallLands.push_back(small2);
    SmallLands.push_back(small3);
    SmallLands.push_back(small4);
    SmallLands.push_back(small5);
    SmallLands.push_back(small6);
    SmallLands.push_back(small7);
    SmallLands.push_back(small8);

    connect(ui.BigLand_pushButton, SIGNAL(clicked()), this, SLOT(Buy_BigLand()));
    connect(ui.MediumLand_pushButton, SIGNAL(clicked()), this, SLOT(Buy_MediumLand()));
    connect(ui.SmallLand_pushButton, SIGNAL(clicked()), this, SLOT(Buy_SmallLand()));
    //UpdateElements();
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Earn()));
    timer->start(1000);
}

void Farmer_Qt::paintEvent(QPaintEvent* event)
{
    if (actions==1)
    {
        QPainter painter(this);
        painter.setBrush(Qt::DiagCrossPattern);
        QPen pen;
        pen.setColor(Qt::green);
        pen.setWidth(1);
        painter.setPen(pen);
        Land_UI_Element* tempLand = BigLands.back();
        BigLands.pop_back();
        painter.fillRect(QRect(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength()), Qt::darkGreen);
        painter.drawRect(QRect(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength()));
        actions = 0;
    }
    else if (actions == 2)
    {
        QPainter painter(this);
        painter.setBrush(Qt::DiagCrossPattern);
        QPen pen;
        pen.setColor(Qt::green);
        pen.setWidth(1);
        painter.setPen(pen);
        Land_UI_Element* tempLand = MediumLands.back();
        MediumLands.pop_back();
        painter.fillRect(QRect(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength()), Qt::yellow);
        painter.drawRect(QRect(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength()));
        actions = 0;
    }
    else if (actions == 3)
    {
        QPainter painter(this);
        painter.setBrush(Qt::DiagCrossPattern);
        QPen pen;
        pen.setColor(Qt::green);
        pen.setWidth(1);
        painter.setPen(pen);
        Land_UI_Element* tempLand = SmallLands.back();
        SmallLands.pop_back();
        painter.fillRect(QRect(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength()), Qt::white);
        painter.drawRect(QRect(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength()));
        actions = 0;
    }
    
    //painter.eraseRect(QRect(10, 10, 220, 120));
    
}

void Farmer_Qt::Buy_BigLand()
{
    if (!BigLands.empty())
    {

        if (coin>=2000 && water>=400 && sickle>=300)
        {
            coin -= 2000;
            water -= 400;
            sickle -= 300;
            coinPs += 8;
            waterPs += 5;
            sicklePs += 3;
            wheatPs += 10;
            cornPs += 10;
            potatoesPs += 5;
            Land_UI_Element* tempLand = BigLands.back();
            player->buyLand(tempLand->land);
            QRect qr(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength());
            actions = 1;
            update(qr);
        }
        else 
        {
            QMetaObject::invokeMethod(ui.Message_label, "setText", Qt::QueuedConnection, Q_ARG(QString, "Not enough materials. coin=2000, water=400, sickle=300"));

            
        }
    }
}

void Farmer_Qt::Buy_MediumLand()
{
    if (!MediumLands.empty())
    {
        if (coin >= 1000 && water >= 100 && sickle >= 50)
        {
            coin -= 1000;
            water -= 100;
            sickle -= 50;
            coinPs += 2;
            waterPs += 3;
            sicklePs += 2;
            wheatPs += 5;
            cornPs += 5;
            potatoesPs += 3;
            Land_UI_Element* tempLand = MediumLands.back();
            player->buyLand(tempLand->land);
            QRect qr(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength());
            actions = 2;
            update(qr);
        }
        else {
            QMetaObject::invokeMethod(ui.Message_label, "setText", Qt::QueuedConnection, Q_ARG(QString, "Not enough materials. coin=1000, water=100, sickle=50"));

            
        }
    }
}

void Farmer_Qt::Buy_SmallLand()
{
    if (!SmallLands.empty())
    {
        if (coin >= 250 && water >= 50 && sickle >= 10)
        {
            coin -= 250;
            water -= 50;
            sickle -= 10;
            coinPs += 1;
            waterPs += 1;
            sicklePs += 1;
            wheatPs += 2;
            cornPs += 2;
            potatoesPs += 1;
            Land_UI_Element* tempLand = SmallLands.back();
            player->buyLand(tempLand->land);
            QRect qr(tempLand->x, tempLand->y, tempLand->land->getWidth(), tempLand->land->getLength());
            actions = 3;
            update(qr);
        }
        else {
            QMetaObject::invokeMethod(ui.Message_label, "setText", Qt::QueuedConnection, Q_ARG(QString, "Not enough materials. coin=250, water=50, sickle=10"));
            
        }
    }
}

void Farmer_Qt::Buy_Sickle()
{
}

void Farmer_Qt::Buy_Water()
{
}

void Farmer_Qt::Buy_Coin()
{
}

void Farmer_Qt::Buy_Wheat()
{
}

void Farmer_Qt::Buy_Corn()
{
}

void Farmer_Qt::Buy_Potatoes()
{
}

void Farmer_Qt::Earn()
{
    coin += coinPs;
    water += waterPs;
    sickle += sicklePs;
    corn += cornPs;
    wheat += wheatPs;
    potatoes += potatoesPs;
    UpdateElements();
}

void Farmer_Qt::UpdateElements()
{
    QMetaObject::invokeMethod(ui.Coin_label, "setText", Qt::QueuedConnection, Q_ARG(QString, QString::number(coin)));
    QMetaObject::invokeMethod(ui.Water_label, "setText", Qt::QueuedConnection, Q_ARG(QString, QString::number(water)));
    QMetaObject::invokeMethod(ui.Sickle_label, "setText", Qt::QueuedConnection, Q_ARG(QString, QString::number(sickle)));
    QMetaObject::invokeMethod(ui.Wheat_label, "setText", Qt::QueuedConnection, Q_ARG(QString, QString::number(wheat)));
    QMetaObject::invokeMethod(ui.Corn_label, "setText", Qt::QueuedConnection, Q_ARG(QString, QString::number(corn)));
    QMetaObject::invokeMethod(ui.Potatoes_label, "setText", Qt::QueuedConnection, Q_ARG(QString, QString::number(potatoes)));

    //ui.Coin_label->setText(QString::number(coin));
    //ui.Water_label->setText(QString::number(water));
    //ui.Sickle_label->setText(QString::number(sickle));
    //ui.Wheat_label->setText(QString::number(wheat));
    //ui.Corn_label->setText(QString::number(corn));
    //ui.Potatoes_label->setText(QString::number(potatoes));

}
