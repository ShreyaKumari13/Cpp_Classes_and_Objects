//C++ program to Display Student Details using constructor and destructor
#include<iostream>
using namespace std;

class student{
    private:
        char name[20];
        int roll;
    public:
    student(){
        cout<<"Called"<<endl;
    }
    ~student(){
        cout<<"Destructed"<<endl;
    }
    void getdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll no:";
        cin>>roll;
    }
    void printdata(){
        cout<<"Student Name:"<<name<<endl;
        cout<<"Student roll no:"<<roll<<endl;
    }

};

int main(){
    student s,f;
    s.getdata();
    f.getdata();
    s.printdata();
    f.printdata();
    return 0;
}
