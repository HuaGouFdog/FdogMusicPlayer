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
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
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
    QFrame *frame;
    QLineEdit *lineEdit;
    QLabel *label_12;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QToolBox *toolBox;
    QWidget *page_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QWidget *page;
    QListWidget *listWidget;
    QWidget *page_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 700);
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/timg2.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("#centralWidget\n"
"{\n"
"border-image: url(:/lib/5.jpg);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(887, 4, 201, 53));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_10 = new QLabel(frame_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(23, 20));
        label_10->setMaximumSize(QSize(23, 23));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/lib/pifu.png);"));

        horizontalLayout_4->addWidget(label_10);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        toolButton_1 = new QToolButton(frame_4);
        toolButton_1->setObjectName(QStringLiteral("toolButton_1"));
        toolButton_1->setMinimumSize(QSize(20, 20));
        toolButton_1->setStyleSheet(QStringLiteral("border-image: url(:/lib/xuanxiang.png);"));
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
        toolButton_2->setStyleSheet(QStringLiteral("border-image: url(:/lib/zuixiao.png);"));

        horizontalLayout_4->addWidget(toolButton_2);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        toolButton_3 = new QToolButton(frame_4);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(20, 20));
        toolButton_3->setStyleSheet(QStringLiteral("border-image: url(:/lib/zuidahua.png);"));

        horizontalLayout_4->addWidget(toolButton_3);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        toolButton_4 = new QToolButton(frame_4);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(20, 20));
        toolButton_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/guanbi.png);"));

        horizontalLayout_4->addWidget(toolButton_4);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1101, 61));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(0, 255, 255,50);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-1, 61, 1101, 641));
        label_6->setStyleSheet(QStringLiteral("background-color: rgba(0, 255, 255,70);"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(370, 643, 521, 61));
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
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/lib/stop.png);"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setGeometry(QRect(310, 632, 651, 20));
        horizontalSlider->setMinimumSize(QSize(153, 0));
        horizontalSlider->setSingleStep(0);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickInterval(0);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(970, 630, 91, 21));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(11111111, 16777215));
        label->setStyleSheet(QLatin1String("font: 75 11pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        label->setIndent(-1);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(209, 61, 881, 561));
        frame->setStyleSheet(QLatin1String("#frame\n"
"{\n"
"border-image: url(:/lib/timg (6).jpg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 60, 151, 36));
        lineEdit->setStyleSheet(QLatin1String("font:20px;\n"
"background: url(:/C:/Users/fdog/Desktop/image-20200806113923681.png) no-repeat -10px -10px;\n"
"border-radius:5px;\n"
"border: 1px solid #999999;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(340, 50, 141, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(14, 3, 181, 53));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/b.png);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 640, 181, 41));
        label_2->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(980, 660, 30, 30));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/lib/ci-copy.png);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1020, 660, 31, 31));
        label_7->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"border-image: url(:/lib/su.png);\n"
"\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(231, 17, 211, 31));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:8px;\n"
"border-width:2px;\n"
"border-style:solid ;\n"
"border-color:rgb(163, 163, 163);"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(410, 20, 25, 25));
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/lib/sousuo.png);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(750, 13, 35, 35));
        label_8->setStyleSheet(QStringLiteral("border-image: url(:/lib/touxiang.png);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(790, 20, 81, 21));
        label_9->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"\n"
"color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 650, 20, 20));
        label_11->setStyleSheet(QLatin1String("\n"
"border-image: url(:/lib/su.png);\n"
"border-image: url(:/lib/love.png);"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(0, 60, 209, 561));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setKerning(true);
        toolBox->setFont(font);
        toolBox->setStyleSheet(QLatin1String("\n"
"#toolBox::tab\n"
"{\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgba(0, 255, 255,00);\n"
"}\n"
"\n"
"#toolBox::tab:selected\n"
"{\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgba(0, 255, 255,00);\n"
"}\n"
"\n"
"*\n"
"{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}"));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 30, 161, 31));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 0, 161, 31));
        toolBox->addItem(page_3, QString::fromUtf8("    \346\267\273\345\212\240\346\226\207\344\273\266"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 209, 444));
        listWidget = new QListWidget(page);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 209, 481));
        listWidget->setStyleSheet(QStringLiteral(""));
        toolBox->addItem(page, QString::fromUtf8("    \346\234\254\345\234\260\346\226\207\344\273\266"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 209, 444));
        plainTextEdit = new QPlainTextEdit(page_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 211, 221));
        plainTextEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        toolBox->addItem(page_2, QString::fromUtf8("    \346\234\200\350\277\221\346\222\255\346\224\276"));
        MainWindow->setCentralWidget(centralWidget);
        label_3->raise();
        label_6->raise();
        frame_4->raise();
        frame_2->raise();
        horizontalSlider->raise();
        label->raise();
        frame->raise();
        label_4->raise();
        label_2->raise();
        label_5->raise();
        label_7->raise();
        lineEdit_2->raise();
        pushButton_7->raise();
        label_8->raise();
        label_9->raise();
        label_11->raise();
        toolBox->raise();

        retranslateUi(MainWindow);
        QObject::connect(toolButton_4, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(toolButton_2, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));
        QObject::connect(toolButton_3, SIGNAL(clicked()), MainWindow, SLOT(showMaximized()));

        toolBox->setCurrentIndex(0);
        toolBox->layout()->setSpacing(11);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\227\255\345\220\254\351\237\263\344\271\220", nullptr));
        label_10->setText(QString());
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
        lineEdit->setText(QApplication::translate("MainWindow", "2506897252", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\351\230\277\346\202\240\346\202\240 - \346\227\247\346\242\246\344\270\200\345\234\272.mp3", nullptr));
        label_5->setText(QString());
        label_7->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\342\200\234\346\227\247\346\242\246\344\270\200\345\234\272\342\200\235", nullptr));
        pushButton_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\350\264\246\345\217\267", nullptr));
        label_11->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\247\206\351\242\221", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\237\263\351\242\221", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "    \346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "    \346\234\254\345\234\260\346\226\207\344\273\266", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "\344\275\240\345\217\267\350\257\225\350\257\225", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "    \346\234\200\350\277\221\346\222\255\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
