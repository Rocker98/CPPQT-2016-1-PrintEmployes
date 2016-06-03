#include <iostream>
#include "emploee.h"
#include "printable.h"

using namespace std;

Employee::Employee()
{

}
    void Employee::setEmployee(Employee *ptr)
    {
        cout<<"Enter a name: "<<endl;
        cin>>ptr->name;
//        name=name1;
        cout<<"Enter a mobilenumber: "<<endl;
        cin>>ptr->mobilenumber;
//        mobilenumber=mobi1;
        cout<<"Enter a address: "<<endl;
        cin>>ptr->address;
//        address=address1;
        cout<<"Enter a salary: "<<endl;
        cin>>ptr->salary;
//        salary=salary1;
        cout<<"Enter a years: "<<endl;
        cin>>ptr->year;
//        year=year1;

        cin.clear();
        cout<<"Done";
    }

   void Employee::print()
   {
       cout<<name;
        cout<<endl;
       cout<<mobilenumber;
        cout<<endl;
       cout<<address;
        cout<<endl;
       cout<<salary;
        cout<<endl;
       cout<<year;
        cout<<endl;
        cout<<"all is print";
   }


