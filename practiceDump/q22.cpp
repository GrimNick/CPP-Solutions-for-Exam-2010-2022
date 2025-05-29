#include <iostream>
using namespace std;
template <class t1>
void swapp(t1 &a,t1 &b){
    t1 temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=1;
    int y=2;
    swapp(x,y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}