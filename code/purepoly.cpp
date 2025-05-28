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
        string append(Base* ptr){
            return ptr->toString();
        }
};

int main(){
    Base *bptr = new Derived(); //polymorphic variable
    StringBuffer buffer;
    cout<<buffer.append(bptr)<<endl;
    return 0;
}