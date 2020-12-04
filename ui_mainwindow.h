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
    QLabel *label_6;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QWidget *page_2;
    QTableWidget *tableWidget;
    QLabel *label_29;
    QLabel *label_28;
    QLabel *label_17;
    QWidget *page_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_6;
    QLabel *label_36;
    QWidget *page_4;
    QLineEdit *lineEdit_4;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QWidget *page_5;
    QLabel *label_18;
    QWidget *page_6;
    QTableWidget *tableWidget_2;
    QLabel *label_30;
    QWidget *page_7;
    QLabel *label_32;
    QWidget *page_8;
    QLabel *label_33;
    QWidget *page_9;
    QLabel *label_34;
    QWidget *page_10;
    QLabel *label_35;
    QLabel *label_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1108, 699);
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/yinyue.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("#centralWidget\n"
"{\n"
"border-image: url(:/lib/timg (1).jpg);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(905, 5, 201, 41));
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
        toolButton_1->setMinimumSize(QSize(20, 22));
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
        label_3->setGeometry(QRect(0, 0, 1111, 701));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(0, 170, 255, 80);"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(349, 639, 521, 57));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(63, 19, 20, 20));
        pushButton_4->setMinimumSize(QSize(20, 20));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/danqu.png);"));
        horizontalSlider_2 = new QSlider(frame_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(400, 23, 100, 12));
        horizontalSlider_2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        horizontalSlider_2->setValue(50);
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
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/lib/xiayiqu.png);"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 6, 50, 50));
        pushButton_2->setMinimumSize(QSize(50, 50));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/lib/1bofang.png);"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setGeometry(QRect(310, 627, 651, 16));
        horizontalSlider->setMinimumSize(QSize(153, 0));
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
        horizontalSlider->setSingleStep(0);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickInterval(0);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(970, 620, 91, 31));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(11111111, 16777215));
        label->setStyleSheet(QLatin1String("font: 75 11pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        label->setIndent(-1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(22, 6, 123, 38));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/b.png);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 630, 141, 31));
        label_2->setStyleSheet(QLatin1String("font:16px;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(990, 660, 25, 25));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/lib/ci.png);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1020, 660, 25, 25));
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
"border-color: rgba(102, 163, 255, 50);"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(462, 15, 23, 23));
        pushButton_7->setStyleSheet(QLatin1String("border-image: url(:/lib/sousuo2.png);\n"
""));
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
        label_11->setGeometry(QRect(128, 668, 20, 18));
        label_11->setStyleSheet(QLatin1String("\n"
"border-image: url(:/lib/love2.png);"));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(1055, 620, 16, 71));
        verticalSlider->setStyleSheet(QLatin1String("QSlider::groove:vertical {\n"
"    border: 1px solid #4A708B;\n"
"    background: #C0C0C0;\n"
"    width: 5px;\n"
"    border-radius: 1px;\n"
"    padding-left:-1px;\n"
"    padding-right:-1px;\n"
"    padding-top:-1px;\n"
"    padding-bottom:-1px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #575757;\n"
"    border: 1px solid #4A708B;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #c4c4c4, stop:1 #B1B1B1);\n"
"    background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"        stop: 0 #5DCCFF, stop: 1 #1874CD);\n"
"    border: 0px solid #777;\n"
"    width: 10px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:vertical\n"
"{\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #45ADED,\n"
"      stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    height: 11px;\n"
"    margin-left: -3px;\n"
"    margin-right: -3px;\n"
"    "
                        "border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #00009C;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #aaa;\n"
"    border-radius: 4px;\n"
"}"));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(3);
        verticalSlider->setOrientation(Qt::Vertical);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 80, 81, 21));
        label_12->setStyleSheet(QLatin1String("\n"
"font: 11pt;\n"
"color: rgb(234, 234, 234);"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 200, 81, 21));
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setStyleSheet(QLatin1String("\n"
"font: 11pt;\n"
"color: rgb(234, 234, 234);"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 400, 81, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_14->setFont(font);
        label_14->setStyleSheet(QLatin1String("\n"
"font: 11pt;\n"
"color: rgb(234, 234, 234);"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 110, 151, 31));
        QFont font1;
        font1.setPointSize(11);
        pushButton_9->setFont(font1);
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/lib/gedan_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon1);
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 150, 151, 31));
        QFont font2;
        font2.setPointSize(12);
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/lib/paihangbang.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon2);
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 230, 151, 31));
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/lib/gedan.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon3);
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 310, 151, 31));
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/lib/love.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon4);
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 350, 151, 31));
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
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/lib/bendi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon5);
        pushButton_13->setIconSize(QSize(16, 16));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 430, 151, 31));
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
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/lib/xiazai.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon6);
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 470, 151, 31));
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
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/lib/shezhi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon7);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 510, 151, 31));
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
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/lib/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon8);
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(10, 270, 151, 31));
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
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/lib/lishijilu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon9);
        pushButton_16->setIconSize(QSize(16, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(67, 635, 45, 45));
        label_10->setStyleSheet(QLatin1String("\n"
"border-radius:4px;"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(162, 668, 20, 18));
        label_15->setStyleSheet(QStringLiteral("border-image: url(:/lib/xiazai2.png);"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(170, 49, 921, 567));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 200);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 921, 571));
        frame->setStyleSheet(QLatin1String("#frame\n"
"{\n"
"border-image: url(:/lib/4.jpg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 20, 551, 41));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_6->setFont(font3);
        label_6->setStyleSheet(QLatin1String("font:22px;\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_6->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(frame);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(170, 70, 551, 41));
        label_19->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 00);\n"
"font:26px;"));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(frame);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(170, 120, 551, 41));
        label_20->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 00);\n"
