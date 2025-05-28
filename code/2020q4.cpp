#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A(){
            a=0;
        }
        A(int x){
            a=x;
        }
        A(A &a1){
            a=a1.a;
        }
        void display(){
            cout<<"A is "<<a<<endl;
        }
};

int main(){
    A a1(2);
    A a2(a1);
    a2.display();
    return 0;
}