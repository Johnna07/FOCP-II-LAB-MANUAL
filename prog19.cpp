// prime nos within a given range 
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter range of nos ";
    cin>>num1;
    cin>>num2;
    
    for(int i=num1;i<=num2;i++){
        if(i<=1)
        continue;
        int count=0;
        for(int j=2;j<=i;i++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if (count == 0) {
        cout << i << " ";
        }
    }

    return 0;
}
