#include "win.h"
#include "ui_win.h"

win::win(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::win)
{
    ui->setupUi(this);
}

win::~win()
{
    delete ui;
}

void win::receivewin()
{
    this->show();
}

void win::on_end_clicked()
{
    emit quit();
}

void win::on_again_clicked()
{
    emit showMainWindow();
    this->hide();
}
