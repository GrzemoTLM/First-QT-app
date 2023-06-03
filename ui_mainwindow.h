/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPoka;
    QAction *actionUkryj;
    QAction *actionKopiuj;
    QAction *actionWklej;
    QAction *actionWytnij;
    QAction *actionK1;
    QAction *actionK2;
    QAction *actionKapi;
    QWidget *centralwidget;
    QLineEdit *liczbaA;
    QComboBox *Dzialania;
    QLineEdit *liczbaB;
    QPushButton *CalcButton;
    QLineEdit *liczbawynik;
    QCheckBox *checkBox;
    QLabel *AuthorDetails;
    QCalendarWidget *calendarWidget;
    QLabel *labelData;
    QScrollBar *horizontalScrollBar;
    QLabel *ScrollLabel;
    QTextEdit *NoteTextEdit;
    QLineEdit *NoteLineEdit;
    QLabel *NoteLabel;
    QLabel *label;
    QPushButton *NoteButton;
    QLabel *label_2;
    QPushButton *AddButton;
    QLineEdit *LiczbylineEdit;
    QListWidget *XDD;
    QLabel *label_3;
    QLabel *LiczbaPozycji;
    QPushButton *ClearButton;
    QLabel *label_4;
    QLabel *Sum;
    QSpinBox *spinBox;
    QPushButton *Add2button;
    QLabel *label_5;
    QPushButton *NoteSaveButton;
    QPushButton *NoteReadButton;
    QPushButton *NoteClearButton;
    QLabel *label_6;
    QRadioButton *RedRadio;
    QRadioButton *GreenRadio;
    QRadioButton *GreyRadio;
    QRadioButton *ClassicRadioButton;
    QLabel *hamster;
    QMenuBar *menubar;
    QMenu *menuKalkulator;
    QMenu *menuNotes;
    QMenu *menuKomunikat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(974, 593);
        actionPoka = new QAction(MainWindow);
        actionPoka->setObjectName("actionPoka");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("computer")));
        actionPoka->setIcon(icon);
        actionUkryj = new QAction(MainWindow);
        actionUkryj->setObjectName("actionUkryj");
        actionKopiuj = new QAction(MainWindow);
        actionKopiuj->setObjectName("actionKopiuj");
        actionWklej = new QAction(MainWindow);
        actionWklej->setObjectName("actionWklej");
        actionWytnij = new QAction(MainWindow);
        actionWytnij->setObjectName("actionWytnij");
        actionK1 = new QAction(MainWindow);
        actionK1->setObjectName("actionK1");
        actionK2 = new QAction(MainWindow);
        actionK2->setObjectName("actionK2");
        actionKapi = new QAction(MainWindow);
        actionKapi->setObjectName("actionKapi");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        liczbaA = new QLineEdit(centralwidget);
        liczbaA->setObjectName("liczbaA");
        liczbaA->setGeometry(QRect(10, 10, 113, 27));
        Dzialania = new QComboBox(centralwidget);
        Dzialania->addItem(QString());
        Dzialania->addItem(QString());
        Dzialania->addItem(QString());
        Dzialania->addItem(QString());
        Dzialania->setObjectName("Dzialania");
        Dzialania->setGeometry(QRect(130, 10, 74, 27));
        Dzialania->setToolTipDuration(2);
        liczbaB = new QLineEdit(centralwidget);
        liczbaB->setObjectName("liczbaB");
        liczbaB->setGeometry(QRect(210, 10, 113, 27));
        CalcButton = new QPushButton(centralwidget);
        CalcButton->setObjectName("CalcButton");
        CalcButton->setGeometry(QRect(330, 10, 80, 27));
        liczbawynik = new QLineEdit(centralwidget);
        liczbawynik->setObjectName("liczbawynik");
        liczbawynik->setGeometry(QRect(420, 10, 113, 27));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(590, 10, 111, 25));
        AuthorDetails = new QLabel(centralwidget);
        AuthorDetails->setObjectName("AuthorDetails");
        AuthorDetails->setGeometry(QRect(720, 10, 211, 19));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(540, 40, 336, 187));
        labelData = new QLabel(centralwidget);
        labelData->setObjectName("labelData");
        labelData->setGeometry(QRect(670, 240, 56, 19));
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setGeometry(QRect(620, 260, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        ScrollLabel = new QLabel(centralwidget);
        ScrollLabel->setObjectName("ScrollLabel");
        ScrollLabel->setGeometry(QRect(680, 290, 56, 19));
        NoteTextEdit = new QTextEdit(centralwidget);
        NoteTextEdit->setObjectName("NoteTextEdit");
        NoteTextEdit->setGeometry(QRect(20, 180, 171, 191));
        NoteTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 0);\n"
""));
        NoteLineEdit = new QLineEdit(centralwidget);
        NoteLineEdit->setObjectName("NoteLineEdit");
        NoteLineEdit->setGeometry(QRect(20, 130, 113, 27));
        NoteLabel = new QLabel(centralwidget);
        NoteLabel->setObjectName("NoteLabel");
        NoteLabel->setGeometry(QRect(20, 160, 56, 19));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 110, 101, 19));
        NoteButton = new QPushButton(centralwidget);
        NoteButton->setObjectName("NoteButton");
        NoteButton->setGeometry(QRect(140, 150, 51, 27));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 110, 71, 19));
        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName("AddButton");
        AddButton->setGeometry(QRect(320, 150, 31, 27));
        LiczbylineEdit = new QLineEdit(centralwidget);
        LiczbylineEdit->setObjectName("LiczbylineEdit");
        LiczbylineEdit->setGeometry(QRect(200, 130, 113, 27));
        XDD = new QListWidget(centralwidget);
        XDD->setObjectName("XDD");
        XDD->setGeometry(QRect(200, 180, 151, 192));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 380, 91, 19));
        LiczbaPozycji = new QLabel(centralwidget);
        LiczbaPozycji->setObjectName("LiczbaPozycji");
        LiczbaPozycji->setGeometry(QRect(290, 380, 56, 19));
        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName("ClearButton");
        ClearButton->setGeometry(QRect(230, 430, 80, 27));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 410, 56, 19));
        Sum = new QLabel(centralwidget);
        Sum->setObjectName("Sum");
        Sum->setGeometry(QRect(280, 410, 56, 19));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(380, 230, 46, 28));
        Add2button = new QPushButton(centralwidget);
        Add2button->setObjectName("Add2button");
        Add2button->setGeometry(QRect(360, 260, 80, 27));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 210, 81, 20));
        NoteSaveButton = new QPushButton(centralwidget);
        NoteSaveButton->setObjectName("NoteSaveButton");
        NoteSaveButton->setGeometry(QRect(60, 390, 80, 27));
        NoteReadButton = new QPushButton(centralwidget);
        NoteReadButton->setObjectName("NoteReadButton");
        NoteReadButton->setGeometry(QRect(60, 440, 80, 27));
        NoteClearButton = new QPushButton(centralwidget);
        NoteClearButton->setObjectName("NoteClearButton");
        NoteClearButton->setGeometry(QRect(60, 490, 80, 27));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(450, 350, 111, 19));
        RedRadio = new QRadioButton(centralwidget);
        RedRadio->setObjectName("RedRadio");
        RedRadio->setGeometry(QRect(450, 380, 103, 25));
        GreenRadio = new QRadioButton(centralwidget);
        GreenRadio->setObjectName("GreenRadio");
        GreenRadio->setGeometry(QRect(450, 420, 103, 25));
        GreyRadio = new QRadioButton(centralwidget);
        GreyRadio->setObjectName("GreyRadio");
        GreyRadio->setGeometry(QRect(450, 460, 103, 25));
        ClassicRadioButton = new QRadioButton(centralwidget);
        ClassicRadioButton->setObjectName("ClassicRadioButton");
        ClassicRadioButton->setGeometry(QRect(450, 490, 103, 25));
        hamster = new QLabel(centralwidget);
        hamster->setObjectName("hamster");
        hamster->setGeometry(QRect(680, 310, 171, 171));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 974, 24));
        menuKalkulator = new QMenu(menubar);
        menuKalkulator->setObjectName("menuKalkulator");
        menuNotes = new QMenu(menubar);
        menuNotes->setObjectName("menuNotes");
        menuKomunikat = new QMenu(menubar);
        menuKomunikat->setObjectName("menuKomunikat");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuKalkulator->menuAction());
        menubar->addAction(menuNotes->menuAction());
        menubar->addAction(menuKomunikat->menuAction());
        menuKalkulator->addAction(actionPoka);
        menuKalkulator->addSeparator();
        menuKalkulator->addSeparator();
        menuKalkulator->addAction(actionUkryj);
        menuNotes->addAction(actionKopiuj);
        menuNotes->addAction(actionWklej);
        menuNotes->addAction(actionWytnij);
        menuKomunikat->addAction(actionK1);
        menuKomunikat->addAction(actionK2);
        menuKomunikat->addAction(actionKapi);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPoka->setText(QCoreApplication::translate("MainWindow", "Poka\305\274", nullptr));
        actionUkryj->setText(QCoreApplication::translate("MainWindow", "Ukryj", nullptr));
        actionKopiuj->setText(QCoreApplication::translate("MainWindow", "Kopiuj", nullptr));
        actionWklej->setText(QCoreApplication::translate("MainWindow", "Wklej", nullptr));
        actionWytnij->setText(QCoreApplication::translate("MainWindow", "Wytnij", nullptr));
        actionK1->setText(QCoreApplication::translate("MainWindow", "K1", nullptr));
        actionK2->setText(QCoreApplication::translate("MainWindow", "K2", nullptr));
        actionKapi->setText(QCoreApplication::translate("MainWindow", "Kapi", nullptr));
        Dzialania->setItemText(0, QCoreApplication::translate("MainWindow", "+", nullptr));
        Dzialania->setItemText(1, QCoreApplication::translate("MainWindow", "-", nullptr));
        Dzialania->setItemText(2, QCoreApplication::translate("MainWindow", "*", nullptr));
        Dzialania->setItemText(3, QCoreApplication::translate("MainWindow", "/", nullptr));

        CalcButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Show Author", nullptr));
        AuthorDetails->setText(QString());
        labelData->setText(QString());
        ScrollLabel->setText(QString());
        NoteLabel->setText(QCoreApplication::translate("MainWindow", "Notes:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Podaj Nazwisko:", nullptr));
        NoteButton->setText(QCoreApplication::translate("MainWindow", "dodaj", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Podaj liczbe:", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Liczba Pozycji", nullptr));
        LiczbaPozycji->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "wyczy\305\233\304\207", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Suma:", nullptr));
        Sum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Add2button->setText(QCoreApplication::translate("MainWindow", "++", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Podaj liczbe:", nullptr));
        NoteSaveButton->setText(QCoreApplication::translate("MainWindow", "Zapis", nullptr));
        NoteReadButton->setText(QCoreApplication::translate("MainWindow", "Odczyt", nullptr));
        NoteClearButton->setText(QCoreApplication::translate("MainWindow", "wyczy\305\233\304\207", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Kolor Formularza", nullptr));
        RedRadio->setText(QCoreApplication::translate("MainWindow", "czerwony", nullptr));
        GreenRadio->setText(QCoreApplication::translate("MainWindow", "zielony", nullptr));
        GreyRadio->setText(QCoreApplication::translate("MainWindow", "szary", nullptr));
        ClassicRadioButton->setText(QCoreApplication::translate("MainWindow", "KLASYCZNY", nullptr));
        hamster->setText(QString());
        menuKalkulator->setTitle(QCoreApplication::translate("MainWindow", "Kalkulator", nullptr));
        menuNotes->setTitle(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        menuKomunikat->setTitle(QCoreApplication::translate("MainWindow", "Komunikat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
