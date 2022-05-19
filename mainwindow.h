#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "todo_model.h"

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
    void on_pushButton_clicked();

private:
    QVector<table> list;
    Todo_Model * model = new Todo_Model(list);
    static int row_counter;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
