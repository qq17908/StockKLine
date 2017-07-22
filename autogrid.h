#ifndef AUTOGRID_H
#define AUTOGRID_H

#include <QWidget>


class AutoGrid : public QWidget
{
    Q_OBJECT
public:
    explicit AutoGrid(QWidget *parent = 0);

    void virtual initial();
    void virtual drawBK();
    void virtual resizeEvent(QResizeEvent* event);
    void virtual calAtomGridHeight();
    void virtual calAtomGridWidth();
    void virtual paintEvent(QPaintEvent* event);    
    void drawGrid();
    void drawHorLine();
    void drawVerLine();


    int getMarginLeft() const;
    void setMarginLeft(int value);

    int getMarginRight() const;
    void setMarginRight(int value);

    int getMarginTop() const;
    void setMarginTop(int value);

    int getMarginBottom() const;
    void setMarginBottom(int value);

    int getWidgetHeight() const;

    int getWidgetWidth() const;

    double getGridHeight() const;

    double getGridWidth() const;

    int getHGridNum() const;
    void setHGridNum(int value);

    int getWGridNum() const;
    void setWGridNum(int value);

    double getAtomGridHeightMin() const;
    void setAtomGridHeightMin(double value);

    double getAtomGridWidthMin() const;
    void setAtomGridWidthMin(double value);

    double getAtomGridHeight() const;

    double getAtomGridWidth() const;

private:


    //����߿����
    int marginLeft      = 80;
    int marginRight     = 80;
    int marginTop       = 20;
    int marginBottom    = 20;


    //��ǰwidget�Ŀ�Ⱥ͸߶�
    int widgetHeight;
    int widgetWidth;

    //��ǰ���Ŀ�Ⱥ͸߶�
    double gridHeight;
    double gridWidth;

    //��ǰ�������С���Ŀ�Ⱥ͸߶�
    double atomGridHeight;
    double atomGridWidth;


    //�����С���ӵ�����
    int hGridNum;
    int wGridNum;


    //��ǰ�������С���Ŀ�Ⱥ͸߶ȵ���Сֵ
    double atomGridHeightMin;
    double atomGridWidthMin;


signals:

public slots:
};

#endif // AUTOGRID_H
