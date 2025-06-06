#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    
    cout << "Enter a string: ";
    cin >> str;
    
    char *ptr = str;
    while(*ptr != '\0') {
        char ch = tolower(*ptr);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if(isalpha(ch)) {
            consonants++;
        }
        ptr++;
    }
    
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants;
    
    return 0;
}