#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100); 

    char *ptr = str; 

    int len = strlen(str); 

    cout << "Reversed string: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << *(ptr + i); 
    }

    cout << endl;
    return 0;
}
