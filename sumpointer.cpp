#include <iostream>
using namespace std;
int main(){
    int n, sum =0;
    cout << " Enter array size:";
    cin >> n;
    int arr[n];
    cout << " Enter array elements:";
    for (int i =0;i<n;i++){
        cin >> arr[i];

    }
    int *ptr =arr;
    for(int i = 0; i<n;i++){
        sum +=*ptr;
        ptr++;
    }
    cout << " sum =" << sum;
    return 0;
}