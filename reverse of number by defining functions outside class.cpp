//C++ program to find reverse of number by defining functions outside class
#include<iostream>
using namespace std;

class reverse{
    private:
        int rev=0,num,digit;
    public:
        void input();
        void calc();
        void display();
};

void reverse :: input(){
    cout<<"Enter the number "<<endl;
    cin>>num;
}

void reverse :: calc(){
    while(num>0){
        digit = num%10;
        rev = (rev*10)+digit;
        num = num/10;
    }
}

void reverse :: display(){
    cout<<"The reverse of the number is "<<rev<<endl;
}

int main(){
    reverse r1;
    r1.input();
    r1.calc();
    r1.display();
    return 0;
}