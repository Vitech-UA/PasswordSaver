/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *GetLoginLineEdit;
    QLineEdit *GetPasswordLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *TotalNotesLabel;
    QWidget *tab_4;
    QComboBox *comboBox_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *EditLoginLineEdit;
    QLineEdit *EditPasswordLineEdit;
    QPushButton *UpdatePushButton;
    QWidget *tab_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QLineEdit *newSiteLineEdit;
    QLineEdit *newLoginLineEdit;
    QLineEdit *newPasswordLineEdit;
    QPushButton *pushButton;
    QWidget *tab_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *importButton;
    QPushButton *exportButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(532, 262);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(524, 262));
        MainWindow->setMaximumSize(QSize(1000, 1000));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-MyPasswordSaver-Desktop_Qt_5_12_3_MinGW_64_bit-Release/release/image/icon.ico"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 531, 211));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 181, 59));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_3->addWidget(comboBox);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 10, 201, 53));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        GetLoginLineEdit = new QLineEdit(layoutWidget1);
        GetLoginLineEdit->setObjectName(QString::fromUtf8("GetLoginLineEdit"));

        verticalLayout_2->addWidget(GetLoginLineEdit);

        GetPasswordLineEdit = new QLineEdit(layoutWidget1);
        GetPasswordLineEdit->setObjectName(QString::fromUtf8("GetPasswordLineEdit"));

        verticalLayout_2->addWidget(GetPasswordLineEdit);

        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 80, 155, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        TotalNotesLabel = new QLabel(layoutWidget2);
        TotalNotesLabel->setObjectName(QString::fromUtf8("TotalNotesLabel"));

        horizontalLayout->addWidget(TotalNotesLabel);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        comboBox_2 = new QComboBox(tab_4);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(300, 20, 211, 22));
        layoutWidget3 = new QWidget(tab_4);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 13, 271, 117));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        EditLoginLineEdit = new QLineEdit(layoutWidget3);
        EditLoginLineEdit->setObjectName(QString::fromUtf8("EditLoginLineEdit"));

        verticalLayout_4->addWidget(EditLoginLineEdit);

        EditPasswordLineEdit = new QLineEdit(layoutWidget3);
        EditPasswordLineEdit->setObjectName(QString::fromUtf8("EditPasswordLineEdit"));

        verticalLayout_4->addWidget(EditPasswordLineEdit);

        UpdatePushButton = new QPushButton(layoutWidget3);
        UpdatePushButton->setObjectName(QString::fromUtf8("UpdatePushButton"));
        UpdatePushButton->setEnabled(false);

        verticalLayout_4->addWidget(UpdatePushButton);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 261, 117));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newSiteLineEdit = new QLineEdit(layoutWidget4);
        newSiteLineEdit->setObjectName(QString::fromUtf8("newSiteLineEdit"));

        verticalLayout->addWidget(newSiteLineEdit);

        newLoginLineEdit = new QLineEdit(layoutWidget4);
        newLoginLineEdit->setObjectName(QString::fromUtf8("newLoginLineEdit"));

        verticalLayout->addWidget(newLoginLineEdit);

        newPasswordLineEdit = new QLineEdit(layoutWidget4);
        newPasswordLineEdit->setObjectName(QString::fromUtf8("newPasswordLineEdit"));

        verticalLayout->addWidget(newPasswordLineEdit);

        pushButton = new QPushButton(layoutWidget4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);

        verticalLayout->addWidget(pushButton);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 161, 91));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        importButton = new QPushButton(widget);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        verticalLayout_5->addWidget(importButton);

        exportButton = new QPushButton(widget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        verticalLayout_5->addWidget(exportButton);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 532, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Password saver v1.0", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\200\320\270\320\274\320\260\321\202\320\270 \320\273\320\276\320\263\321\226\320\275/\320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\321\201\321\214\320\276\320\263\320\276 \320\262 \320\261\320\260\320\267\321\226", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\267\320\260\320\277\320\270\321\201\321\226\320\262:", nullptr));
        TotalNotesLabel->setText(QApplication::translate("MainWindow", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\236\321\202\321\200\320\270\320\274\320\260\321\202\320\270 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        EditLoginLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210  \320\275\320\276\320\262\320\270\320\271 \320\273\320\276\320\263\321\226\320\275 \320\264\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \321\201\320\260\320\271\321\202\321\203", nullptr));
        EditPasswordLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\275\320\276\320\262\320\270\320\271 \320\277\320\260\321\200\320\276\320\273\321\214 \320\264\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \321\201\320\260\320\271\321\202\321\203", nullptr));
        UpdatePushButton->setText(QApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270 \320\267\320\260\320\277\320\270\321\201", nullptr));
#ifndef QT_NO_TOOLTIP
        newSiteLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        newSiteLineEdit->setText(QString());
        newSiteLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\265\320\265\320\264\321\226\321\202\321\214 \320\275\320\260\320\267\320\262\321\203 \321\201\320\260\320\271\321\202\321\203", nullptr));
        newLoginLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\273\320\276\320\263\321\226\320\275 \320\264\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \321\201\320\260\320\271\321\202\321\203", nullptr));
        newPasswordLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\277\320\260\321\200\320\276\320\273\321\214 \320\264\320\273\321\217 \321\206\321\214\320\276\320\263\320\276 \321\201\320\260\320\271\321\202\321\203", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\276\320\262\320\270\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        importButton->setText(QApplication::translate("MainWindow", "\320\206\320\274\320\277\320\276\321\200\321\202 \320\261\320\260\320\267\320\270 \320\264\320\260\320\275\320\270\321\205", nullptr));
        exportButton->setText(QApplication::translate("MainWindow", "\320\225\320\272\321\201\320\277\320\276\321\200\321\202 \320\261\320\260\320\267\320\270 \320\264\320\260\320\275\320\270\321\205", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\235\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
