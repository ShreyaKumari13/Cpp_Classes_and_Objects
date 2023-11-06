//C++ program to find greatest b/w 3 nos. by defining the functions inside class
#include<iostream>
using namespace std;

class greatest{
    private:
        int x,y,z;
    public:
        void input(){
            cout<<"Enter x:";
            cin>>x;           
            cout<<"Enter y:";
            cin>>y;            
            cout<<"Enter z:";
            cin>>z;
        }
        void greatestofall(){
            if(x>y && x>z){
                cout<<"x is greatest of all";
            }
            else if(y>x && y>z){
                cout<<"y is greatest of all";
            }
            else{
                cout<<"z is greatest of all";
            }
        }
};



int main(){
    greatest g1;
    g1.input();
    g1.greatestofall();
    return 0;
}