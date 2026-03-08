// Bank Account summary
#include<iostream>
#include<iomanip>
using namespace std ;
class Bankaccount{
    string accountholdername;
    int acccountnumber;
    double balance;
    public:
    void inputdetails(){
        cout<<"Enter account holder name, account number , balance";
        cin>>accountholdername>>acccountnumber>>balance;
    }
    void displaydetails(){
        cout<<"account holder name is: "<<accountholdername<<"\naccount number is: "<<acccountnumber<<"\nYour balance is"<<fixed<<setprecision(2)<<balance;}
    void deposit(){
        double depositamount;
        cout<<"\nenter amount to be deposited";
        cin>>depositamount;
        balance=balance+depositamount;
        cout<<"\nYour Balance after deposit is: "<<balance;
    }
    void withdrawl(){
        double withdrawlamount;
        cout<<"\nenter amount to be withdrawed";
        cin>>withdrawlamount;
        balance=balance-withdrawlamount;
        cout<<"\nBalance after withdrawl is: "<<balance;
    }

};
int main(){
    Bankaccount B1;
    B1.inputdetails();
    B1.displaydetails();
    B1.deposit();
    B1.withdrawl();
    return 0;

}
