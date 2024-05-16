/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QGraphicsView *graphicsView;
    QPushButton *generateButton;
    QPlainTextEdit *textField;
    QSlider *predictNum;
    QLabel *label;
    QPushButton *settingsButton;
    QLabel *Full;
    QPushButton *bread;
    QLabel *label_2;
    QSlider *kolNum;

    void setupUi(QWidget *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QString::fromUtf8("main_window"));
        main_window->resize(2560, 1600);
        main_window->setMinimumSize(QSize(2560, 1600));
        main_window->setMaximumSize(QSize(2560, 1600));
        graphicsView = new QGraphicsView(main_window);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 2560, 1600));
        graphicsView->setMinimumSize(QSize(2560, 1600));
        graphicsView->setMaximumSize(QSize(2560, 1600));
        generateButton = new QPushButton(main_window);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(1200, 600, 160, 40));
        generateButton->setMouseTracking(false);
        generateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius:  10px;\n"
"    background-color:  rgb(40, 110, 200);\n"
"    color:  rgb(255, 255, 255);\n"
"    font-size:  20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(32, 102,192);\n"
"}"));
        textField = new QPlainTextEdit(main_window);
        textField->setObjectName(QString::fromUtf8("textField"));
        textField->setGeometry(QRect(500, 200, 1560, 361));
        textField->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu\";"));
        predictNum = new QSlider(main_window);
        predictNum->setObjectName(QString::fromUtf8("predictNum"));
        predictNum->setGeometry(QRect(500, 900, 160, 16));
        predictNum->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    color:  rgb(0, 255, 255);\n"
"}"));
        predictNum->setMinimum(1);
        predictNum->setMaximum(110);
        predictNum->setValue(20);
        predictNum->setOrientation(Qt::Horizontal);
        label = new QLabel(main_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 870, 161, 17));
        label->setStyleSheet(QString::fromUtf8("font: 500 14pt \"Ubuntu\";"));
        settingsButton = new QPushButton(main_window);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setGeometry(QRect(500, 600, 41, 41));
        settingsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius:  0px;\n"
"    background-color:  rgb(255, 255, 255);\n"
"    color:  rgb(255, 255, 255);\n"
"    font-size:  20px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../src/nas.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon);
        settingsButton->setIconSize(QSize(40, 40));
        Full = new QLabel(main_window);
        Full->setObjectName(QString::fromUtf8("Full"));
        Full->setGeometry(QRect(60, 70, 101, 71));
        Full->setStyleSheet(QString::fromUtf8("font: 550 40pt \"Ubuntu\";"));
        bread = new QPushButton(main_window);
        bread->setObjectName(QString::fromUtf8("bread"));
        bread->setGeometry(QRect(150, 55, 101, 101));
        bread->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius:  0px;\n"
"    background-color:  rgb(255, 255, 255);\n"
"    color:  rgb(255, 255, 255);\n"
"    font-size:  20px;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../src/\320\222\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\275\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        bread->setIcon(icon1);
        bread->setIconSize(QSize(100, 100));
        label_2 = new QLabel(main_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 950, 231, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 500 14pt \"Ubuntu\";"));
        kolNum = new QSlider(main_window);
        kolNum->setObjectName(QString::fromUtf8("kolNum"));
        kolNum->setGeometry(QRect(500, 980, 160, 16));
        kolNum->setMinimum(1);
        kolNum->setMaximum(100);
        kolNum->setValue(100);
        kolNum->setOrientation(Qt::Horizontal);

        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QWidget *main_window)
    {
        main_window->setWindowTitle(QCoreApplication::translate("main_window", "main_window", nullptr));
        generateButton->setText(QCoreApplication::translate("main_window", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        textField->setPlaceholderText(QCoreApplication::translate("main_window", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\275\320\260\321\207\320\260\320\273\320\276...", nullptr));
        label->setText(QCoreApplication::translate("main_window", "\320\240\320\260\320\275\320\264\320\276\320\274\320\275\320\276\321\201\321\202\321\214", nullptr));
        settingsButton->setText(QString());
        Full->setText(QCoreApplication::translate("main_window", "Full", nullptr));
        bread->setText(QString());
        label_2->setText(QCoreApplication::translate("main_window", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\321\203\320\272\320\262 \320\275\320\260 \320\262\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
