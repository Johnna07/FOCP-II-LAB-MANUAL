// strong password validation
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter your password ";
    getline(cin,s);
    int capital=0,small=0,number=0,special_character=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='A'&&ch<='Z')
        capital=1;
        else if(ch>='a'&&ch<='z')
        small=1;
        else if(ch>='0'&&ch<='9')
        number=1;
        else if(ch=='@'||ch=='#'||ch =='$'||ch =='%'||ch =='!'||ch=='&'||ch=='*')
        special_character = 1;
    }

    if (capital && small && number && special_character)
        cout<<"Strong Password";
    else
        cout<<"Weak Password";

    return 0;
        

}