//try block , throw, catch block
#include <iostream>
using namespace std;

int main(){
    int a=2;
    int b=0;
    try{
    if(b==0) throw b;
    
    }
    catch(int c){
        cout<<"DENOMINATOR MISTAKE, PLEASE ENTER AGAIN :";
        cin>>c;
        b=c;    //exception handle
    }
     float div= a/b;
     cout<<"div is "<<div<<endl;
     return 0;

}