#include <iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Constructor of base"<<endl;
        }
        virtual ~Base(){
            cout<<"Destructor of base"<<endl;
        }
};
class Derived:public Base{
    public:
        Derived(){
            cout<<"Constructor of derived"<<endl;
        }
        ~Derived(){
            cout<<"Destructor of derived"<<endl;
        }
};

int main(){
    Base *bptr = new Derived();
    delete bptr;
    return 0;
}