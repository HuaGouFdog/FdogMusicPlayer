/********************************************************************************
** Form generated from reading UI file 'lenon.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LENON_H
#define UI_LENON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lenon
{
public:
    QFrame *frame;
    QLabel *label;
    QSlider *horizontalSlider;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Lenon)
    {
        if (Lenon->objectName().isEmpty())
            Lenon->setObjectName(QStringLiteral("Lenon"));
        Lenon->resize(341, 100);
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/yinyue.png"), QSize(), QIcon::Normal, QIcon::Off);
        Lenon->setWindowIcon(icon);
        Lenon->setStyleSheet(QLatin1String("\n"
"#Lenon{\n"
"background:rgba(0,255,255,0.4);\n"
"}"));
        frame = new QFrame(Lenon);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 341, 101));
        frame->setStyleSheet(QLatin1String("#frame\n"
"{\n"
"border-radius:10px;\n"
"border-width:4px;\n"
"border-style:solid ;\n"
"border-image: url(:/lib2/870.JPG);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 321, 31));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 44, 321, 11));
        horizontalSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid #4A708B;\n"
"    background: #C0C0C0;\n"
"    height: 5px;\n"
"    border-radius: 1px;\n"
"    padding-left:-1px;\n"
"    padding-right:-1px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"        stop: 0 #5DCCFF, stop: 1 #1874CD);\n"
"    border: 1px solid #4A708B;\n"
"    height: 10px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #575757;\n"
"    border: 0px solid #777;\n"
"    height: 10px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal\n"
"{\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5,\n"
"        stop:0.6 #45ADED, stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3px;\n"
"    border-radius: 5px;\n"
""
                        "}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #2A8BDA,\n"
"        stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #00009C;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #aaa;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 60, 30, 30));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/lib2/shangyiqu.png);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 60, 30, 30));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/lib2/bofangzanting.png);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 60, 30, 30));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/lib2/xiayiqu.png);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 65, 20, 20));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/lib2/jijianmoshi.png);"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 65, 20, 20));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/lib2/suiji.png);"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 65, 20, 20));
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/lib2/shengyin.png);"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(270, 65, 20, 20));
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/lib2/ci.png);"));

        retranslateUi(Lenon);

        QMetaObject::connectSlotsByName(Lenon);
    } // setupUi

    void retranslateUi(QWidget *Lenon)
    {
        Lenon->setWindowTitle(QApplication::translate("Lenon", "\346\227\255\345\220\254\351\237\263\344\271\220", nullptr));
        label->setText(QApplication::translate("Lenon", "\344\270\200\346\233\262\347\233\270\346\200\235-\351\230\277\346\202\240\346\202\240", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Lenon: public Ui_Lenon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LENON_H
