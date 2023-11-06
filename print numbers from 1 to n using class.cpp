//C++ Program to Print Numbers From 1 to n using class
#include<iostream>
using namespace std;

class numbers{
    int n;
    public:
        void getdata(){
            cout<<"Enter the number:";
            cin>>n;
        }
        void print();

};

void numbers :: print(){
            for(int i=1;i<=n;i++){
                cout<<i<<endl;
            }
        }

int main(){
    numbers hu;
    hu.getdata();
    hu.print();
    return 0;
}