#include <iostream>
using namespace std;
class STACK{
    int size = 10;
    int arr[10];
    int iterator=-1;
    public:
        void pop(){
            if(iterator==-1){
                cout<<"Empty already"<<endl;
            }else{
                --iterator;
            }
        }

        void push(int x){
            if(iterator <size){
                iterator++;
                arr[iterator]=x;
            }else{
                cout<<"No space left"<<endl;
            }
        }
        void display(){
            if(iterator==-1){
                cout<<"Empty already"<<endl;
            }
            else{
                for(int i=0;i<=iterator;i++){
                    cout<<arr[i]<<endl;
                }
            }
        }
};

int main(){
    STACK s1;
    s1.push(1);
    s1.push(3);
    s1.push(5);
    s1.pop();
    s1.display();
    return 0;
}