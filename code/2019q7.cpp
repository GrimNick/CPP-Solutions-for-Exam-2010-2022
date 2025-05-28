#include <iostream>
using namespace std;
class vectorBase{
    private:
        int x;
        int y;
    public:
        vectorBase(int a,int b){
            x=a;
            y=b;
        }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
        
        friend void display(vectorBase b1);
};

class vectorDerived:public vectorBase{
    int xfinal;
    int yfinal;
    public:
        vectorDerived(int x,int y):vectorBase(x,y){

        }
        void add_vector(vectorBase b1,vectorBase b2){
            xfinal=b1.getx()+b2.getx();
            yfinal=b1.gety()+b2.gety();
        }
};
void display(vectorBase b1){
    cout<<"x ="<<b1.x<<endl;
    cout<<"y ="<<b1.y<<endl;
}
int main(){
    vectorDerived v1(2,3);
    display(v1);    //principle of substitutability , vectorderived is subtype of vectorbase
    return 0;
}