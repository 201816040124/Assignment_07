#include <iostream>
#include <string>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string name1,string name2,string add,string city1,string sta,string add1,int pos,double wig,double oun,double addit)
    :Package(name1,name2,add,city1,sta,add1,pos,wig,oun)
    //���캯��
{
  setAdditional(addit);
}

void TwoDayPackage::setAdditional(double addit)  //setAdditional
{
    additional=addit;

}

double TwoDayPackage::getAdditional()            //getAdditional
{
    return additional;
}

double TwoDayPackage::calculatecost()        //����
{
    return getAdditional()+Package::calculatecost();   //ƽ�ķѼ���ԭ���ܷ���
}

void  TwoDayPackage::print()                     //��ӡ���
{
    Package::print();
    cout<<"flat shipping fee: "<<additional<<"  ";
    cout<<"money: "<<calculatecost()<<endl;
}
