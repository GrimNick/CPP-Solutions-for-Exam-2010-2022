#include <iostream>
using namespace std;

class Base{
    public:
        virtual string toString(){
            return "parent";
        }
};

class Derived:public Base{
    public:
        string toString(){
            return "child";
        }
};

class StringBuffer{
    public:
        string appen(Base *ptr){
            return ptr->toString();
        }
};

int main(){
    Base *bptr = new Derived();
    StringBuffer buffer;
    cout<<buffer.appen(bptr)<<endl;;
    return 0; 
}