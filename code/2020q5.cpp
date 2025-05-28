#include <iostream>
#include <math.h>
using namespace std;

class Rectangle{
    float x;
    float y;
    public:
        Rectangle(float a,float b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
};

class Polar{
    int r;
    int a;
    public:
        Polar(int rad,int ang){
            r=rad;
            a=ang;
        }

        operator Rectangle(){
            float x= r*cos(a);
            float y= r*sin(a);
            Rectangle r1(x,y);
            return r1;
        }
};

int main(){
    Polar p1(2,30);
    Rectangle r1 = p1;
    r1.display();
    return 0;
}