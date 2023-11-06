//C++ program to find square of float and integer using inline function
#include<iostream>
using namespace std;

class square{
    private:
        int n,r;
        float n1,r1;
    public:
        void input();
        void calc();
        void display();
};

inline void square :: input(){
    cout<<"Enter an integer:";
    cin>>n;
    cout<<"Enter a float number:";
    cin>>n1;
}

inline void square :: calc(){
    r = n*n;
    r1 = n1*n1;
}

inline void square :: display(){
    cout<<"Square of integer:"<<r<<endl;
    cout<<"Square of float:"<<r1<<endl;
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