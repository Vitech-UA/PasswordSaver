#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QSqlDatabase"
#include "QSqlQuery"




//#define USE_DEBUG_STATUS_BAR_MESSAGE

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
MainWindow(QWidget *parent = nullptr);
~MainWindow();


private slots:
void on_pushButton_2_clicked();

void on_pushButton_clicked();

void on_newSiteLineEdit_editingFinished();

void on_newSiteLineEdit_cursorPositionChanged(int arg1, int arg2);

void on_newLoginLineEdit_cursorPositionChanged(int arg1, int arg2);

void on_newPasswordLineEdit_cursorPositionChanged(int arg1, int arg2);

void on_comboBox_2_currentIndexChanged(const QString &arg1);

void on_pushButton_3_clicked();

void UpdateDataBaseTotalCountLabel();

void UpdateSitesComboBox();
void on_EditLoginLineEdit_cursorPositionChanged(int arg1, int arg2);

void on_EditPasswordLineEdit_cursorPositionChanged(int arg1, int arg2);

void on_UpdatePushButton_clicked();

void on_importButton_clicked();

private:
Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
