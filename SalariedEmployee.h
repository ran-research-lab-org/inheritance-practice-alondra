#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

class SalariedEmployee : public Employee {
public:
    double yearlyPayment;

    // SalariedEmployee();//Constructor default
    SalariedEmployee(const string& name, int id, double yearlyPayment) : Employee(name, id, type)
    {
        
    }

    double calculatePay() const override;
    double getYearlyPayment() const;
};

#endif

