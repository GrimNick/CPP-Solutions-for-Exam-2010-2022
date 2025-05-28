#include <iostream>
using namespace std;
template <class t1>
class A{
    t1 a;
    t1 b;
    public:
        A(t1 x,t1 y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"sum is "<<a+b<<endl;
        }
};

int main(){
    A<int> a1(1,2);
    a1.display();
    return 0;
}