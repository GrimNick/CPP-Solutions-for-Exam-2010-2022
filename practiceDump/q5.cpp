/** 5. Create a class named Employee with data members code, name, address, salary.
 * Create a constructor to initialize the member of class. Also create
 * another constructor so that we can create an object from another object.
 * Define member function to display the member function of the class.
 */
#include <iostream>
using namespace std;

class Employee{
    private:
        int code;
        string name;
        string address;
        int salary;
    public:
        Employee(){
    
        }
        Employee(int code,string name,string address,int salary){
            this->code = code;
            this->name = name;
            this->address = address;
            this->salary = salary;
        }

        Employee(Employee &e1){
            code = e1.code;
            name = e1.name;
            address = e1.address;
            salary = e1.salary;
        }
        void display(){
            cout<<"Code :"<<code<<endl;
            cout<<"Name :"<<name<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

int main(){
    Employee e1(1,"Newton","Evereest",2);
    Employee e2(e1);
    e2.display();
    return 0;

}