#include "gameover.h"
#include "ui_gameover.h"

gameover::gameover(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gameover)
{
    ui->setupUi(this);
}

gameover::~gameover()
{
    delete ui;
}

void gameover::receivegameOver()
{
    this->show();
}

void gameover::on_end_clicked()
{
    emit quit();
}

void gameover::on_again_clicked()
{
    emit showMainWindow();
    this->hide();
}
