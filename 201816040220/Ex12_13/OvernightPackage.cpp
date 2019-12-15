
#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"


OvernightPackage::OvernightPackage(string name1,string name2,string add,string city1,string sta,string add1,int pos,double wig,double oun,double rat)
    :Package(name1,name2,add,city1,sta,add1,pos,wig,oun)
    //���캯��
{
  setRate(rat);
}

void OvernightPackage::setRate(double rat)            //setRate
{
    rate=rat;

}

double OvernightPackage::getRate()                 //getRate
{
    return rate;
}

double OvernightPackage::calculatecost()               //����
{
    return (getRate()+Package::getOunce())*Package::getWight();     //ÿ��˾��ļӵ�ԭ�ȵĳ�������
}

void  OvernightPackage::print()                       //��ӡ���
{
    Package::print();
    cout<<"add money per ounce: "<<rate<<"  ";
    cout<<"money: "<<calculatecost()<<endl;
}



