/** Add two complex numbers using dynamic constructor*/

#include <iostream>
using namespace std;
class Complex{
    private:
        int *real;
        int *imag;
    public:
        Complex(int x,int y){
            real = new int;
            *real = x;
            //real = new int{x};
            imag = new int;
            *imag = y;
        }

        Complex(Complex &c1,Complex &c2){
            int x1 = *(c1.real);
            int x2 = *(c2.real);
            int y1 = *(c1.imag);
            int y2 = *(c2.imag);
            real = new int{x1+x2};
            imag = new int{y1+y2};
        }

        void display(){
            cout<<(*real)<<"+"<<(*imag)<<"i"<<endl;
        }

        ~Complex(){
            delete real;
            delete imag;
        }
};

int main(){
    Complex c1(1,2);
    Complex c2(2,3);
    Complex c3(c1,c2);
    c3.display();
    return 0;
}