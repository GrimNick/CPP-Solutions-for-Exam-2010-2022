//base display()--> derived display()

#include <iostream>
using namespace std;
class alpha{
    public:
        void display(){
            cout<<"ALPHA"<<endl;
        }
};

class beta:public alpha{
    public:
        void display(){ //function overriding.
            cout<<"BETA"<<endl;
            //b1.alpha::display();
        }
        //void display -> alpha
};

int main(){
    beta b1;
    b1.alpha::display();
    b1.beta::display();     //solution
    return 0;
}


