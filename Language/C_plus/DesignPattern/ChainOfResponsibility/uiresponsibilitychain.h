#ifndef UILIABILITYCHAIN_H
#define UILIABILITYCHAIN_H

#include <QWidget>

namespace Ui {
class UIResponsibilityChain;
}

class UIResponsibilityChain : public QWidget
{
    Q_OBJECT

public:
    explicit UIResponsibilityChain(QWidget *parent = 0);
    ~UIResponsibilityChain();
private:
    Ui::UIResponsibilityChain *ui;
};

#endif // UILIABILITYCHAIN_H
