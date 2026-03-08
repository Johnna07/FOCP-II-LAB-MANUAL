// Student record system
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    int marks1,marks2,marks3;
    void input_details(){ // setter
        cout<<"enter student name,roll_no,marks1,marks2,marks3";
        cin>>name>>roll_no>>marks1>>marks2>>marks3;
    }
    int calculate_info(){// getter
        cout<<"\nTotal marks of student ";
        cout<<marks1+marks2+marks3;
        return 0;
    }
    void display_details(){//getter
     cout<<"Student Name is: "<<name<<"\nStudent roll no is: "<<roll_no<<"\nMarks of first subject: "<<marks1<<"\nMarks of second subject: "<<marks2<<"\nMarks of third subject: "<<marks3;
     calculate_info();
    }


};
int main(){
    Student D1;
    D1.input_details();
    D1.display_details();
    return 0;

    }
