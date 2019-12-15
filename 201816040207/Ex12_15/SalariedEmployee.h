#ifndef SALARIED_H
#define SALARIED_H
#include<string>
#include"Employee.h"// Employee class definition
class SalariedEmployee:public Employee
{


public:
    SalariedEmployee( const std::string&,const std::string&,
    const std::string&,double=0.0);
    virtual ~SalariedEmployee(){}// virtual destructor
    void setWeeklySalary( double);//set weekly salary
    double getweeklySalary()const;//return weekly salary
    //keyword virtual signals intent to override

    virtual double earnings()const override;// calculate earn��ngs
    virtual void print()const override;// pr��nt object
private:
    double weeklySalary;//salary per week
};// end class SalariedEmployge
#endif// SALARIED_H

