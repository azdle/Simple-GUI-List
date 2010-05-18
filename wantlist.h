#ifndef WANTLIST_H
#define WANTLIST_H

#include <QMainWindow>

namespace Ui {
    class WantList;
}

class WantList : public QMainWindow {
    Q_OBJECT
public:
    WantList(QWidget *parent = 0);
    ~WantList();

public slots:
    void

protected:
    void changeEvent(QEvent *e);

private:
    Ui::WantList *ui;
};

#endif // WANTLIST_H
