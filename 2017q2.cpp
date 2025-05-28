#include <iostream>
using namespace std;
class BaseTime{
    private:
        int hour,minute,second;
    public:
        BaseTime(int hour,int minute,int second){
            this->hour = hour;
            this-> minute= minute;
            this->second = second;
            updateTime();
        }
        BaseTime(){}
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
       
        int getbasehour(){
            return hour;
        }
        int getbaseminute(){
            return minute;
        }
        int getbasesecond(){
            return second;
        }


};

class DerivedTime:public BaseTime{
    private:
        int hour,minute,second;
    public:
        DerivedTime(int hour,int minute,int second,int hour2,int minute2,int second2):
        BaseTime(hour2,minute2,second2){
            this->hour = hour;
            this-> minute= minute;
            this->second = second;
            updateTime();
        }
        DerivedTime(){}
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
        void addTime(){
            hour = hour+getbasehour();
            minute=minute + getbaseminute();
            second = second + getbasesecond();
            updateTime();
        }
    friend class thirdTime;

};

class thirdTime{
    private:
        int hour,minute,second;
    public:
        thirdTime(int hour,int minute,int second){
            this->hour = hour;
            this-> minute= minute;
            this->second = second;
            updateTime();
        }
        thirdTime(){}
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
        void subTime(DerivedTime t1){
            hour = hour-t1.getbasehour();
            minute=minute - t1.getbaseminute();
            second = second - t1.getbasesecond();
            updateTime();
        }


};


int main(){
    DerivedTime t1(1,10,10,2,10,10);    //3:20:20
    thirdTime t2(2,10,10);
    t2.subTime(t1);
    t2.display();
    return 0;
}