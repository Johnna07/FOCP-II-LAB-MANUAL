// Rectangle calculator 
#include<iostream>
using namespace std ;
class Rectangle{
    float length;
    float width;
    public:
    void inputDimensions(){
        cout<<"Enter length and width of rectangle";
        cin>>length>>width;
        
    }
    float calculateArea(){
        cout<<"\nArea of rectangle ";
        cout<<length*width;
        return 0;
   }
   float calculatePerimeter(){
    cout<<"\nPerimeter of rectangle ";
         cout<<2*(length+width);
         return 0;
       
    }
  void displayresult(){
    calculateArea();
    calculatePerimeter();
  }

};
int main(){
    Rectangle R1;
    R1.inputDimensions();
    R1.displayresult();
    return 0;
}