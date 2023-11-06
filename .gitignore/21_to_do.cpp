//C++ Program to Perform Complex Operations using Overloading
#include<iostream>
using namespace std;

class complex{
    private:
        double a;
        double b;
    public:
        complex(double=1.0,double=1.0);//constuctor
        void set(double,double);
        void print();
        complex operator1(complex);
        complex operator2();
        complex operator3(int);
};

complex::complex(double r,double i){
    set(r,i);
}

void complex :: print(){
    if(b<0){
        cout<<"\n"<<a<<""<<b<<"i"<<endl;
    }
    else{
        cout<<"\n"<<a<<"+"<<b<<"i"<<endl;
    }
}

void complex :: set(double r,double i){
    a = r;
    b = i;
}

complex complex :: operator1(complex r){
    complex tmp;
    tmp.a = a + r.a;
    tmp.b = b + r.b;
    return tmp;
}

complex complex :: operator3(int x){
    a++;
    b++;
    return *this;
}

complex complex::operator2(){
    a++;
    b++;
    return *this;
}

int main(){
    complex A(3,4),B(5,-6);
    A.print();
    B.print();
    complex C;
    C = A+B;
    C.print();
    return 0;
}

















