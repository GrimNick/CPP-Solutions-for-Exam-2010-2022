#include <iostream>
using namespace std;

class complex{
    int real;
    int imag;
    public:
        void setVal(int x,int y){
            real = x;
            imag = y;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        complex operator +(complex c1){
            complex ctemp;
            ctemp.real = real + c1.real;
            ctemp.imag= imag + c1.imag;
            return ctemp;
        }
};

int main(){
    complex c1;
    complex c2;
    c1.setVal(1,2);
    c2.setVal(3,4);
    complex c3 = c1+c2; // c1.operator +(c2)
    c3.display();
    return 0;
    
}