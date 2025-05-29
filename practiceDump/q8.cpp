/** Write a simple program to overload unary minus operator.
 */
#include <iostream>
using namespace std;
class gilas{
    int number;
    public:
        gilas(int x){
            number = x;
        }
        gilas(){

        }
        void display(){
            cout<<"Number of gilas = "<<number<<endl;
        }
        void operator -(){        // gilas-gilas = gilas
            number = -number;
        }
};
// ,-x;
int main(){
    gilas g1(3);
    -g1;    
    g1.display();            
    return 0;
}