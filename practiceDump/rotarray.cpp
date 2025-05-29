#include <iostream>
#include <algorithm>
using namespace std;
class array{
    public:
        void Rotarray(int *arr){
            cout<<"inside class"<<endl;
           int j=0;
           int k=0;
           while(arr[k]!= NULL){
            j++;
            k++;
           }
           j++;
           cout<<"size is "<<j<<endl;
           int i =0;
           while(i<j){
            cout<<"arr no."<<i+1<<":"<<arr[i]<<endl;
            i++;
           }
        }
};
int main(){
    array a1;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int j=sizeof(a)/sizeof(a[0]);
           cout<<"size is "<<j<<endl;
           int i =0;
    while(i<j){
            cout<<"arr no."<<i+1<<":"<<a[i]<<endl;
            i++;
           }
    a1.Rotarray(a);
    return 0;
}