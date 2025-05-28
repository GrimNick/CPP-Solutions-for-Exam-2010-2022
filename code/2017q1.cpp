#include <iostream>
using namespace std;
class Time{
    private:
        int hour,minute,second;
    public:
        Time(int hour,int minute,int second){
            this->hour = hour;
            this-> minute= minute;
            this->second = second;
            updateTime();
        }
        Time(){}
        void updateTime(){
            while(second>=60){
                minute++;
                second=second-60;
            }
            while(minute>=60){
                hour++;
                minute=minute-60;
            }
        }
        void display(){
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }
        void addTime(Time t1,Time t2){
            hour = t1.hour+t2.hour;
            minute=t1.minute + t2.minute;
            second = t1.second + t2.second;
            updateTime();
        }


};


int main(){
    Time t1(2,80,80);
    Time t2(3,40,40);
    Time t3;
    t3.addTime(t1,t2);
    t3.display();
    return 0;
}