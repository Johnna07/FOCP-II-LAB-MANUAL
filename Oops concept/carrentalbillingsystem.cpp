// carrentalbillingsystem
#include<iostream>
using namespace std;
class Carrental{
    string carmodel;
    int rentalpriceperday;
    string isrented;
    public:
    Carrental();
    Carrental(string,int);
    void rentcar();
    void returncar();
    void displaycardetails();
    void calculaterentalcost(int);
    };
    void Carrental::rentcar(){
        if(isrented=="no")
        isrented="yes";
    }
    void Carrental::returncar(){
        if(isrented=="yes")
        isrented="no";
        cout<<"CAR RETURNED";
    }
    void Carrental::displaycardetails(){
        cout<<"\nCar model is: "<<carmodel<<"\n Car rental price per day: "<<rentalpriceperday<<"\nyour car is rented: "<<isrented;
    }
    Carrental::Carrental(){
        rentalpriceperday=2000;
        isrented="no";
    }
    Carrental::Carrental(string c,int price){
        rentalpriceperday=price;
        carmodel=c;
    }
   int main(){
    Carrental c1,c2("SUV",3000);
     c1.displaycardetails();
     c2.displaycardetails();
     c1.returncar();
     c1.displaycardetails();
     return 0;
   }


