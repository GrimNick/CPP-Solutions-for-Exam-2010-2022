#include <iostream>
using namespace std;

class Numbers{
    int a;
    public:
        void setVal(int x){
            a=x;
        }
        Numbers operator *(Numbers n1){
            Numbers temp;
            temp.a=a*n1.a;
            return temp;
        } 
        void display(){
            cout<<"number is "<<a<<endl;
        }
};

int main(){
    Numbers n1,n2;
    n1.setVal(1);
    n2.setVal(2);
    Numbers n3 = n1*n2; //basic data type -> user defined data type
    n3.display();
    return 0;
}