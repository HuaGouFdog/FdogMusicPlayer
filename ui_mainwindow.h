/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_5;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButton_1;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *toolButton_4;
    QLabel *label_3;
    QLabel *label_6;
    QFrame *frame_2;
    QPushButton *pushButton_4;
    QSlider *horizontalSlider_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QSlider *verticalSlider;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton;
    QPushButton *pushButton_16;
    QLabel *label_10;
    QLabel *label_15;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QWidget *page_2;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QWidget *page_3;
    QTableWidget *tableWidget;
    QWidget *page_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1101, 700);
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/yinyue.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("#centralWidget\n"
"{\n"
"border-image: url(:/lib/5.jpg);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(893, 5, 201, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        toolButton_5 = new QToolButton(frame_4);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setMinimumSize(QSize(23, 23));
        toolButton_5->setStyleSheet(QLatin1String("\n"
"#toolButton_5\n"
"{\n"
"border-image: url(:/lib/pifu.png);\n"
"}\n"
"\n"
"#toolButton_5::hover\n"
"{\n"
"background-color: rgba(245, 245, 245, 80);\n"
"}"));
        toolButton_5->setPopupMode(QToolButton::DelayedPopup);
        toolButton_5->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_5->setAutoRaise(false);
        toolButton_5->setArrowType(Qt::NoArrow);

        horizontalLayout_4->addWidget(toolButton_5);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        toolButton_1 = new QToolButton(frame_4);
        toolButton_1->setObjectName(QStringLiteral("toolButton_1"));
        toolButton_1->setMinimumSize(QSize(20, 20));
        toolButton_1->setStyleSheet(QLatin1String("\n"
"#toolButton_1\n"
"{\n"
"border-image: url(:/lib/xuanxiang.png);\n"
"}\n"
"\n"
"#toolButton_1::hover\n"
"{\n"
"background-color: rgba(245, 245, 245, 80);\n"
"}"));
        toolButton_1->setPopupMode(QToolButton::DelayedPopup);
        toolButton_1->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_1->setAutoRaise(false);
        toolButton_1->setArrowType(Qt::NoArrow);

        horizontalLayout_4->addWidget(toolButton_1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        toolButton_2 = new QToolButton(frame_4);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(20, 20));
        toolButton_2->setStyleSheet(QLatin1String("#toolButton_2\n"
"{\n"
"border-image: url(:/lib/zuixiao.png);\n"
"}\n"
"\n"
"#toolButton_2::hover\n"
"{\n"
"background-color: rgba(245, 245, 245, 80);\n"
"}"));

        horizontalLayout_4->addWidget(toolButton_2);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        toolButton_3 = new QToolButton(frame_4);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(20, 20));
        toolButton_3->setStyleSheet(QLatin1String("\n"
"#toolButton_3\n"
"{\n"
"border-image: url(:/lib/zuidahua.png);\n"
"}\n"
"#toolButton_3::hover\n"
"{\n"
"background-color: rgba(245, 245, 245, 80);\n"
"}"));

        horizontalLayout_4->addWidget(toolButton_3);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        toolButton_4 = new QToolButton(frame_4);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(20, 20));
        toolButton_4->setStyleSheet(QLatin1String("#toolButton_4\n"
"{\n"
"border-image: url(:/lib/guanbi.png);\n"
"}\n"
"#toolButton_4::hover\n"
"{\n"
"background-color: rgba(245, 245, 245, 80);\n"
"}"));

        horizontalLayout_4->addWidget(toolButton_4);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1101, 51));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(0, 255, 255,70);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-1, 51, 1102, 651));
        QFont font;
        font.setPointSize(9);
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("background-color: rgba(0, 255, 255,70);"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(339, 639, 521, 55));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(63, 19, 20, 20));
        pushButton_4->setMinimumSize(QSize(20, 20));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/xunhuan.png);"));
        horizontalSlider_2 = new QSlider(frame_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(400, 23, 100, 10));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(369, 18, 21, 20));
        pushButton_5->setMinimumSize(QSize(20, 20));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/lib/shengyin.png);"));
        pushButton_1 = new QPushButton(frame_2);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(120, 10, 40, 40));
        pushButton_1->setMinimumSize(QSize(40, 40));
        pushButton_1->setStyleSheet(QStringLiteral("border-image: url(:/lib/shangyiqu.png);"));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(305, 10, 40, 40));
        pushButton_3->setMinimumSize(QSize(40, 40));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/lib/shangyiqu.png);"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 6, 50, 50));
        pushButton_2->setMinimumSize(QSize(50, 50));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/lib/1zantingtingzhi.png);"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setGeometry(QRect(300, 627, 621, 16));
        horizontalSlider->setMinimumSize(QSize(153, 0));
        horizontalSlider->setSingleStep(0);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickInterval(0);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(920, 630, 91, 21));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(11111111, 16777215));
        label->setStyleSheet(QLatin1String("font: 75 11pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        label->setIndent(-1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(22, 12, 123, 38));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/b.png);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 638, 181, 20));
        label_2->setStyleSheet(QLatin1String("font:16px;\n"
"\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(922, 660, 31, 30));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/lib/ci-copy.png);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(969, 660, 31, 31));
        label_7->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"border-image: url(:/lib/su.png);\n"
"\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 10, 311, 31));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:8px;\n"
"border-width:2px;\n"
"border-style:solid ;\n"
"border-color:rgb(163, 163, 163);"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(462, 15, 23, 23));
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/lib/sousuo.png);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(767, 14, 27, 27));
        label_8->setStyleSheet(QStringLiteral("border-image: url(:/lib/touxiang.png);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(800, 18, 71, 17));
        label_9->setStyleSheet(QLatin1String("font: 14px;\n"
"\n"
"color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(108, 665, 20, 20));
        label_11->setStyleSheet(QLatin1String("\n"
"border-image: url(:/lib/love.png);"));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(1012, 630, 16, 61));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(3);
        verticalSlider->setOrientation(Qt::Vertical);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 80, 81, 21));
        label_12->setStyleSheet(QLatin1String("\n"
"font: 11pt;\n"
"color: rgb(255, 255, 255);"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 240, 81, 21));
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setStyleSheet(QLatin1String("\n"
"font: 11pt;\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 440, 81, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_14->setFont(font1);
        label_14->setStyleSheet(QLatin1String("\n"
"font: 11pt;\n"
"color: rgb(255, 255, 255);"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 110, 151, 31));
        QFont font2;
        font2.setPointSize(12);
        pushButton_8->setFont(font2);
        pushButton_8->setLayoutDirection(Qt::LeftToRight);
        pushButton_8->setStyleSheet(QLatin1String("#pushButton_8\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"#pushButton_8::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/lib/sousuo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setAutoRepeatDelay(300);
        pushButton_8->setAutoRepeatInterval(100);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 150, 151, 31));
        QFont font3;
        font3.setPointSize(11);
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QLatin1String("#pushButton_9\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_9::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/lib/gedan_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon2);
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 190, 151, 31));
        pushButton_10->setFont(font2);
        pushButton_10->setStyleSheet(QLatin1String("#pushButton_10\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_10::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/lib/paihangbang.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon3);
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 270, 151, 31));
        pushButton_11->setFont(font2);
        pushButton_11->setStyleSheet(QLatin1String("#pushButton_11\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_11::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/lib/gedan.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon4);
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 350, 151, 31));
        pushButton_12->setFont(font2);
        pushButton_12->setStyleSheet(QLatin1String("#pushButton_12\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_12::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/lib/love.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon5);
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 390, 151, 31));
        pushButton_13->setFont(font2);
        pushButton_13->setStyleSheet(QLatin1String("#pushButton_13\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_13::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/lib/bendi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon6);
        pushButton_13->setIconSize(QSize(16, 16));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 470, 151, 31));
        pushButton_14->setFont(font2);
        pushButton_14->setStyleSheet(QLatin1String("#pushButton_14\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_14::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/lib/xiazai.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon7);
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 510, 151, 31));
        pushButton_15->setFont(font2);
        pushButton_15->setStyleSheet(QLatin1String("#pushButton_15\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_15::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/lib/shezhi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon8);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 550, 151, 31));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("#pushButton\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/lib/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon9);
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(10, 310, 151, 31));
        pushButton_16->setFont(font2);
        pushButton_16->setStyleSheet(QLatin1String("#pushButton_16\n"
"{\n"
"text-align:left;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
"}\n"
"\n"
"#pushButton_16::hover:pressed\n"
"{\n"
"border-width:1px;\n"
"border-style:solid ;\n"
"border-color: rgba(232, 232, 232, 10);\n"
"background-color: rgba(232, 232, 232, 100);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/lib/lishijilu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon10);
        pushButton_16->setIconSize(QSize(16, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(44, 640, 45, 45));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/lib/QQ\345\233\276\347\211\20720200810205923.png);\n"
"border-radius:4px;"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(142, 665, 20, 20));
        label_15->setStyleSheet(QStringLiteral("border-image: url(:/lib/xiazai.png);"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(170, 49, 921, 571));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 921, 571));
        frame->setStyleSheet(QLatin1String("#frame\n"
"{\n"
"border-image: url(:/lib/timg (6).jpg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        plainTextEdit = new QPlainTextEdit(page_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(570, 20, 151, 20));
        plainTextEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(770, 20, 131, 36));
        lineEdit->setStyleSheet(QLatin1String("font:20px;\n"
"background: url(:/C:/Users/fdog/Desktop/image-20200806113923681.png) no-repeat -10px -10px;\n"
"border-radius:5px;\n"
"border: 1px solid #999999;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 581, 341));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        listWidget->setFont(font4);
        listWidget->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\256\213\344\275\223\";"));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setLineWidth(3);
        listWidget->setMidLineWidth(0);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listWidget->setAutoScrollMargin(15);
        listWidget->setTabKeyNavigation(false);
        listWidget->setProperty("showDropIndicator", QVariant(true));
        listWidget->setModelColumn(0);
        listWidget->setBatchSize(100);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tableWidget = new QTableWidget(page_3);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 19)
            tableWidget->setRowCount(19);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem23);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(1, 3, 918, 567));
        tableWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(1);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(177);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(25);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        lineEdit_3 = new QLineEdit(page_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 10, 781, 551));
        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(830, 260, 75, 23));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralWidget);
        label_3->raise();
        label_6->raise();
        frame_4->raise();
        frame_2->raise();
        horizontalSlider->raise();
        label->raise();
        label_4->raise();
        label_2->raise();
        label_5->raise();
        label_7->raise();
        lineEdit_2->raise();
        pushButton_7->raise();
        label_8->raise();
        label_9->raise();
        label_11->raise();
        verticalSlider->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        pushButton_12->raise();
        pushButton_13->raise();
        pushButton_14->raise();
        pushButton_15->raise();
        pushButton->raise();
        pushButton_16->raise();
        label_10->raise();
        label_15->raise();
        stackedWidget->raise();

        retranslateUi(MainWindow);
        QObject::connect(toolButton_4, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(toolButton_2, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));
        QObject::connect(toolButton_3, SIGNAL(clicked()), MainWindow, SLOT(showMaximized()));

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\227\255\345\220\254\351\237\263\344\271\220", nullptr));
        toolButton_5->setText(QString());
        toolButton_1->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_1->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QApplication::translate("MainWindow", "6:25/7:52", nullptr));
        label_4->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\351\230\277\346\202\240\346\202\240 - \346\227\247\346\242\246\344\270\200\345\234\272.mp3", nullptr));
        label_5->setText(QString());
        label_7->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\342\200\234\351\230\277\346\202\240\346\202\240-\346\227\247\346\242\246\344\270\200\345\234\272\342\200\235", nullptr));
        pushButton_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\350\264\246\345\217\267", nullptr));
        label_11->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "\345\234\250\347\272\277\351\237\263\344\271\220", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\351\237\263\344\271\220", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\205\266\344\273\226", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "\346\255\214\345\215\225", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "\350\257\225\345\220\254\345\210\227\350\241\250", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\346\224\266\350\227\217", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\347\256\241\347\220\206", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\237\263\351\242\221", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\222\255\346\224\276", nullptr));
        label_10->setText(QString());
        label_15->setText(QString());
        plainTextEdit->setPlainText(QString());
        lineEdit->setText(QApplication::translate("MainWindow", "2506897252", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\255\214\346\211\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\344\270\223\350\276\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\346\227\266\351\225\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
