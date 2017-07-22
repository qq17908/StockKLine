#ifndef DATAFILE_H
#define DATAFILE_H


#include <vector>
#include <QString>
#include <QFile>


typedef struct
{
    QString time;                   //ʱ��
    double openingPrice;            //����
    double highestBid;              //���
    double lowestBid;               //���
    double closeingPrice;           //����
    double amountOfIncrease;        //�Ƿ�
    double amountOfAmplitude;       //���
    QString totalVolume;             //����
    QString totalAmount;             //���
    double turnoverRate;            //������
    double volumeAmount;            //�ɽ�����
    double averageLine5;            //5�վ���
    double averageLine10;           //10�վ���
    double averageLine20;           //20�վ���
    double averageLine30;           //30�վ���
    double averageLine60;           //60�վ���
    double ftotalVolume;
    double ftotalAmount;
    double volumeAverage5;          //�ɽ���5�վ�ֵ
    double volumeAverage10;         //�ɽ���10�վ�ֵ
}KLine;


class DataFile
{
public:
    explicit DataFile();
    ~DataFile();
    bool readData(QString filestr);
    std::vector<KLine> kline;
    QFile* pfile = nullptr;
    void calAverageLine();
    void calAverageLine5();
    void calAverageLine10();
    void calAverageLine20();
    void calAverageLine30();
    void calAverageLine60();


    void calvolumeAverage5();
    void calvolumeAverage10();

    void Corvert();


};

#endif // DATAFILE_H
