#include "wantlist.h"
#include "ui_wantlist.h"

WantList::WantList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WantList)
{
    ui->setupUi(this);
}

WantList::~WantList()
{
    delete ui;
}

void WantList::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

