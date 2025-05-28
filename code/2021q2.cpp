#include <iostream>
using namespace std;
class base{
    public:
        virtual void display(){ //virtual function
            cout<<"BASEEEE"<<endl;
        }
};

class derived:public base{
    public:
        void display(){
            cout<<"DERIVEDD"<<endl;
        }
};

int main(){
    base *bptr;
    base b1;
    derived d1;
    cout<<"BASE POINTER POINTED TO BASE"<<endl;
    bptr = &b1;
    bptr->display();
    derived *dptr;
    cout<<"BASE POINTER POINTED TO derived"<<endl;
    bptr = &d1;
    bptr ->display();
    return 0;
}