#include <iostream>
using namespace std;

class Name{
    string n;
    public:
        Name(string n){
            this->n=n;
        }
        Name(){

        }
        string getn(){
            return n;
        }
        void setn(string n){
            this->n=n;
        }
};

class Address{
    string a;
    string catted;
    public:
    Name n1;
        Address(string a,string n){
            this->a=a;
            n1.setn(n);
        }
        void catter(){
            catted= n1.getn()+a;
        }
        void display(){
            cout<<catted<<endl;
        }
};

int main(){
    Address a1("Kathmandu","Newton");
    a1.catter();
    a1.display();
    return 0;
}