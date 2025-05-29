/** 3. WAP TO FIND THE LARGEST OF 4 INTEGERS. YOUR PROGRAM SHOULD HAVE 3 CLASSES
 * AND EACH CLASS SHOULD HAVE ONE INTEGER MEMBER.
*/

// 3 class-> 3 number, 4, large(classA,classB,classC,int x)

#include <iostream>
using namespace std;
class B;
class C;
class A{
    private:
        int number;
    public:
        void set(int x){
            number = x;
        }
        friend void thulo(A a1,B b1,C c1,int y);
};
class B{
    private:
        int number;
    public:
        void set(int x){
            number = x;
        }
        friend void thulo(A a1,B b1,C c1,int y);
};
class C{
    private:
        int number;
    public:
        void set(int x){
            number = x;
        }
        friend void thulo(A a1,B b1,C c1,int y);
};

void thulo(A a1,B b1,C c1,int y){
    int arr[4];
    arr[0]=a1.number;
    arr[1]= b1.number;
    arr[2]= c1.number;
    arr[3]= y;
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum value is "<<max<<endl;

    /**if(a1.number>b1.number && a1.number>c1.number && a1.number > y){
     *cout<<a1.number;
    }if(b1.number>a1.number && b1.number>c1.number && b1.number > y){
     *cout<<b1.number;
    }if(c1.number>a1.number && c1.number>b1.number && c1.number > y){
     *cout<<c1.number;
    }else{
        cout<<y
    }

    */
}
int main(){
    A a1;
    B b1;
    C c1;
    int y;
    a1.set(2);
    b1.set(3);
    c1.set(4);
    cout<<"Input y"<<endl;
    cin>>y;
    thulo(a1,b1,c1,y);
    return 0;
}