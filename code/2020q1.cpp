#include <iostream>     //DRY
using namespace std;
template <class t1>
void swapp(t1 &a,t1 &b){
    t1 temp = a;
    a= b;
    b= temp;
}

int main(){
    float a=3.4;
    float b=2.6;
    swapp(a,b);
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

}