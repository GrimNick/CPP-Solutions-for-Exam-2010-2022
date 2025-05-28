#include <iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"A"<<endl;
    }
};
class B{
    public:
    void display(){
        cout<<"B"<<endl;
    }
};

class D:public A,public B{
    public:
        /** void display(){     //function overriding
            A::display();
            B::display();
        }*/
};

int main(){
    D d1;
    d1.A::display();
    d1.B::display();
    return 0;
}