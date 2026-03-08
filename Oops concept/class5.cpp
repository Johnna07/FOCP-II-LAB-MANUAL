// book library entry
#include<iostream>
using namespace std;
class Book{
    string title;
    string author;
    double price;
    public:
    void inputdetails(){
        cout<<"Enter title of the book, Enter author of the book, Enter price of the book";
        cin>>title>>author>>price;
}
   void displaydetails(){
    cout<<"\nTitle of the book is: "<<title<<"\nAuthor of the book is: "<<author<<"\nPrice of the book is: "<<price;
   }
};
int main(){
    Book b1;
    b1.inputdetails();
    b1.displaydetails();
    return 0;
}