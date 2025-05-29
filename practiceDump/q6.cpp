/** Create a class  Time constructor having hour minute and second as an argument
 * which takes two time data from the user. The add functions takes two class objects
 * as an argument. Add them respectively and display the result.
 */

#include <iostream>
using namespace std;
//Time -> time cosnt hour minute second -> update -> display -> friend function
//time t2 bhitra -> adder(time t1) , t2.add(t1);

class Time{
    private:
        int hour,minute,second;
    public:
        Time(int hour,int minute,int second){
            this-> hour = hour; 
            this->minute = minute;
            this->second = second;
            updateTime();
        }
        void updateTime(){
            while(second>=60){
                minute++;
                second= second - 60;
            }
            while(minute >=60){
                hour++;
                minute = minute -60;
            }
        }
        void display(){
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }
        friend void adder(Time t1,Time t2);
        
};

void adder(Time t1,Time t2){
    int hour;
    int second;
    int minute;
    hour = t1.hour+t2.hour;
    minute = t1.minute + t2.minute;
    second = t1.second + t2.second;
    while(second>=60){
                minute++;
                second= second - 60;
            }
            while(minute >=60){
                hour++;
                minute = minute -60;
            }
    cout<<"Added time is:"<<endl;
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main(){
    Time t1(1,20,30);
    Time t2(2,40,30);
    t1.display();
    t2.display();
    adder(t1,t2);
    return 0;
}