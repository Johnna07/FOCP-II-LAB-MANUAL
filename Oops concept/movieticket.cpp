// Movie Ticket System
#include<iostream>
using namespace std;
class MovieTicket{ 
    public:  // class 
    string moviename;// objects
    int seatNumber;
    int ticketPrice;
    string isbooked;
    MovieTicket(); // default constructor
    MovieTicket(string,int,int);// parametrised constructor
    void bookticket(); // methods
    void cancelticket();
    void displayticketdetails(int);
    void calculatetotalcost(int);
};
  // defining methods
  void MovieTicket::bookticket(){
    if(isbooked=="no")
    isbooked="yes";
    cout<<"\nYour Movie Ticket is booked";
}
 void MovieTicket::cancelticket(){
    if(isbooked=="yes")
    isbooked="no";
    cout<<"\nYour Movie Ticket is cancelled";
}
void MovieTicket::calculatetotalcost(int n){
     cout<<"\ntotalcost of tickets is: "<<(ticketPrice*n);
     }
  
  void MovieTicket::displayticketdetails(int n){
    cout<<"\nMovie name is: "<<moviename<<"\nseatnumber is: "<<seatNumber<<"\nticketprice is: "<<ticketPrice<<"\nticket booked: "<<isbooked;
    calculatetotalcost(n);
  }
  MovieTicket::MovieTicket(){
    isbooked="no";
    ticketPrice=200;
    seatNumber=35;
    
  }
  MovieTicket::MovieTicket(string name,int seatno,int price){
    moviename=name;
    seatNumber=seatno;
    ticketPrice=price;
    isbooked="yes";
  }
  int main(){   // main program
    MovieTicket m1,m2("Dhurandhar",20,200);
    m1.displayticketdetails(3);
    m2.displayticketdetails(3);
    m1.cancelticket();
    m1.displayticketdetails(4);
    m2.cancelticket();
    m2.displayticketdetails(4);

return 0;
  }


  

  
  