#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the elements: ";
    cin >> n;
    int arr[n];
    int *ptr =arr;
    cout << "Enter " << n << "elements:\n";
    for (int i=0;i<n;i++){
        cin >> *(ptr+i);

    }
    int sum =0;
    for(int i =0; i<n;i++){
        sum+= *(ptr +i);
    }
    cout << "Sum of array elements = " << sum << endl;

    return 0;

}