#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <printable.h>

using namespace std;

//typedef unsigned int int;

class Employee: public Printable
{
private:
    string name;
    int mobilenumber;
    string address;
    int salary;
    int year;

public:
  void setEmployee(Employee *p);
  //void getEmployee();


    void print() override;

   Employee();

};

#endif // EMPLOYEE_H
