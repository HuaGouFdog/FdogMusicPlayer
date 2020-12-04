#ifndef LENON_H
#define LENON_H

#include <QWidget>

namespace Ui {
class Lenon;
}

class Lenon : public QWidget
{
    Q_OBJECT

public:
    explicit Lenon(QWidget *parent = 0);
    ~Lenon();

private:
    Ui::Lenon *ui;
};

#endif // LENON_H
