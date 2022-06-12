#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Conversor; }
QT_END_NAMESPACE

class Conversor : public QDialog
{
    Q_OBJECT

public:
    Conversor(QWidget *parent = nullptr);
    ~Conversor();

public slots:


    void cent2conv(int grados);
    void fahr2conv(int grados);
    void kel2conv(int grados);


private:
    Ui::Conversor *ui;
};
#endif // CONVERSOR_H
