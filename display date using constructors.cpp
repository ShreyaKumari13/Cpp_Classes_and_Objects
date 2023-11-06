//C++ Program to Display Date using Constructors
#include<iostream>
using namespace std;

class dates{
    private:
        int dd,mm,yy;
    public:
        dates(){
            cout<<"pro";
        };
        dates(int a,int b,int c){
            dd = a;
            mm = b;
            yy = c;
        };
        void printdate(){
            cout<<dd<<":"<<mm<<":"<<yy<<endl;
        }

};

int main(){
    dates d1(12,34,5645);
    d1.printdate();
    return 0;
}