#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    
    char *ptr = str + strlen(str) - 1;
    cout << "Reversed string: ";
    
    while(ptr >= str) {
        cout << *ptr;
        ptr--;
    }
    
    return 0;
}