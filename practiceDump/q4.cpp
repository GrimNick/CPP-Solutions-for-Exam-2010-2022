/** 4. WAp to input n number of students and then display using the concept of
 * multiple inheritance
 */

#include <iostream>
using namespace std;

//a  -> b    , a->b a->c , b->a c->a, 

class Human{
    protected:
        string name;
        int age;
    public:
        void show(){
            cout<<"Name of person: "<<name<<endl;
            cout<<"Age of person:"<<age<<endl;
        }
};

class College{
    protected:
        string colname;
        string coladdress;
        void show(){
            cout<<"Name of college is "<<colname<<endl;
            cout<<"Addres of college is "<<coladdress<<endl;
        }
};

class Student:public Human,public College{
    public:
        void setVal(string name,int age,string 
        colname,string coladdress ){
            this->name = name;
            this->age = age;
            this->colname=colname;
            this->coladdress=coladdress;

        }
        void show(){
            cout<<"Students data:"<<endl;
            Human::show();
            College::show();
        }
};

int main(){
    int n;
    
    string name,coladdress,colname;
    int age;
    cout<<"How many number of students : ";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cout<<"Name:";
        cin>>name;
        cout<<"College address:";
        cin>>coladdress;
        cout<<"College name:";
        cin>>colname;
        cout<<"Your age:";
        cin>>age;
        s[i].setVal(name,age,colname,coladdress);
        }

    for(int i=0;i<n;i++){
        s[i].show();
    }
    return 0;

}