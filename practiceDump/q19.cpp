// 1 meter = 3.28 feet
// 1 feet = 0.3048 meter
//class to basic(int,float,char)
#include <iostream>
using namespace std;
class Height{
    private:
        int feet;
        int inch;
    public:
        Height(int feet,int inch){
            this->feet=feet;
            this->inch = inch;

            while(inch>=12){
                feet++;
                inch=inch-12;
            }
        }
        operator float(){
            float temp;
            temp = (float)feet + (float)inch/12.0;
            temp = temp*0.3048;
            return temp;
        } 
};

int main(){
    Height h1(3,12);
    float meter = h1;
    cout<<"Meter is "<<meter<<endl;
    return 0;
}
