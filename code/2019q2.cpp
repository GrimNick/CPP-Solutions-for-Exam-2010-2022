#include <iostream>
using namespace std;
class SimpleInt{
    int principal;
    int rate;
    int time;
    float sI;
    public:
        SimpleInt(int principal,int time,int rate=8){
            this->principal=principal;
            this->rate = rate;
            this->time = time;
        }
        void calculate(){
            sI=(principal*time*rate)/100.0;
        }
        void display(){
            calculate();
            cout<<"simple interest is "<<sI<<endl;
        }
};

int main(){
    SimpleInt s1(1000,2);
    s1.display();
    return 0;
}