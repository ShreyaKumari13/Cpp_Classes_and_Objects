//C++ Program to Show Counter using Constructors//C++ Program to show Constructor & Destructor Example
#include<iostream>
using namespace std;

class counter{
    private:
        int count;
    public:
        counter(){
            cout<<"OYE"<<endl;
            count = 0;
        }
        void inc_count(){
            count++;
        }
        void dec_count(){
            count--;
        }
        void print(){
            cout<<"The count is "<<count<<endl;
        }
};

int main(){
    counter c1;
    cout<<"\nBefore calling Counter Function, Count = ";
    c1.print();
    c1.inc_count();
    cout<<"\nAfter calling Counter Function, Count = ";
    c1.print();
    return 0;
}

//globally that count should take not for singlr object;
