#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A(int x){
            a=x;
        }
        void display(){
            cout<<a<<endl;
        }
};
class B:public A{
    int b;
    public:
        B(int y,int x):A(x){
                b=y;
        }
        void display(){
            cout<<b<<endl;
            A::display();
        }
};

int main(){
    B b1(2,3);
    b1.display();
    return 0;
}

