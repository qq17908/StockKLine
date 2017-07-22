#ifndef KLINEGRID_H
#define KLINEGRID_H

#include "autogrid.h"
#include "datafile.h"

#include <QPoint>
#include "showdetail.h"
#include <QString>



class ShowDetail;

class KLineGrid : public AutoGrid
{
    Q_OBJECT

public:
    explicit KLineGrid(QWidget *parent = 0);
    void virtual paintEvent(QPaintEvent* event);
    void virtual keyPressEvent(QKeyEvent* event);
    void virtual mouseMoveEvent(QMouseEvent* event);
    void virtual mousePressEvent(QMouseEvent* event);
    void virtual resizeEvent(QResizeEvent* event);
    ~KLineGrid();



    bool readData(QString strFile);
    void initial();
    void drawLine();
    void getIndicator();
    void drawYtick();
    void drawKline();


    //���̰��º󻭵�ʮ����
    void drawCross();
    void drawCrossVerLine();
    void drawCrossHorLine();
    void drawTips();

    //����û���»���ʮ����
    void drawCross2();
    void drawMouseMoveCrossVerLine();
    void drawMouseMoveCrossHorLine();
    void drawTips2();



    //������
    void drawAverageLine(int day);

private:
    DataFile mDataFile;
    ShowDetail* mShowDrtail;


    //��k�ߵ���ʼ���ں���ֹ����
    int beginDay;
    int endDay;
    int totalDay;
    int currentDay;


    //��ǰҪ����k�������е���߼ۣ���ͼۣ����ɽ���
    double highestBid;
    double lowestBid;
    double maxVolume;

    //x���y������ű�
    double xscale;
    double yscale;

    //�Ƿ���ʾʮ����
    bool bCross = false;


    //���λ��
    QPoint mousePoint;

    //���ʵ��߿�
    int lineWidth;


    //�����Ƿ���
    bool isKeyDown = false;



    //�Ƿ񻭾���
    bool isDrawAverageLine = true;

signals:



};

#endif // KLINEGRID_H
