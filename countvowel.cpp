#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char* ptr = str;
    int vowels = 0, consonants = 0;

    while (*ptr != '\0') {
        char ch = tolower(*ptr); // ch ko lowercase me convert karo
        if ((ch >= 'a' && ch <= 'z')) { // agar alphabet hai
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        ptr++; // next character pe move
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
