//C++ Program to show Constructor & Destructor Example
#include<iostream>
using namespace std;

class add{
    public:
        int one;
        add(){
            cout<<"Default constuctor!!!"<<endl;
        }
        add(int two){
            cout<<"Constuctor is been called!!!"<<endl;
            one = two;
        }
        ~add(){
            cout<<"Constructor is been destructed!!!"<<endl;
        }
        void sum(){
            cout<<"The sum of the number is "<<one+one<<endl;
        }
};

int main(){
    add s;
    add sd(4);
    cout<<"Enter the number :"<<endl;
    cin>>s.one;
    s.sum();
    sd.sum();
    return 0;
}