#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QMessageBox"
#include "QDir"
#include <QTextStream>
#include <QFileInfo>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db;
    QString DataBaseDir;
    QString DataBasePath;


    db = QSqlDatabase::addDatabase("QSQLITE");
    DataBaseDir = QCoreApplication::applicationDirPath();
    DataBasePath = QApplication::applicationDirPath() + "/password_db.db";
    db.setDatabaseName(DataBasePath);
    QDir dir;
    DataBaseDir = QCoreApplication::applicationDirPath();
    QString currentDBPath = dir.relativeFilePath(DataBaseDir + "/password_db.db");
    ui->DataBaseLocationLabel->setText(currentDBPath);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(currentDBPath);
    if (db.open() == true) {
        ui->statusbar->showMessage(db.databaseName() + " open successful");
        UpdateSitesComboBox();
    }
    UpdateDataBaseTotalCountLabel();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QSqlQuery query;

    QString SelectedSite = ui->comboBox->currentText();
    QString QueryText;

    QString str = ("SELECT * from passwords WHERE site = '%1'");
    QueryText = str.arg(SelectedSite);


    ui->statusbar->showMessage(QueryText);


    if (query.exec(QueryText))

        ui->statusbar->showMessage("Query to " + SelectedSite + " successful");

    else
    {

        ui->statusbar->showMessage("Query error");

    }

    while (query.next()) {
        QString PasswordText = query.value(3).toString();
        QString LoginText = query.value(2).toString();
        ui->GetLoginLineEdit->setText(LoginText);
        ui->GetPasswordLineEdit->setText(PasswordText);
    }
}

void MainWindow::on_pushButton_clicked()
{
    QSqlQuery InsertQuery;
    QString str;
    QString strF;

    strF = "INSERT into passwords (site, login, password)"
           "VALUES('%1', '%2', '%3');";

    str = strF.arg(ui->newSiteLineEdit->text())
            .arg(ui->newLoginLineEdit->text())
            .arg(ui->newPasswordLineEdit->text());

    //ui->statusbar->showMessage(str);

    InsertQuery.exec(str);

    ui->comboBox->addItem(ui->newSiteLineEdit->text());

    ui->newSiteLineEdit->clear();
    ui->newLoginLineEdit->clear();
    ui->newPasswordLineEdit->clear();

    QMessageBox msgBox;
    msgBox.setText("Запис додано!");
    msgBox.exec();


    UpdateDataBaseTotalCountLabel(); // Оновлюємо сумарну к-ть записів у базі даних
}

void MainWindow::on_newSiteLineEdit_editingFinished()
{
    if (ui->newSiteLineEdit->text().length() > 0 && ui->newLoginLineEdit->text().length() > 0 && ui->newPasswordLineEdit->text().length() > 0)

        ui->pushButton->setEnabled(true);
}

void MainWindow::on_newSiteLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if (ui->newSiteLineEdit->text().length() > 0 && ui->newLoginLineEdit->text().length() > 0 && ui->newPasswordLineEdit->text().length() > 0)

        ui->pushButton->setEnabled(true);
}

void MainWindow::on_newLoginLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if (ui->newSiteLineEdit->text().length() > 0 && ui->newLoginLineEdit->text().length() > 0 && ui->newPasswordLineEdit->text().length() > 0)

        ui->pushButton->setEnabled(true);
}

void MainWindow::on_newPasswordLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if (ui->newSiteLineEdit->text().length() > 0 && ui->newLoginLineEdit->text().length() > 0 && ui->newPasswordLineEdit->text().length() > 0)

        ui->pushButton->setEnabled(true);
}

void MainWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
}

void MainWindow::on_pushButton_3_clicked()
{
}


void MainWindow:: UpdateDataBaseTotalCountLabel(void)
{
    QSqlQuery query;

    query.exec("SELECT COUNT(*) from passwords");

    while (query.next()) {
        qint16 totalCount = query.value(0).toInt();
        QString CountString = QString::number(totalCount);
        ui->TotalNotesLabel->setText(CountString);
    }
}

void MainWindow::UpdateSitesComboBox()
{
    QSqlQuery query;

    query.exec("SELECT site from passwords");

    while (query.next()) {
        QString _site = query.value(0).toString();
        ui->comboBox->addItem(_site);
        ui->comboBox_2->addItem(_site);
    }
}

void MainWindow::on_EditLoginLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if (ui->EditLoginLineEdit->text().length() > 0 && ui->EditPasswordLineEdit->text().length() > 0)
        ui->UpdatePushButton->setEnabled(true);
}

void MainWindow::on_EditPasswordLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if (ui->EditLoginLineEdit->text().length() > 0 && ui->EditPasswordLineEdit->text().length() > 0)
        ui->UpdatePushButton->setEnabled(true);
}

void MainWindow::on_UpdatePushButton_clicked()
{
    QSqlQuery UpdateLoginQuery;
    QSqlQuery UpdatePasswordQuery;
    QString str;
    QString strF;

    strF = "UPDATE passwords "
           "SET login = '%1' WHERE site = '%2' ";


    str = strF.arg(ui->EditLoginLineEdit->text())
            .arg(ui->comboBox_2->currentText());



    ui->statusbar->showMessage(str);

    UpdateLoginQuery.exec(str);

    strF = "UPDATE passwords "
           "SET password = '%1' WHERE site = '%2' ";

    str = strF.arg(ui->EditPasswordLineEdit->text())
            .arg(ui->comboBox_2->currentText());

    UpdatePasswordQuery.exec(str);

    ui->EditLoginLineEdit->setText("");
    ui->EditPasswordLineEdit->setText("");

    QMessageBox msgBox;
    msgBox.setText("Запис оновлено!");
    msgBox.exec();


    UpdateSitesComboBox();
}

void MainWindow::on_importButton_clicked()
{
    //import

    QString  fileName;
    fileName = QFileDialog::getOpenFileName(this,tr("Open data base"), "", tr("PasswordSaverDB files (*.db)"));
    ui->DataBaseLocationLabel->setText(fileName);



    QMessageBox msgBox;
    msgBox.setText("Нову базу даних додано!");
    msgBox.exec();
}
