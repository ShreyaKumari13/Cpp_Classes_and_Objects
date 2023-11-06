//C++ program to find how many times function called by objects
#include<iostream>
using namespace std;

class square{
    private:
        int n,r;
        float n1,r1;
        static int b;
    public:
        void input();
        void calc();
        void display();
};

int square :: b=0;

void square :: input(){
    cout<<"Enter an integer:";
    cin>>n;
    cout<<"Enter a float number:";
    cin>>n1;
    b++;
}

void square :: calc(){
    r = n*n;
    r1 = n1*n1;
    b++;
}

void square :: display(){
    cout<<"Square of integer:"<<r<<endl;
    cout<<"Square of float:"<<r1<<endl;
    cout<<"Function is called "<<b<<" times by the object"<<endl;
}

int main(){
    square s,s2;
    s.input();
    s.calc();
    s.display();
    s2.input();
    s2.calc();
    s2.display();
    return 0;
}