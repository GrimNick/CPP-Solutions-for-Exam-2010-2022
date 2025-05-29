#include <iostream>
using namespace std;
class alpha{
    int a;
    public:
        alpha(int x){
            a=x;
        }
        void showa(){
            cout<<"a="<<a<<endl;
        }
};

class beta:public alpha{
    private:
        int b,c;
    public:
        beta(int x,int y,int z):alpha(x){
            b=y;
            c=z;
        }
        void showb(){
            cout<<"b ="<<b<<endl;
            cout<<"c ="<<c<<endl;
        }
};

class gamma:public beta{
    private:
     int d,e;
    public:
        gamma(int x,int y,int z, int m,int n):beta(x,y,z){
            d= m;
            e= n;
        }
        void showg(){
            cout<<"d="<<d<<endl;
            cout<<"e="<<e<<endl;
        }
};

int main(){
    gamma g1(1,2,3,4,5);
    g1.showa();
    g1.showb();
    g1.showg();
    return 0;
}