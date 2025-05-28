#include <iostream>
using namespace std;
class University{
    private:
        string name;
        string location;
    public:
        University(string name,string location){
            this->name = name;
            this->location = location;
        }
        void display(){
            cout<<"Name of University is "<<name<<endl;
            cout<<"Location of University is "<<location<<endl;
        }
};

class AffColl:virtual public University{
    private:
        string name;
        string address;
        int no_of_programs;
    public:
        AffColl(string name,string location,string aname,string address,
        int no_of_programs):University(name,location){
            this->name = aname;
            this->address= address;
            this-> no_of_programs=no_of_programs;
        }
        void display(){
            cout<<"Name of Affiliated college is "<<name<<endl;
            cout<<"Address of Affiliated college is "<<address<<endl;
            cout<<"No of programs of Affiliated college is "<<no_of_programs<<endl;
        }

};

class ConstColl:virtual public University{
    private:
        string school;
        string dean;
        string name_of_programs;
    public:
        ConstColl(string name,string location,string school,string dean,
        string name_of_programs):University(name,location){
            this->school = school;
            this->dean= dean;
            this-> name_of_programs=name_of_programs;
        }
        void display(){
            cout<<"Name of Constituent school is "<<school<<endl;
            cout<<"Dean of Constituent school is "<<dean<<endl;
            cout<<"Name of programs of Constituent college is "<<name_of_programs<<endl;
        }

};

class Student:public AffColl,public ConstColl{
    private:
        string name;
        string program;
        int enrolled_year;
    public:
        Student(string name,string location,string school,string dean,
        string name_of_programs,string aname,string address,
        int no_of_programs,string sname,string program, int enrolled_year):
        AffColl(name,location,aname,address,no_of_programs),ConstColl(
            name,location,school,dean,name_of_programs),University(name,location){
                this->name = sname;
                this->program= program;
                this->enrolled_year=enrolled_year;
            }
            void display(){
                University::display();
                AffColl::display();
                ConstColl::display();
                cout<<"Student's Name : "<<name<<endl;
                cout<<"Student's Program: "<<program<<endl;
                cout<<"Student enrolled year: "<<enrolled_year<<endl;
            }
};

int main(){
    Student s1("Pokhara","pokhara","science","don","engineering","everest","sanepa"
    ,4,"newton","computer",2021);
    s1.display();
    return 0;
}