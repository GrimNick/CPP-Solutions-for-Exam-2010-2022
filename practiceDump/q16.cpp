#include <iostream>
using namespace std;
class College{
    string name,location;
    public:
        College(string name,string location){
            this->name = name;
            this->location = location;
        }
        void show(){
            cout<<"Name of college = "<<name<<endl;
            cout<<"Name of location = "<<location<<endl;
        }
};

class Student:virtual public College{
    private:
        string name,roll;
    public:
        Student(string name,string roll,string cname,string location):College(cname,location){
            this->name = name;
            this->roll = roll;
        }
        void show(){
            cout<<"Name of student = "<<name<<endl;
            cout<<"Roll no = "<<roll<<endl;
        }
};

class Teacher:virtual public College{
    private:
        string name;
        int code;
    public:
        Teacher(string name,int code,string cname,string location):College(cname,location){
            this->name = name;
            this->code = code;
        }
        void show(){
            cout<<"Name of Teacher = "<<name<<endl;
            cout<<"Code = "<<code<<endl;
        }
};

class Books:public Student,public Teacher{
    private:
        string Book_name;
        string Writer_name;
        int code;
    public:
        Books(string bname,string wname,int code,int tcode,string tname,
        string cname,string sname,string roll,
        string location):Teacher(tname,tcode,cname,location)
        ,Student(sname,roll,cname,location),College(cname,location){
            Book_name = bname;
            Writer_name = wname;
            this->code = code;

        }
        void show(){
            Student::show();
            Teacher::show();
            College::show();
            cout<<"Name of book = "<<Book_name<<endl;
            cout<<"Name of writer = "<<Writer_name<<endl;
            cout<<"Code:"<<code<<endl;
        }
};

int main(){
 Books b1("ramayan","bijay",22,23,"pradip","everest","newton","26","sanepa");
 b1.show();
    return 0;
}