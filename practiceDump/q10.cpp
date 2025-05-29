/**
 *   WAp to add two complex numbers. Your program should have 3 objects. Each objects
 * contain 2 attributes that is real and imaginary. Now add each attribute and
 * save it to third object separately using the concept of + operator overloading.
 */

//return type operator -> class name , object object, int int , float float

#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int real,int imag){
            this->real = real;
            this->imag = imag;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        Complex operator +(Complex c1){
            Complex temp(real+c1.real,imag+c1.imag);
            return temp;
        }
};

int main(){
    Complex c1(2,3);
    Complex c2(3,5);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}