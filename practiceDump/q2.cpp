/** 2. Create classes called class 1 and class 2 with each of having one private member
 * add member function to set value to each class. Add one more functions max
 * that is friendly to both classes. Max function should compare two private members
 * of two classes and show maximum among them.
*/


#include <iostream>
using namespace std;            //class 1-> setval, num priv, class 2-> same // max(class1,class 2)
class B;
class A{
    private:
        int num;
    public:
        A(){}
        void setval(int x){
            num= x;
        }
        friend void maxx(A a1,B b1);
};

class B{
    private:
        int num;
    public:
        B(){}
        void setval(int x){
            num= x;
        }
        friend void maxx(A a1,B b1);
};

void maxx(A a1,B b1){
    if(a1.num>b1.num){
        cout<<a1.num<<" is maximum which is of class A"<<endl;
    }
    else if(a1.num<b1.num){
        cout<<b1.num<<" is maximum which is of class B"<<endl;
    }
    else{
        cout<<"They are barabar"<<endl;
    }
}

int main(){
    A a1;
    B b1;
    a1.setval(5);
    b1.setval(3);
    maxx(a1,b1);
    return 0;
}