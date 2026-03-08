// basic candy crush game element
#include<iostream>
using namespace std;
class Candy{
    string colour;
    int points;
    public:
    void setcandy(string c,int p);
    void displaycandy();
};
void Candy::setcandy(string c ,int p){
    colour=c; points=p;
}
void Candy::displaycandy(){
    cout<<"\nColour: "<<colour;
    cout<<"\npoints: "<<points;
}
int main(){
    string clr,clr1;
    int pts,pts1;
    cout<<"Enter Colour and points of candy 1 ";
    cin>>clr>>pts;
    cout<<"Enter Colour and points of candy 2";
    cin>>clr1>>pts1;
    Candy c1,c2;
    c1.setcandy(clr,pts);
    c2.setcandy(clr1,pts1);
    c1.displaycandy();
    c2.displaycandy();
    return 0;
}
    
