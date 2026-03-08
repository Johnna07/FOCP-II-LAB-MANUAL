// Temperature converter
#include<iostream>
using namespace std;
class Temperature{
    float celsius;
    public:
    void inputTemperature(){
        cout<<"Enter temperature in celsius";
        cin>>celsius;
    }
    float converttofarenheit(){
        cout<<"Temperature converted to farenheit ";
        cout<<(celsius*9/5) + 32;
    }
};
int main(){
    Temperature t1;
    t1.inputTemperature();
    t1.converttofarenheit();
    return 0;
}