//base b1->derive c1, b1-> derive d1 , c1,d1 ->derive e1. hybrid inheritance shown
#include <iostream>
using namespace std;
class B{
    int b;
    public:
        void display(){
            cout <<b<<endl;
        }
};

class C:virtual public B{
    int c;  //b
    public:
        void display(){
            cout <<c<<endl;
        }
};

class D:virtual public B{
    int d;  //b
    public:
        void display(){
            cout <<d<<endl;
        }
};

class E:public C,public D{
    int e;  
    public:
        void display(){
            cout <<e<<endl;
        }
};