// prime check function
#include<iostream>
using namespace std;
bool isPrime(int n){
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
        flag=0;
        break;}}
    if(flag==1)
    cout<<"Prime ";
    else
    cout<<"not prime ";
    return 0;

}
    
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    isPrime(x);
    return 0;



}

