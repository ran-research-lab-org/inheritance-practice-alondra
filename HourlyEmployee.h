#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
#include <string>
using namespace std;

class HourlyEmployee : public Employee 
{
public:
    double payPerHour;
    double workedHours;

    HourlyEmployee(); //Constructor default 
    HourlyEmployee(const string& name, int id, double payPerHour, double workedHours);

    double calculatePay() const override;
    double getPayPerHour() const;
    double getWorkedHours() const;
};

#endif

