#include <iostream>
using namespace std;
class B;
class C;
class A{
    int a;
    public:
        A(int x){
            a=x;
        }
        friend void max(A a1,B b1,C c1,int x);
};
class B{
    int a;
    public:
        B(int x){
            a=x;
        }
         friend void max(A a1,B b1,C c1,int x);
};

class C{
    int a;
    public:
        
        C(int x){
            a=x;
        }
         friend void max(A a1,B b1,C c1,int x);
};

void max(A a1,B b1,C c1,int x){
    int a[4];
    a[0]=a1.a;
    a[1]=b1.a;
    a[2]=c1.a;
    a[3]=x;
    int max= a[0];
    for(int i =0;i<4;i++){
        if(max<a[i]) max=a[i];
    }

    cout<<"Max number is "<<max<<endl;

}

int main(){
    A a1(2);
    B b1(3);
    C c1(4);
    int x=5;
    max(a1,b1,c1,x);
    return 0;
}