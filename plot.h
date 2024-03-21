#ifndef PLOT_H
#define PLOT_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include "qcustomplot.h"

namespace Ui {
class Plot;
}

class Plot : public QMainWindow
{
    Q_OBJECT

public:
    explicit Plot(QWidget *parent = nullptr);
    ~Plot();

private slots:
    void resizeEvent(QResizeEvent* e);
    void loadDataToPlot();
private:
    Ui::Plot *ui;

    QUdpSocket* socket;

    void changeColorGraph(int index, QString color);
};

#endif // PLOT_H
