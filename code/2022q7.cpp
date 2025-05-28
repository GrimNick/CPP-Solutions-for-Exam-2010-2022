#include <iostream>     //DRY
using namespace std;
template <class t1>
void product(t1 a,t1 b){
    t1 prod= a*b;
    cout<<"product is :"<<prod<<endl;
}

int main(){
    float a=2.4;
    float b=3.6;
    product(a,b);
}