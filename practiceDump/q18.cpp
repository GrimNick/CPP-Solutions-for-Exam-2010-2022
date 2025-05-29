// 1 meter = 3.28 feet
//Basic to class
#include <iostream>
using namespace std;
class Height{
    private:
        int feet;
        float inch;
    public:
        Height(int meter){
            float feettemp = meter  * 3.28;
            //7.7
            feet= (int)feettemp;
            //feet=7 
            inch = (feettemp-feet) * 12;
            while(inch>=12){
                feet++;
                inch=inch-12;
            }
        }
        void display(){
            cout<<"feet = "<<feet<<endl;
            cout<<"inch = "<<inch<<endl;
        }
};

int main(){
    int x=12;
    Height h1(x);
    h1.display();
    return 0;
}
