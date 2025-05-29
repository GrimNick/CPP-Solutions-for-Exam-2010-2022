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

class beta{
    private:
        int b,c;
    public:
        beta(int y,int z){
            b=y;
            c=z;
        }
        void showb(){
            cout<<"b ="<<b<<endl;
            cout<<"c ="<<c<<endl;
        }
};

class gamma:public beta,public alpha{
    private:
     int d,e;
    public:
        gamma(int x,int y,int z, int m,int n):beta(y,z),alpha(x){
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