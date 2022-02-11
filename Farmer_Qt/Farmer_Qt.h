#pragma once

#include <QtWidgets/QMainWindow>
#include <qpainter.h>
#include "ui_Farmer_Qt.h"
#include "Farmer.h"
#include <vector>
#include "Land_UI_Element.h"
#include <qtimer.h>

class Farmer_Qt : public QMainWindow
{
    Q_OBJECT

public:
    Farmer_Qt(QWidget *parent = Q_NULLPTR);
    virtual void paintEvent(QPaintEvent* event);
private slots:
    void Buy_BigLand();
    void Buy_MediumLand();
    void Buy_SmallLand();
    void Buy_Sickle();
    void Buy_Water();
    void Buy_Coin();
    void Buy_Wheat();
    void Buy_Corn();
    void Buy_Potatoes();
    void Earn();
private:
    Farmer* player;
    vector<Land_UI_Element*> BigLands;
    vector<Land_UI_Element*> MediumLands;
    vector<Land_UI_Element*> SmallLands;
    int coin;
    int sickle;
    int water;
    int wheat;
    int corn;
    int potatoes;
    int actions;
    int coinPs;
    int wheatPs;
    int waterPs;
    int sicklePs;
    int cornPs;
    int potatoesPs;
    void UpdateElements();
    Ui::Farmer_QtClass ui;
};
