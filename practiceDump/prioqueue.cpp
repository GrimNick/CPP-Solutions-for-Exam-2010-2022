#include <iostream>
#include <queue>
using namespace std;
/**class Median{
    public:
        enterNum(int num)
};
*/
int main(){
    priority_queue<int> firsthalf;
    firsthalf.push(2);
    firsthalf.push(5);
    firsthalf.push(3);
    cout<<"top is "<<firsthalf.top()<<endl;
    return 0;
}