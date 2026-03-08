// Employee information system
#include<iostream>
using namespace std;
class Employee{
    int empId;
    string name;
    double monthlySalary;
    public:
    void inputdetails(){
        cout<<"Enter employee id, enter employee name, enter monthly salary of employee";
        cin>>empId>>name>>monthlySalary;
    }
    double calculateannualsalary(){
        cout<<"Annual salary of employee is: ";
        cout<<12*monthlySalary;
        return 0;
    }
    void displaydetails(){
        cout<<"\nEmployee ID is: "<<empId<<"\nEmployee Name is: "<<name<<"\nMonthly salary of employee is: "<<monthlySalary;
        calculateannualsalary();
    }

};
int main(){
    Employee E1;
    E1.inputdetails();
    E1.displaydetails();
    return 0;
}
