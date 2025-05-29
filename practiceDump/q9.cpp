/** create fibonacci series by using ++ operator overloading */
// class create -> unary operator -> 0,1,1,2,3,5,

#include <iostream>
using namespace std;

class fibo{
    int a;
    int b;
    int c;
    public:
        fibo(){
            a=-1;
            b=1;
            c=a+b;
        }
        void operator ++(){
            a=b;
            b=c;
            c= a+b;
        }
        void display(){
            cout<<c<<",";
        }
};

int main(){
    fibo f1;
    int n;
    cout<<"How many fibonacci numbers?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        f1.display();
        ++f1;
    }
    return 0;
}