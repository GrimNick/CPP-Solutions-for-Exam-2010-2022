//Class to class conversion
//polar into rectangle

#include <iostream>
#include <math.h>
using namespace std;
class Polar{
    int r;
    int a;
    public:
        Polar(int rad,int ang){
            r=rad;
            a=ang;
        }
        int getr(){
            return r;
        }
        int geta(){
            return a;
        }
};

class Rectangle{
    float x,y;
    public:
    Rectangle(Polar p1){
        float r=p1.getr();
        float num=p1.geta();
        cout<<"cos="<<cos(num)<<endl;
        cout<<"sin="<<sin(num)<<endl;
        x= (float)r*cos(num);
        y= (float)r*sin(num);
    }
    void display(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};

int main(){
    Polar p1(2,30);
    Rectangle r1(p1);
    r1.display();
    return 0;
}