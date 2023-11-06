//C++ Program to find Sum of odd numbers between 1 and 100 using class
#include<iostream>
using namespace std;

class square{
    int sum=0;
    public:
        void calc();
        void display();
};

void square :: calc(){
    for(int i=1;i<100;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
}

void square :: display(){
    cout<<"The sum of odd numbers between 1 and 100 is :"<<sum<<endl;
}

int main(){
    square s;
    s.calc();
    s.display();
    return 0;
}