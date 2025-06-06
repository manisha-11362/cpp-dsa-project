#include <iostream>
using namespace std;
int main() {
int a,b;
int *p1,*p2;
cout <<"enter first no =";
cin >> a;
cout <<"enter second no =8";
cin >> b;
p1 =&a;
p2=&b;
int result = (*p1) * (*p2);
cout <<"multiplication =" << result<<endl;
return 0;
}
