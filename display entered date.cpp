//C++ Program to display entered Date
#include<iostream>
using namespace std;

class date{
    private:
        int date,month,year;
    public:
        void input();
        void display();

};

void date :: input(){
    cout<<"Enter date:";
    cin>>date;           
    cout<<"Enter month:";
    cin>>month;            
    cout<<"Enter year:";
    cin>>year;
}

void date :: display(){
    cout<<date<<":"<<month<<":"<<year<<endl;
}

int main(){
    date d1;
    d1.input();
    d1.display();
    return 0;
}