// bus reservation system
#include<iostream>
using namespace std;
class Busdetails{
    string passengername;
    int seatno;
    int ticketprice;
    string isreserved;
    public:
    Busdetails();
    Busdetails(string,int);
    Busdetails(string,int,int);
    void reserveseat();
    void cancelreservation();
    void displayseatdetails();
};
void Busdetails::reserveseat(){
    if(isreserved=="no")
    isreserved="yes";
}
void Busdetails::cancelreservation(){
    if(isreserved=="yes")
    isreserved="no";
    cout<<"\nyour reservation has been cancelled";
}
void Busdetails::displayseatdetails(){
cout<<"\npassenger name is: "<<passengername<<"\nseat no of the passenger is:"<<seatno<<"\nticket price is: "<<ticketprice<<"\nyour seat reserved: "<<isreserved;
}
Busdetails::Busdetails(){
    passengername="";
    seatno=0;
    ticketprice=400;
    isreserved="no";
}
Busdetails::Busdetails(string name,int sn){
    passengername=name;
    seatno=sn;
}
Busdetails::Busdetails(string name,int sn,int price){
    ticketprice=price;
    passengername=name;
    seatno=sn;
}
int main(){
    Busdetails b1,b2("Mohit",20),b3("Yash",25,20);
    b1.displayseatdetails();
    b2.displayseatdetails();
    b3.displayseatdetails();
    b3.reserveseat();
    b3.cancelreservation();
    return 0;
}
