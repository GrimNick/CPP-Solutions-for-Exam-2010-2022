/** WAP TO FIND THE SUM OF N NUMBERS USING DYNAMIC MEMORY ALLOCATION
 * IN C++
*/

    //new delete 
#include <iostream>
using namespace std;

int main(){
    /** Format :
    int *a= new int{2};
    delete a;

    int *s = new int[5];
    delete[] s;
    */
   int n;
   cout<<"how many numbers?"<<endl;
   cin>>n;
   int sum=0;
   int *num=new int[n];

   for(int i=0;i<n;i++){
    cout<<"Enter number "<<i+1<<"= ";
    cin>>num[i];
   }
    for(int i=0;i<n;i++){
    sum+=num[i];   //sum += sum num
   }
   cout<<"The sum of all the numbers is: "<<sum<<endl;

    delete[] num;

    return 0;
}