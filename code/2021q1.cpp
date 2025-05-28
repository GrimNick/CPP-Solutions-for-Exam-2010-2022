#include <iostream>
using namespace std;

class complex{
    int real;
    int imag;
    public:
        complex(int x,int y){       //parameterized constructor
            real = x;
            imag = y;
        }
        complex(){          //default constructor
            real=0;
            imag=0;
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

        void operator ++(){
            real = real+1;
            imag = imag+1;
        }
};

int main(){
    complex c1(1,2);
    complex c2(3,4);
    complex c3 = c1+c2; // c1.operator +(c2)
    c3.display();
    cout<<"++ operator used"<<endl;
    ++c3;
    c3.display();
    return 0;
    
}