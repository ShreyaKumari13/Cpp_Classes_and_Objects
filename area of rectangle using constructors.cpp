//C++ Program to determine the Area of Rectangle using constructors
#include<iostream>
using namespace std;

class area{
    private:
        int length;
        int breadth;
    public:
        area(int,int);//constructor
        int areaofrect(){
            return (length*breadth);
        }
        int length1(){
            return length;
        }
        int breadth1(){
            return breadth;
        }
};

area :: area(int x,int y){
    length = x;
    breadth = y;
}

int main(){
    area myrec(2,2);
    cout<<"The length of rectangle :: "<<myrec.length1()<<endl;
    cout<<"The breadth of rectangle :: "<<myrec.breadth1()<<endl;
    cout<<"The area of rectangle is :: "<<myrec.areaofrect()<<endl;
    return 0;
}