#include <iostream>
using namespace std;
int main(){
    int a,b;
    int *ptr1 =&a ,*ptr2 = &b;
    cout << "Enter two numbers:";
    cin >> *ptr1 >> *ptr2;
    int product = (*ptr1) * (*ptr2);
    cout << "product = " << product ;
    return 0;
}