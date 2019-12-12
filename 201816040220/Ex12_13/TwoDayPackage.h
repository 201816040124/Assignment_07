#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"

class TwoDayPackage :public Package
{
public:

   TwoDayPackage(string,string,string,string,string,string,int,double,double,double);
//����TwoDayPackage����
   void setAdditional(double);       //setƽ�ķ�
   double getAdditional();         //get��ƽ�ķ�

   double calculatecost();      //�����ܶ�
   void print();               //��ӡ���

private:
  double additional;
};

#endif


