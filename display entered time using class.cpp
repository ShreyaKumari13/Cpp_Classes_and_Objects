//C++ program to display Entered Time using class
#include<iostream>
using namespace std;

class time{
    private:
        int hour,min,sec;
    public:
        void input();
        void display();

};

void time :: input(){
    cout<<"Enter hour:";
    cin>>hour;           
    cout<<"Enter min:";
    cin>>min;            
    cout<<"Enter sec:";
    cin>>sec;
}

void time :: display(){
    cout<<hour<<":"<<min<<":"<<sec<<endl;
}

int main(){
    time d1;
    d1.input();
    d1.display();
    return 0;
}