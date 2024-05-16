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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QGraphicsView *graphicsView;
    QPushButton *generateButton;
    QPlainTextEdit *textField;
    QSpinBox *randomNum;

    void setupUi(QWidget *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QString::fromUtf8("main_window"));
        main_window->resize(2560, 1600);
        graphicsView = new QGraphicsView(main_window);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 2560, 1600));
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
        textField->setGeometry(QRect(500, 200, 1560, 250));
        textField->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu\";"));
        randomNum = new QSpinBox(main_window);
        randomNum->setObjectName(QString::fromUtf8("randomNum"));
        randomNum->setGeometry(QRect(20, 1560, 44, 26));
        randomNum->setMinimum(1);
        randomNum->setMaximum(110);

        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QWidget *main_window)
    {
        main_window->setWindowTitle(QCoreApplication::translate("main_window", "main_window", nullptr));
        generateButton->setText(QCoreApplication::translate("main_window", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        textField->setPlaceholderText(QCoreApplication::translate("main_window", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\275\320\260\321\207\320\260\320\273\320\276...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
