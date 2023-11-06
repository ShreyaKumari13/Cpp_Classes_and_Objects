//C++ program to find Largest among 2 numbers using class
#include<iostream>
using namespace std;

class greatest{
    private:
        int x,y;
    public:
        void input(){
            cout<<"Enter x:";
            cin>>x;           
            cout<<"Enter y:";
            cin>>y;            
        }
        void greatestofall(){
            if(x>y){
                cout<<"x is greatest";
            }
            else{
                cout<<"y is greatest";
            }
        }
};



int main(){
    greatest g1;
    g1.input();
    g1.greatestofall();
    return 0;
}