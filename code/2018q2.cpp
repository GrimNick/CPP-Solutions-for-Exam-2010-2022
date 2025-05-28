#include <iostream>
#include <math.h>
using namespace std;
class Triangle{
    private:
        int a,b,c;
        float area;
    public:
        Triangle(){
            a=0;
            b=0;
            c=0;
        }
        Triangle(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }
        void areacalc(){
            float s=(a+b+c)/2.0;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
        }
        void display(){
            cout<<"Area of triangle is : "<<area<<endl;
        }
};

int main(){
    Triangle t1(3,4,5);
    t1.areacalc();
    t1.display();
    return 0;
}