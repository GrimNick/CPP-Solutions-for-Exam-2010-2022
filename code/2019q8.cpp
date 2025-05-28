#include <iostream>
using namespace std;

int main(){
    int *ptr = new int{2};
    delete ptr;

    int size =5;
    int *arr = new int[size];
    delete []arr;
}