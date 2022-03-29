#ifndef CCB_H
#define CCB_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ccb; }
QT_END_NAMESPACE

class ccb : public QWidget
{
    Q_OBJECT

public:
    ccb(QWidget *parent = nullptr);
    ~ccb();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ccb *ui;
};
#endif // CCB_H
