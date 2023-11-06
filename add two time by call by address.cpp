//C++ program to add two time by Call by address
#include<iostream>
using namespace std;

class address{
    private:
        int hh,mm,sec;
    public:
        void input(){
            cout<<"Enter hour:";
            cin>>hh;           
            cout<<"Enter minutes:";
            cin>>mm;            
            cout<<"Enter seconds:";
            cin>>sec;
        }
        void display(){
            cout<<"The time is ["<<hh<<": "<<mm<<": "<<sec<<"]"<<endl;
        }
        void sum(address *r1,address *r2);
};

void address :: sum(address *r1,address *r2){
    sec = r1->sec+r2->sec;
    mm = sec/60;
    sec = sec%60;
    mm = mm+r1->mm+r2->mm;
    hh=mm/60;
    mm=mm%60;
    hh=hh+r1->hh+r2->hh;
}

int main(){
    address r1,r2,r3;
    cout<<"Enter 1st time details"<<endl;
    r1.input();
    cout<<"Enter 2nd time details"<<endl;
    r2.input();
    cout<<"The 1st time entered is:"<<endl;
    r1.display();
    cout<<"The 2nd time entered is:"<<endl;
    r2.display();
    r3.sum(&r1,&r2);
    cout<<"The sum of two times is:"<<endl;
    r3.display();

    return 0;
}