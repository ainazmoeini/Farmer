/********************************************************************************
** Form generated from reading UI file 'Farmer_Qt.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FARMER_QT_H
#define UI_FARMER_QT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Farmer_QtClass
{
public:
    QWidget *centralWidget;
    QPushButton *BigLand_pushButton;
    QPushButton *MediumLand_pushButton;
    QPushButton *SmallLand_pushButton;
    QPushButton *Water_pushButton;
    QPushButton *Sickle_pushButton;
    QPushButton *Coin_pushButton;
    QPushButton *Corn_pushButton;
    QPushButton *Wheat_pushButton;
    QPushButton *Potatoes_pushButton;
    QLabel *BigLand_label;
    QLabel *MediumLand_label;
    QLabel *SmallLand_label;
    QLabel *Sickle_label;
    QLabel *Water_label;
    QLabel *Coin_label;
    QLabel *Wheat_label;
    QLabel *Corn_label;
    QLabel *Potatoes_label;
    QLabel *Message_label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Farmer_QtClass)
    {
        if (Farmer_QtClass->objectName().isEmpty())
            Farmer_QtClass->setObjectName(QString::fromUtf8("Farmer_QtClass"));
        Farmer_QtClass->setWindowModality(Qt::NonModal);
        Farmer_QtClass->resize(600, 400);
        Farmer_QtClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        Farmer_QtClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Farmer_QtClass->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(Farmer_QtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BigLand_pushButton = new QPushButton(centralWidget);
        BigLand_pushButton->setObjectName(QString::fromUtf8("BigLand_pushButton"));
        BigLand_pushButton->setGeometry(QRect(570, 10, 23, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Pictures/BigLand.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        BigLand_pushButton->setIcon(icon);
        BigLand_pushButton->setIconSize(QSize(23, 23));
        MediumLand_pushButton = new QPushButton(centralWidget);
        MediumLand_pushButton->setObjectName(QString::fromUtf8("MediumLand_pushButton"));
        MediumLand_pushButton->setGeometry(QRect(570, 40, 18, 18));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../Pictures/MediumLand.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MediumLand_pushButton->setIcon(icon1);
        MediumLand_pushButton->setIconSize(QSize(18, 18));
        SmallLand_pushButton = new QPushButton(centralWidget);
        SmallLand_pushButton->setObjectName(QString::fromUtf8("SmallLand_pushButton"));
        SmallLand_pushButton->setGeometry(QRect(570, 70, 12, 12));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../Pictures/SmallLand.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SmallLand_pushButton->setIcon(icon2);
        SmallLand_pushButton->setIconSize(QSize(12, 12));
        Water_pushButton = new QPushButton(centralWidget);
        Water_pushButton->setObjectName(QString::fromUtf8("Water_pushButton"));
        Water_pushButton->setGeometry(QRect(570, 120, 22, 22));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../Pictures/water.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Water_pushButton->setIcon(icon3);
        Water_pushButton->setIconSize(QSize(22, 22));
        Sickle_pushButton = new QPushButton(centralWidget);
        Sickle_pushButton->setObjectName(QString::fromUtf8("Sickle_pushButton"));
        Sickle_pushButton->setGeometry(QRect(570, 90, 22, 22));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../Pictures/sickle.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Sickle_pushButton->setIcon(icon4);
        Sickle_pushButton->setIconSize(QSize(18, 22));
        Coin_pushButton = new QPushButton(centralWidget);
        Coin_pushButton->setObjectName(QString::fromUtf8("Coin_pushButton"));
        Coin_pushButton->setGeometry(QRect(570, 150, 22, 22));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../Pictures/Coin.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Coin_pushButton->setIcon(icon5);
        Coin_pushButton->setIconSize(QSize(22, 22));
        Corn_pushButton = new QPushButton(centralWidget);
        Corn_pushButton->setObjectName(QString::fromUtf8("Corn_pushButton"));
        Corn_pushButton->setGeometry(QRect(570, 210, 22, 22));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../../../Pictures/Corn.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Corn_pushButton->setIcon(icon6);
        Corn_pushButton->setIconSize(QSize(22, 22));
        Wheat_pushButton = new QPushButton(centralWidget);
        Wheat_pushButton->setObjectName(QString::fromUtf8("Wheat_pushButton"));
        Wheat_pushButton->setGeometry(QRect(570, 180, 22, 22));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../../../Pictures/Wheat.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Wheat_pushButton->setIcon(icon7);
        Wheat_pushButton->setIconSize(QSize(22, 22));
        Potatoes_pushButton = new QPushButton(centralWidget);
        Potatoes_pushButton->setObjectName(QString::fromUtf8("Potatoes_pushButton"));
        Potatoes_pushButton->setGeometry(QRect(570, 240, 22, 22));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../../../Pictures/Potatoes.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Potatoes_pushButton->setIcon(icon8);
        Potatoes_pushButton->setIconSize(QSize(22, 22));
        BigLand_label = new QLabel(centralWidget);
        BigLand_label->setObjectName(QString::fromUtf8("BigLand_label"));
        BigLand_label->setGeometry(QRect(510, 12, 49, 16));
        BigLand_label->setAlignment(Qt::AlignCenter);
        MediumLand_label = new QLabel(centralWidget);
        MediumLand_label->setObjectName(QString::fromUtf8("MediumLand_label"));
        MediumLand_label->setGeometry(QRect(510, 40, 49, 16));
        MediumLand_label->setAlignment(Qt::AlignCenter);
        SmallLand_label = new QLabel(centralWidget);
        SmallLand_label->setObjectName(QString::fromUtf8("SmallLand_label"));
        SmallLand_label->setGeometry(QRect(510, 68, 49, 16));
        SmallLand_label->setAlignment(Qt::AlignCenter);
        Sickle_label = new QLabel(centralWidget);
        Sickle_label->setObjectName(QString::fromUtf8("Sickle_label"));
        Sickle_label->setGeometry(QRect(510, 93, 49, 16));
        Sickle_label->setAlignment(Qt::AlignCenter);
        Water_label = new QLabel(centralWidget);
        Water_label->setObjectName(QString::fromUtf8("Water_label"));
        Water_label->setGeometry(QRect(510, 123, 49, 16));
        Water_label->setAlignment(Qt::AlignCenter);
        Coin_label = new QLabel(centralWidget);
        Coin_label->setObjectName(QString::fromUtf8("Coin_label"));
        Coin_label->setGeometry(QRect(510, 154, 49, 16));
        Coin_label->setAlignment(Qt::AlignCenter);
        Wheat_label = new QLabel(centralWidget);
        Wheat_label->setObjectName(QString::fromUtf8("Wheat_label"));
        Wheat_label->setGeometry(QRect(510, 184, 49, 16));
        Wheat_label->setAlignment(Qt::AlignCenter);
        Corn_label = new QLabel(centralWidget);
        Corn_label->setObjectName(QString::fromUtf8("Corn_label"));
        Corn_label->setGeometry(QRect(510, 214, 49, 16));
        Corn_label->setAlignment(Qt::AlignCenter);
        Potatoes_label = new QLabel(centralWidget);
        Potatoes_label->setObjectName(QString::fromUtf8("Potatoes_label"));
        Potatoes_label->setGeometry(QRect(510, 244, 49, 16));
        Potatoes_label->setAlignment(Qt::AlignCenter);
        Message_label = new QLabel(centralWidget);
        Message_label->setObjectName(QString::fromUtf8("Message_label"));
        Message_label->setGeometry(QRect(238, 350, 351, 20));
        Farmer_QtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Farmer_QtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Farmer_QtClass->setStatusBar(statusBar);

        retranslateUi(Farmer_QtClass);

        QMetaObject::connectSlotsByName(Farmer_QtClass);
    } // setupUi

    void retranslateUi(QMainWindow *Farmer_QtClass)
    {
        Farmer_QtClass->setWindowTitle(QCoreApplication::translate("Farmer_QtClass", "Farmer_Qt", nullptr));
#if QT_CONFIG(tooltip)
        Farmer_QtClass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Farmer_QtClass->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        BigLand_pushButton->setText(QString());
        MediumLand_pushButton->setText(QString());
        SmallLand_pushButton->setText(QString());
        Water_pushButton->setText(QString());
        Sickle_pushButton->setText(QString());
        Coin_pushButton->setText(QString());
        Corn_pushButton->setText(QString());
        Wheat_pushButton->setText(QString());
        Potatoes_pushButton->setText(QString());
        BigLand_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        MediumLand_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        SmallLand_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        Sickle_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        Water_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        Coin_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        Wheat_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        Corn_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        Potatoes_label->setText(QCoreApplication::translate("Farmer_QtClass", "0", nullptr));
        Message_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Farmer_QtClass: public Ui_Farmer_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FARMER_QT_H
