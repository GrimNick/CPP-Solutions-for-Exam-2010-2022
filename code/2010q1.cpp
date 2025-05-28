#include <iostream>
using namespace std;
class Student{
    string name;
    int math;
    int science;
    int social;
    int computer;
    int english;
    bool pass =true;
    public:
        void setVal(){
            cout<<"Enter your name :";
            cin>>name;
            cout<<"Enter marks for maths,science,social, computer,english"<<endl;
            cin>>math>>science>>social>>computer>>english;
        }
        void calc(){
            if(math<45 || science<45 || social<45 || computer<45 ||english<45){
                pass = !pass;
            }
        }
        void display(){
            cout<<"Name of student: "<<name<<endl;
            if(pass){
                cout<<"congrats, passu"<<endl;
            }
            else{
                cout<<"sakyo bro "<<endl;
            }
        }

};

int main(){
    int size;
    cout<<"number of students : ";
    cin>>size;
    Student *s=new Student[size];
    int i=0;
    while(i<size){
        s[i].setVal();
        s[i].calc();
        s[i].display();
        i++;
    }
    delete []s;
    return 0;
}