//C++ program to Swap two numbers using class
#include<iostream>
using namespace std;

class swap1{
    private:
        int x,y;
    public:
        void input(int a,int b){
            x = a;
            y = b;           
        }
        void display(){
            cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
        }
        void refer(swap1 &,swap1 &);
};

void swap1 :: refer(swap1 &x,swap1 &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    swap1 b;
    b.input(4,5);
    b.refer(x,y);
    b.display();
    return 0;
}