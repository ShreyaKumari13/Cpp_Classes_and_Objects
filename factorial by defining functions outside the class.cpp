//C++ program to find factorial by defining functions outside the class
#include<iostream>
using namespace std;

class factorial{
    private:
        int n,n1,f=1;
    public:
        void input();
        void calc();
        void display();
};

void factorial :: input(){
    cout<<"Enter the number:";
    cin>>n;
}

void factorial :: calc(){
    n1 = n;
    if(n==0||n==1){
        cout<<"The factorial of the number "<<n<<"is "<< 1<<endl;
    }
    else{
        while(n>0){
            f=f*n;
            n--;
        }
    }
}

void factorial :: display(){
    cout<<"The facotial of the number "<<n1<<" is "<<f;
}

int main(){
    factorial f1;
    f1.input();
    f1.calc();
    f1.display();
    return 0;
}