#pragma once

#include <QtWidgets/QMainWindow>
#include <QTextEdit>
#include <QDockWidget>
#include "ui_QDockWidgetWindow.h"

class QDockWidgetWindow : public QMainWindow
{
    Q_OBJECT

public:
    QDockWidgetWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::QDockWidgetWindowClass ui;
};
