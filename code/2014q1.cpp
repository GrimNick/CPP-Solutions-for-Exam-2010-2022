#include <iostream>
using namespace std;

class Fibo{
    int a;
    int b;
    int c;
    public:
        Fibo(int x){
            a=-1;
            b=1;
            c=a+b;
        }
        void display(){
            cout<<c<<",";
        }
        void operator ++(){
            //0,1,1,2,3,5,8,13..
            //b,ac,
            a=b;
            b=c;
           c=a+b;

        }

        
};

int main(){
    Fibo f1=1;
    int i;
    for(i=1;i<=10;i++){
        ++f1;
        f1.display();
    }
}