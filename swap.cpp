#include <iostream>
using namespace std;
void swapnumber(int &x,int &y){
int temp =x;
x=y;
y=temp;
}
int main(){
    int a,b;
    cout <<"enter first number :";
    cin >> a;
    cout <<"enter second number :";
    cin >> b;
    cout << "\nBefore swapping: a = " << a << ",b = "<< b << endl;
    swapnumber(a,b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;

}
