// hotelbooking system
#include<iostream>
using namespace std;
class Hotelbooking{
    
    int roomNumber;
    string roomtype;
    int pricepernight;
    string isbooked;
    public:
    Hotelbooking();
    Hotelbooking(int,string);
    Hotelbooking(int,string,int);
    
    void bookroom();
    void cancelbooking();
    void displayroomdetails(int);
    void calculatebill(int);
};
void Hotelbooking::bookroom(){
    if(isbooked=="no")
    isbooked="yes";
}
void Hotelbooking::cancelbooking(){
    if(isbooked=="yes")
    isbooked="no";
    cout<<"\nYour booking is cancelled";
}
void Hotelbooking::displayroomdetails(int n ){
    cout<<"\nyour room no is: "<<roomNumber<<"\nyour room type is: "<<roomtype<<"\n staying cost per night: "<<pricepernight<<"\n your room booked: "<<isbooked;
    calculatebill(n);
}
void Hotelbooking::calculatebill(int n){
    cout<<"\nyour total cost of stay is: "<<(pricepernight*n);
}
Hotelbooking::Hotelbooking(){
    roomtype="";
    pricepernight=1500;
    isbooked="no";
}
Hotelbooking::Hotelbooking(int rn,string rt){
    roomtype=rt;
    roomNumber=rn;
}
Hotelbooking::Hotelbooking(int rn,string rt,int price){
    roomNumber=rn;
    roomtype=rt;
    pricepernight=price;
}
int main(){
    Hotelbooking h1,h2(202,"deluxe"),h3(303,"suite",5000);
    h1.displayroomdetails(3);
    h2.displayroomdetails(3);
    h3.displayroomdetails(3);
    h1.cancelbooking();
    }


