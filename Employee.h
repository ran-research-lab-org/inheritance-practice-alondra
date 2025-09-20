// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>

class Employee 
{
// Attributes
protected:
    string name; //Employee Name
    int id; //Employee ID
    string type; // "Hourly" or "Salaried"

// Methods
public:
	// TODO: Constructor
    Employee(); //Default constructor
    Employee(string name, int id, string type); //Cosntructor con parametros 
    
    virtual ~Employee() {} //Destructor 

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    // TODO: Getters
    string getType();
    string getName();

    //Metodos
    
};

#endif

