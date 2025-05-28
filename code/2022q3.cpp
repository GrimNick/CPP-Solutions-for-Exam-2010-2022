#include <iostream>
using namespace std;
class sagar{
    private:
        int a;  //data member
    public:
        sagar(){    //default constructor
            a=0;
        }
        sagar(int x){    //parameterized constructor
            a=x;
        }
        sagar(sagar &s1){    //copy constructor
            a=s1.a;
        }
    
};

