#pragma once

class QCTabWidget : public QTabWidget
{
    Q_OBJECT

public:
    QCTabWidget(QWidget *parent);
    ~QCTabWidget();
    private slots:
    void changeTabPosition(Qt::DockWidgetArea area);
};
