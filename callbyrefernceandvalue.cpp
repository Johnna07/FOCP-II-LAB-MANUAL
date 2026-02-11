// call by reference and value
#include<iostream>
using namespace std;
void swapbyvalue(int a ,int b){
    int temp=a;
    a=b;
    b=temp;
   
}
void swapbyreference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
main(){
    int x,y;
    cin>>x>>y;
    swapbyvalue(x,y);
    cout<<"value swapped by value "<<x<<y;
    swapbyreference(x,y);
    cout<<"\nvalue swapped by refernce "<<x<<y;
    return -1;

}