#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
using namespace std;
#include <string>
#include "OvernightPackage.h"

class OvernightPackage :public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,int,double,double,double);
//����OvernightPackage����
    void setRate(double);       //set�������
    double getRate();          //get�������

   double calculatecost();     //�����ܷ�
   void print();               //��ӡ���

private:
    double rate;

};

#endif


