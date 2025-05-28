#include <iostream>
using namespace std;
class Person{
    string name;
    int age;
    public:
        Person(string name,int age){
            this->name = name;
            this->age = age;
        }
        void display(){
            cout<<"Person name:"<<name<<endl;
            cout<<"Person age:"<<age<<endl;
        }
};

class Student:public Person{
    string level;
    public:
        Student(string name,int age,string level):Person(name,age){
            this->level=level;
        }
        void display(){
            Person::display();
            cout<<"LEVEL is "<<level<<endl;
        }
};

class Employee:public Person{
    string post;
    public:
        Employee(string name,int age,string post):Person(name,age){
            this->post=post;
        }
        void display(){
            Person::display();
            cout<<"Post is "<<post<<endl;
        }
};

int main(){
    Student s1("Newton",40,"GRandmaster");
    s1.display();
    Employee e1("Baja",22,"khaja");
    e1.display();
    return 0;
}