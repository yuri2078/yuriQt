#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent,QSqlDatabase *db);
    ~MainWindow();


signals:
    void loginEnd();
    void sqlSearch();

private:
    Ui::MainWindow *ui;
    QSqlDatabase *db;
};
#endif // MAINWINDOW_H
