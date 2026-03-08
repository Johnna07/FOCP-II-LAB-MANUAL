// student grade system
#include<iostream>
using namespace std;
class Student{
    string studentname;
    int rollnumber;
    int marks;
    public:
    Student();
    Student(string,int,int);
    void calculategrade();
    void displaystudentdetails();
    void updatemarks(int);
};
char grade;
void Student::calculategrade(){
    if(marks>=90)
    grade='A';
    else if(marks>=75&&marks<90)
    grade='B';
    else if(marks>=60&&marks<75)
    grade='C';
    else
    grade='D';
}
void Student::displaystudentdetails(){
    cout<<"\nStudent name is: "<<studentname <<"\nStudent rollno is: "<<rollnumber<<"\nStudent marks is: "<<marks<<"\nStudent grade is: "<<grade;
}
void Student::updatemarks(int n){
    marks=n;
}
Student::Student(){
    studentname="";
    rollnumber=0;
    marks=0;
}
Student::Student(string n,int r,int m){
    studentname=n;
    rollnumber=r;
    marks=m;
}
int main(){
    Student s1,s2("Johnna",25,94);
    s1.calculategrade();
    s2.calculategrade();
    s1.displaystudentdetails();
    s2.displaystudentdetails();
    s2.updatemarks(70);
    s2.displaystudentdetails();
   return 0;
}