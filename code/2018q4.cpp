#include <iostream>
using namespace std;
class Height{
    float feet;
    int inch;
    public:
        Height(float feet,int inch){
            this->feet=feet;
            this->inch= inch;
            updateHeight();
        }
        void updateHeight(){
            while(inch>=12){
                feet++;
                inch=inch-12;
            }
        }

        operator float(){
            float meter;
            meter = feet/3.28084 + ((inch/12.0)/3.28084);
            return meter;
        }

};

int main(){
    Height h1(3,13);
    float meter = h1;
    cout<<"METER is "<<meter <<endl;
    return 0;
}