"font:28px;"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(frame);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(170, 180, 551, 41));
        label_21->setStyleSheet(QLatin1String("font:32px;\n"
"color: rgb(255, 85, 0);\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(frame);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(170, 240, 551, 41));
        label_22->setFont(font3);
        label_22->setStyleSheet(QLatin1String("font:30px;\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(frame);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(160, 310, 551, 41));
        label_23->setStyleSheet(QLatin1String("font:28px;\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(frame);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(170, 360, 551, 41));
        label_24->setStyleSheet(QLatin1String("font:26px;\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(frame);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(170, 410, 551, 41));
        label_25->setStyleSheet(QLatin1String("font:24px;\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(frame);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(170, 460, 551, 41));
        label_26->setStyleSheet(QLatin1String("font:22px;\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(frame);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(170, 510, 551, 41));
        label_27->setStyleSheet(QLatin1String("font:20px;\n"
"background-color: rgba(255, 255, 255, 00);"));
        label_27->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tableWidget = new QTableWidget(page_2);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 25, 921, 542));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        tableWidget->setFont(font4);
        tableWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: rgb(116, 116, 116);\n"
"background:rgba(255, 255, 255, 255);\n"
"border:1px solid rgb(53, 86, 195);\n"
"color: rgb(103, 103, 103);\n"
"}\n"
"\n"
"/*\345\272\225\351\235\242*/\n"
"QTableWidget::item:selected{\n"
"background-color: rgb(116, 116, 116);\n"
"background: rgba(229, 229, 229,200);\n"
"\n"
"}\n"
"/*\351\200\211\344\270\255*/\n"
"\n"
"\n"
"\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background-color: rgb(25, 134, 189);\n"
"padding:3px;\n"
"margin:0px;\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgba(229, 229, 229,50);\n"
"border-left-width:0;\n"
"}\n"
"/*\350\241\250\345\244\264*/\n"
""));
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(1);
        tableWidget->setRowCount(0);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(109);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(25);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        label_29 = new QLabel(page_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(0, 0, 922, 25));
        label_29->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_28 = new QLabel(page_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(0, 30, 921, 531));
        label_28->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(376, 210, 140, 100));
        label_17->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        lineEdit_5 = new QLineEdit(page_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(240, 110, 411, 281));
        lineEdit_3 = new QLineEdit(page_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(280, 40, 231, 41));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(530, 50, 75, 23));
        label_36 = new QLabel(page_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(30, 30, 54, 12));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        lineEdit_4 = new QLineEdit(page_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(360, 170, 161, 61));
        listWidget = new QListWidget(page_4);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(70, 110, 241, 361));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        listWidget->setFont(font5);
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
        lineEdit = new QLineEdit(page_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(390, 270, 131, 41));
        lineEdit->setStyleSheet(QLatin1String("font:20px;\n"
"background: url(:/C:/Users/fdog/Desktop/image-20200806113923681.png) no-repeat -10px -10px;\n"
"border-radius:5px;\n"
"border: 1px solid #999999;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        plainTextEdit = new QPlainTextEdit(page_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(560, 110, 261, 361));
        plainTextEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        label_37 = new QLabel(page_4);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(180, 30, 81, 31));
        QFont font6;
        font6.setPointSize(18);
        label_37->setFont(font6);
        label_38 = new QLabel(page_4);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(530, 30, 81, 31));
        label_38->setFont(font6);
        label_39 = new QLabel(page_4);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(390, 80, 81, 31));
        label_39->setFont(font6);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_18 = new QLabel(page_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(333, 181, 181, 101));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        tableWidget_2 = new QTableWidget(page_6);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem11);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 20, 921, 551));
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        label_30 = new QLabel(page_6);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(0, 0, 922, 25));
        label_30->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_32 = new QLabel(page_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(450, 280, 54, 12));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        label_33 = new QLabel(page_8);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(460, 300, 54, 12));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        label_34 = new QLabel(page_9);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(400, 290, 54, 12));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        label_35 = new QLabel(page_10);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(370, 290, 54, 12));
        stackedWidget->addWidget(page_10);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 49, 170, 567));
        label_16->setStyleSheet(QStringLiteral("background-color: rgba(206, 206, 206, 80);"));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(68, 635, 45, 45));
        pushButton_17->setStyleSheet(QLatin1String("#pushButton_17\n"
"{\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"#pushButton_17::hover\n"
"{\n"
"border-image: url(:/lib/zedian.png);\n"
"background-color: rgba(225, 225, 225, 10);\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(960, 660, 25, 25));
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/lib/jijianmoshi.png);"));
        MainWindow->setCentralWidget(centralWidget);
        label_3->raise();
        label_16->raise();
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
        pushButton_17->raise();
        pushButton_8->raise();

        retranslateUi(MainWindow);
        QObject::connect(toolButton_4, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(toolButton_2, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));
        QObject::connect(toolButton_3, SIGNAL(clicked()), MainWindow, SLOT(showMaximized()));

        stackedWidget->setCurrentIndex(0);


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
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_1->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QString());
        label_4->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
        label_7->setText(QString());
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\342\200\234\351\230\277\346\202\240\346\202\240-\346\227\247\346\242\246\344\270\200\345\234\272\342\200\235\350\257\225\344\270\200\350\257\225", nullptr));
        pushButton_7->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButton_7->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        label_8->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\350\264\246\345\217\267", nullptr));
        label_11->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "\345\234\250\347\272\277\351\237\263\344\271\220", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\351\237\263\344\271\220", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\345\205\266\344\273\226", nullptr));
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
        label_6->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
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
        label_29->setText(QApplication::translate("MainWindow", "                  \346\255\214\346\233\262                                \346\255\214\346\211\213                             \344\270\223\350\276\221                         \346\223\215\344\275\234                    \346\227\266\351\225\277", nullptr));
        label_28->setText(QString());
        label_17->setText(QString());
        lineEdit_5->setText(QApplication::translate("MainWindow", "\346\255\214\345\215\225", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        lineEdit_4->setText(QApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "2506897252", nullptr));
        plainTextEdit->setPlainText(QString());
        label_37->setText(QApplication::translate("MainWindow", "\346\226\260\346\255\214\346\246\234", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "\345\210\206\347\261\273", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\350\257\225\345\220\254\345\210\227\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\255\214\346\211\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\344\270\223\350\276\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\346\227\266\351\225\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276\346\254\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "                \346\255\214\346\233\262                              \346\255\214\346\211\213                           \344\270\223\350\276\221                       \346\223\215\344\275\234               \346\227\266\351\225\277           \346\222\255\346\224\276\346\254\241\346\225\260", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\346\224\266\350\227\217", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\347\256\241\347\220\206", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        label_16->setText(QString());
        pushButton_17->setText(QString());
        pushButton_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
