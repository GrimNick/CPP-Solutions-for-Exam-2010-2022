#include <iostream>
using namespace std;
template <class t1>
class Num{
    t1 x;
    t1 y;
    t1 sum,prod;
    public:
        Num(t1 x,t1 y){
            this->x=x;
            this->y=y;
        }
        void summ(){
            sum=x+y;
        }
        void prodd(){
            prod=x*y;
        }
        void display(){
            cout<<x<<" + "<<y<<" = "<<sum<<endl;
            cout<<x<<" x "<<y<<" = "<<prod<<endl;
        }
};

int main(){
    Num<int> n1(1,2);
    n1.summ();
    n1.prodd();
    n1.display();

    Num<float> n2(1.2,2.3);
    n2.summ();
    n2.prodd();
    n2.display();
    return 0;
}

//a -> b, a-> c, b->d,c->d.


class a{
    void display(){

    }
}
class a{
    void display();
}
a::display(){
    
}