#include "lenon.h"
#include "ui_lenon.h"

Lenon::Lenon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lenon)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

Lenon::~Lenon()
{
    delete ui;
}
