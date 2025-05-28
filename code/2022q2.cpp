#include <iostream>
//friend function
//bridge between classes
using namespace std;
class class2;   //forward declaration
class class1{
    int a;
    public:
        void setVal(int x){
            a=x;
        }
    friend void max(class1 c1,class2 c2);
};

class class2{
    int a;
    public:
        void setVal(int x){
            a=x;
        }
    friend void max(class1 c1,class2 c2);
};

void max(class1 c1,class2 c2){
    if(c1.a>c2.a) cout<<"class1 is greater xa"<<endl;
    else if(c2.a>c1.a) cout<<"Class2 is greater"<<endl;
    else cout<<"barabar"<<endl;
}

int main(){
    class1 c1;
    class2 c2;
    c1.setVal(1);
    c2.setVal(2);
    max(c1,c2);
    return 0;
}


