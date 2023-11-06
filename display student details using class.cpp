//C++ program to display Student details using class
#include<iostream>
using namespace std;

class Student{
    char name[10],branch[10];
    int regd,sem;
    public:
        void setdata(void);
        void displaydata(void);
};

void Student :: setdata(void){
    cout<<"Enter student's name : "<<endl;
    cin>>name;
    cout<<"Enter branch : "<<endl;
    cin>>branch;
    cout<<"Enter registration number : "<<endl;
    cin>>regd;
    cout<<"Enter sem : "<<endl;
    cin>>sem;
}

void Student :: displaydata(void){
    cout<<"Student name is:"<<name<<endl;
    cout<<"Student branch is:"<<branch<<endl;
    cout<<"Student regd number is:"<<regd<<endl;
    cout<<"Student sem is:"<<sem<<endl;
}

int main(){
    Student dukaan;
    dukaan.setdata();
    dukaan.displaydata();
    return 0;
}