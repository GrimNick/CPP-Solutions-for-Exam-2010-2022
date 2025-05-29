/**7.
 * Create a class named person with the data members name,age, address,citizenship no.,
 * Write a constructor to initialize the value of the person. Assign the citizenship
 * no if the age of person is greater than 16, else assign 0. Also create the function
 * called to display the value.
 */

#include <iostream>
using namespace std;

class person{
    private:
        string name;
        int age;
        string address;
        int citno;
    public:
        person(string name,int age, string address){
            this-> name= name;
            this->age = age;
            this ->address = address;
            if(age>16){
                cout<<"Enter cit no: ";
                cin>>citno; 
            }else{
                citno=0;
            }
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"citizen ship no: "<<citno<<endl;
        }
};

int main(){
    person p1("Ramchandra",22,"Swayumbu");
    p1.display();
    return 0;
}