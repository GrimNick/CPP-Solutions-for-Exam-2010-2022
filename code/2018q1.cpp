#include <iostream>
#include <math.h>
using namespace std;
template <class t1>
void roots(t1 a,t1 b,t1 c){  //ax2 + bx+ c =0
    t1 underRoot = b*b - 4*a*c;
    //0, one value, real value
    //>0, two value, both real and different
    //<0 , two value, both imaginary and different
    if(underRoot==0){
        cout<<"root is "<<-b/(2.0*a)<<endl;
    }
    else if(underRoot > 0){
        cout<<"roots are "<<endl;
        cout<<(-b+sqrt(underRoot))/(2*a)<<endl;
        cout<<(-b-sqrt(underRoot))/(2*a)<<endl;
    }
    else {
        cout<<"imaginary roots are "<<endl;
        cout<<(-b)/(2.0*a)<<"+"<<sqrt(underRoot*(-1))/(2*a)<<"i"<<endl;
        cout<<(-b)/(2.0*a)<<"-"<<sqrt(underRoot*(-1))/(2*a)<<"i"<<endl;
    }

}

int main(){
    roots(100,2,1);
    return 0;
}
