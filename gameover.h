#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QMainWindow>

namespace Ui {
class gameover;
}

class gameover : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameover(QWidget *parent = nullptr);
    ~gameover();

private:
    Ui::gameover *ui;

private slots:
    void receivegameOver();
    void on_end_clicked();

    void on_again_clicked();

signals:
    void showMainWindow();
    void quit();
};

#endif // GAMEOVER_H
