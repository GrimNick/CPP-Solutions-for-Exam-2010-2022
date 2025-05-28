#include <iostream>
using namespace std;

class alpha{
    private:
        int a;
        static int count;
    public:
        void setVal(int x){
            a=x;
        }
        static void counter(){
            count++;
        }
        static void show(){
            cout<<"count is "<<count<<endl;
        }
};

int alpha::count;

int main(){
    alpha a1;
    a1.setVal(1);
    a1.counter();
    a1.show();
    alpha a2;
    a2.setVal(2);
    a2.counter();
    a2.show();

    alpha a3;
    a3.counter();
    alpha a4;
    a4.counter();
    a4.show();

    return 0;
}