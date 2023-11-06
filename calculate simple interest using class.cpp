//C++ Program To Calculate Simple Interest using class
#include<iostream>
using namespace std;

class bank{
    private:
        float p,r,t,si,amount;
    public:
        void getdata(){
            cout<<"Enter the principal amount:";
            cin>>p;
            cout<<"Enter the rate:";
            cin>>r;
            cout<<"Enter the time:";
            cin>>t;
            si = (p*r*t)/100;
            amount = si + p;
        }
        void show(){
            cout<<"Entered details are......"<<endl;
            cout<<"Principal amount is :"<<p<<endl;
            cout<<"Rate is :"<<r<<endl;
            cout<<"Time is :"<<t<<endl;
            cout<<"Simple interest is :"<<si<<endl;
            cout<<"Total amount is :"<<amount<<endl;
        }
};

int main(){
    bank s1;
    s1.getdata();
    s1.show();
    return 0;
}
