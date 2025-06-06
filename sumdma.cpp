#include <iostream>
using namespace std;
int main(){
    int n, sum =0;
    cout << "No of elements:";
    cin >> n;
    int *arr = new int[n];
    for ( int i =0; i <n ;i++){
        cin >> arr[i];
        sum +=arr[i];
    }
    cout << "sum " << sum << endl;
    delete[] arr ;
    return 0;
}