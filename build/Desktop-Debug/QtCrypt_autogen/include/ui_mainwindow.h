/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnSelect;
    QPushButton *btnEncrypt;
    QPushButton *btnDecrypt;
    QFrame *line;
    QLineEdit *txtKey;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *lblFileName;
    QTextBrowser *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 801, 551));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        btnSelect = new QPushButton(horizontalLayoutWidget);
        btnSelect->setObjectName("btnSelect");
        btnSelect->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(btnSelect);

        btnEncrypt = new QPushButton(horizontalLayoutWidget);
        btnEncrypt->setObjectName("btnEncrypt");
        btnEncrypt->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(btnEncrypt);

        btnDecrypt = new QPushButton(horizontalLayoutWidget);
        btnDecrypt->setObjectName("btnDecrypt");
        btnDecrypt->setMaximumSize(QSize(200, 200));

        verticalLayout_2->addWidget(btnDecrypt);

        line = new QFrame(horizontalLayoutWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        txtKey = new QLineEdit(horizontalLayoutWidget);
        txtKey->setObjectName("txtKey");
        txtKey->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(txtKey);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblFileName = new QLabel(horizontalLayoutWidget);
        lblFileName->setObjectName("lblFileName");

        verticalLayout->addWidget(lblFileName);

        textEdit = new QTextBrowser(horizontalLayoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnSelect->setText(QCoreApplication::translate("MainWindow", "Select File", nullptr));
        btnEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        btnDecrypt->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
#if QT_CONFIG(tooltip)
        txtKey->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        txtKey->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type key (password) here", nullptr));
        lblFileName->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
