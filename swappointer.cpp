#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y =temp;
}
int main(){
    int a,b ;
    cout << "Enter two numbers:";
    cin >> a >> b;
    swap(&a ,&b);
    cout << "After swap:" << a << " "<< b;
    return 0;
}