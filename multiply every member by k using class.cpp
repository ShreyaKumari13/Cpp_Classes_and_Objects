//C++ program to multiply every member by k using class
#include<iostream>
using namespace std;

class array{
    public:
        int n;
        void readarray();
        void multiply();
};

void array :: readarray(){
    int a[100];
    cout<<"Enter no.of elements u want:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nEnter [ "<<i+1<<"] element : ";
        cin>>a[i];
    }
}

void array :: multiply(){
    int i,j,a[100],temp[100],k;
    cout<<"\nEnter the no. which u want to multiply : ";
    cin>>k;
    for(i=0;i<n;i++){
        temp[i] = (a[i+1]*k);
    }
    cout<<"\nAfter multiply every member by k = [ "<<k<<" ],Resultant array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\n [ "<<i+1<<" ] element :: "<<temp[i]<<"\n";
    }
}

int main(){
    array mul;
    mul.readarray();
    mul.multiply();
    return 0;
}


