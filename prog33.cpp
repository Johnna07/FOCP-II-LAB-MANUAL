//student marks in 2d array
#include<iostream>
using namespace std;
int main(){
    int arr[3][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cin>>arr[3][5];

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<"marks of second subject of first student"<<arr[0][1];
            cout<<"marks of fifth subject of third student"<<arr[2][4];

        }
    }
    return 0;
}