#ifndef WIN_H
#define WIN_H

#include <QMainWindow>

namespace Ui {
class win;
}

class win : public QMainWindow
{
    Q_OBJECT

public:
    explicit win(QWidget *parent = nullptr);
    ~win();

private:
    Ui::win *ui;

private slots:
    void receivewin();
    void on_end_clicked();
    void on_again_clicked();

signals:
    void showMainWindow();
    void quit();
};

#endif // WIN_H
