#include <iostream>
#include <string.h>
using namespace std;

class stringer{
    string firstName;
    string SecondName;
    string Name;
    public:
        stringer(){}
        stringer(string firstName,string SecondName){
            this->firstName=firstName;
            this->SecondName=SecondName;
        }
        void concat(){  //strcat(firstName,SecondNAme) char firstName[20], char SecondName[20];
            Name = firstName + SecondName;
        }
        void display(){
            cout<<"Name is "<<Name<<endl;
        }
};

int main(){
    stringer s1("Newton","Shahi");
    s1.concat();
    s1.display();
    return 0;
}