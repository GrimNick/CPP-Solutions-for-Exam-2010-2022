//Class to class conversion
//polar into rectangle
//operator overload garera type conversion, overload garne lai tala

#include <iostream>
#include <math.h>
using namespace std;

class Rectangle{
    float x,y;
    public:
    Rectangle(){}
    Rectangle(float x,float y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }

};

class Polar{
    float r;
    float a;
    public:
        Polar(){

        }
        Polar(float rad,float ang){
            r=rad;
            a=ang;
        }
        int getr(){
            return r;
        }
        int geta(){
            return a;
        }
        void display(){
            cout<<"Radius = "<<r<<endl;
            cout<<"Angle = "<<a<<endl;
        }
        operator Rectangle(){
            float x=r*cos(a);
            float y=r*sin(a);
            Rectangle r1(x,y);
            return r1;
        }
};



int main(){
    /**Rectangle r1(4,3);
    Polar p1=r1;
    p1.display();
    */
   Polar p1(2,30);
   Rectangle r1=p1;
   r1.display();

    return 0;
}