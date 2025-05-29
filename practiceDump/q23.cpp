#include <iostream>
#include <math.h>
using namespace std;
// ax2+bx+c , -b+- sqrt(b2 - 4ac)/2a
template <class t1>
void roots(t1 a,t1 b, t1 c ){
    float underRoot=b*b-4*a*c;
    if(underRoot==0){
        cout<<"The root is :"<<endl;
        cout<<(-b)/2.0*a<<endl;
    }else if(underRoot<0){
        cout<<"The roots are :"<<endl;
        cout<<(-b)/(2.0*a)<<"+"<<sqrt(-underRoot)/(2.0*a)<<"i"<<endl;
        cout<<(-b)/(2.0*a)<<"-"<<sqrt(-underRoot)/(2.0*a)<<"i"<<endl;
    }else{
        cout<<"The roots are :"<<endl;
        cout<<(-b+sqrt(underRoot))/(2.0*a)<<endl;
        cout<<(-b-sqrt(underRoot))/(2.0*a)<<endl;
    }
}

int main(){
    roots(1,2,1);
    
    return 0;
}