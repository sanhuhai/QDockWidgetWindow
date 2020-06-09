#include "QDockWidgetWindow.h"

QDockWidgetWindow::QDockWidgetWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //ui.setupUi(this);
    setWindowTitle(tr("DockWindow"));
    QTextEdit* te = new QTextEdit(this);
    te->setText("MainWindow");
    te->setAlignment(Qt::AlignCenter);
    setCentralWidget(te);
    QDockWidget* dock1 = new QDockWidget(tr("DockWindow1"), this);
    dock1->setFeatures(QDockWidget::DockWidgetMovable);
    dock1->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QTextEdit* te1 = new QTextEdit();
    te1->setText(tr("Window1,this is my first QT dockwigetWindow"""));
    dock1->setWidget(te1);

    QDockWidget* dock2 = new QDockWidget(tr("Window2"), this);
    dock2->setFeatures(QDockWidget::DockWidgetClosable | QDockWidget::DockWidgetFloatable);
    QTextEdit* te2 = new QTextEdit();
    te2->setText(tr("Window2,this is my second QT dockwidgetWindow""hello world"));
    dock2->setWidget(te2);

    QDockWidget* dock3 = new QDockWidget(tr("Window3"), this);
    //dock3->setFeatures(QDockWidget::DockWidgetMovable | QDockWidget::DockWidgetClosable | QDockWidget::DockWidgetFloatable);
    dock3->setFeatures(QDockWidget::AllDockWidgetFeatures);
    QTextEdit* te3 = new QTextEdit();
    te3->setText(tr("Window3,this is my third dockwidgetWindow"));
    dock3->setWidget(te3);
    addDockWidget(Qt::RightDockWidgetArea,dock3);
}
