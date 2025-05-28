#include <iostream>
using namespace std;
class Base{
    public:
     int a;
};
class Derived:public Base{
    int b;
};

int main(){
    Base *bptr;
    Derived d1;
    bptr=&d1;
    return 0;
    //yes we can derive a pointer to base
}