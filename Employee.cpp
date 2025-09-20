#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;


//   }
//   //Return the bi-weekly pay for employees paid by the hour
//   double calculatePay()
//   {

//   }
//   //Returns the employee pay per hour
//   double getPayPerHour()
//   {
//     return payPerHour;
//   }
//   //return the employees working hours
//   double getWorkedHours()
//   {
//     return workedHours;
//   }


// Employee(const string& name, int id, const string& type, 
//           double payPerHour, double workedHours, double yearlyPayment)
//   {
//     // TODO: 
//   }
// }

//Clase "hija" de employee
class SalariedEmployee : public Employee
{
  private:
  double YearlyPayment;

  public:
  SalariedEmployee();
  SalariedEmployee(string name, int id, double YearlyPayment)
  {
    
  }
  //returns yearly payment   
  double gerYearlyPayment();
  //Returns the bi-weekly pay for salaried employees
  double calculatePay();

}



/* IMPLEMENT GETTERS*/