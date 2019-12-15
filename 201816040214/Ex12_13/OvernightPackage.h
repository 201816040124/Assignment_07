#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include<string>
#include"Package.h"
using namespace std;

class OvernightPackage: public Package
{
public:
    OvernightPackage( const string &, const string &, const string &,
                     const string &, const string &, const string &, double, double, double = 0.0 );
    virtual double calculateCost() override;
    virtual void print() override;
private:
    double addprice;//add data member addprice
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
