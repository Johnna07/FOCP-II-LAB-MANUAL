// count nos divisible by 3 or 5.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements in the array ";
    cin>>n;
    int arr[n];
    cout<<"enter the nos ";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int count_three=0,count_five=0;
    for(int i=0;i<=n;i++){
        if(arr[i]%3==0)
        count_three++;
        else if(arr[i]%5==0)
        count_five++;
        else
        continue;}
     cout<<"nos divisible by 3 are "<<count_three;
cout<<"\nnos divisible by 5 are "<<count_five;
return 0;
    }