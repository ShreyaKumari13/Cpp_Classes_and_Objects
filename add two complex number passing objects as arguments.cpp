//C++ program to add two complex number passing objects as arguments
#include<iostream>
using namespace std;

class complex{
    private:
        int real,imag;
    public:
        void getdata(){
            cout<<"Enter num1"<<endl;
            cin>>real;
            cout<<"Enter num2"<<endl;
            cin>>imag;
        }
        void disp(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        void sum(complex,complex);
};

void complex :: sum(complex s1,complex s2){
    real = s1.real+s2.real;
    imag = s1.imag+s2.imag;
}

int main(){
    complex s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.sum(s1,s2);
    s3.disp();
    return 0;
}