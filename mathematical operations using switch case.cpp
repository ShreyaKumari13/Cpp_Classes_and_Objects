//C++ program for various Mathematical Operations using Switch case
#include<iostream>
using namespace std;

class oper{
    int x,y,op;
    public:
        void getdata(){
            cout<<"Enter num1:"<<endl;
            cin>>x;
            cout<<"Enter num2:"<<endl;
            cin>>y;
        }
        void sum(){
            op = x+y;
            cout<<"The sum of the number is "<<op;
        }
        void dif(){
            op = x-y;
            cout<<"The difference of the number is "<<op;
        }
        void mul(){
            op = x*y;
            cout<<"The multiplication of the number is "<<op;
        }
        void div(){
            op = x/y;
            cout<<"The division of the number is "<<op;
        }

};

int main(){
    oper ab;
    ab.getdata();
    int choice;
    while(1){
        printf("\n___MENU___");
        printf("\n1.Sum");
        printf("\n2.Difference");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Exit");
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                ab.sum();
                break;
            case 2:
                ab.dif();
                break;
            case 3:
                ab.mul();
                break;
            case 4:
                ab.div();
                break;        
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }
    return 0;
}