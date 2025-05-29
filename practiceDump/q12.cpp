/**
 *  WAP USING A DYNAMIC MEMORY ALLOCATION WHICH SHOULD INCLUDE CALCULATION OF MARKS
 * OF 3 SUBJECTS OF N STUDENTS. DISPLAY THE RESULT PASS OR FAIL, NAME ROLLNO.,
 * PASS MARKS 45 OUT OF 100.
 */

//Class name,rollno. marks., dynamic memory allocate

#include <iostream>
using namespace std;

class student{
    private:
        string name;
        int roll;
        int math;
        int comp;
        int physics;
        bool pass;
    public:
        void set(string name,int roll, int math, int comp, int physics){
            this->name = name;
            this-> math = math;
            this-> comp=comp;
            this->roll = roll;
            this->physics=physics;
        }
        void calc(){
            if(math< 45 || comp <45 || physics <45){
                 pass =false;
            }else{
                pass=true;
            }
        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll no: "<<roll<<endl;
            cout<<"Marks in math: "<<math<<endl;
            cout<<"Marks in comp: "<<comp<<endl;
            cout<<"Marks in physics: "<<physics<<endl;
            if(pass){
                cout<<"PASSWSSSEDD"<<endl;
            }else{
                cout<<"fail.."<<endl;
            }
        }
};

int main(){
    int n;
    string name;
        int roll;
        int math;
        int comp;
        int physics;
    cout<<"how many students:";
    cin>>n;
    student *s= new student[n];
    for(int i =0 ;i<n;i++){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter math: ";
        cin>>math;
        cout<<"Enter physics: ";
        cin>>physics;
        cout<<"Enter comp: ";
        cin>>comp;
        s[i].set(name,roll,math,comp,physics);
    }
    for(int i=0;i<n;i++){
        s[i].calc();
        s[i].display();
    }
    delete []s;
    return 0;
}