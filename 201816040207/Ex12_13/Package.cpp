#include"Package.h"
#include<iostream>
#include<string>
using namespace std;


Package::Package(string na,string add,string c,int po,double p,double w)
{
    setname(na);
    setaddress(add);
    setcity(c);
    setpostcode(po);
    setprice(p);
    setweight(w);
}
void Package::getname()
{
    cout<<name;
}
void Package::setname(string name1)
{
    name=name1;
}
void Package::getaddress()
{
    cout<<address;
}
void Package::setaddress(string a)
{
    address=a;
}
string Package::getcity()
{
    return city;
}
void Package::setcity(string c)
{
    city = c;
}
int Package::getpostcode()
{
    return postcode;
}
void Package::setpostcode(int po )
{
    postcode= po ;
}
void Package::setprice(double p)
{
    price = p;
}
double Package::getprice()
{
    return price;
}
void Package::setweight(double h)
{
    weight =h;

}
void Package::calculateCost()
{
    cost = weight*price;
    cout<<cost;
}
double Package::calculate()
{
    return weight*price;
}




