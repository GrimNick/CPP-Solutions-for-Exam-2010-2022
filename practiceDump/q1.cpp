// 1. WAP to find sum of two complex numbers function call by one object passing as 
//function argument and return third object adding two objects.

#include <iostream>
using namespace std;
class Complex{
    private:    
        int real;
        int imag;
    public:
        Complex(){}
        Complex(int x,int y){
            real = x;
            imag = y;
        }
        Complex add(Complex c1){        //c3 = c1.add(c2)
            Complex temp;
            temp.real = real + c1.real;
            temp.imag = imag + c1.imag;
            return temp;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};

int main(){
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3 = c1.add(c2);
    c3.display();
    return 0;
}