#include <iostream>
using namespace std;
void sortArray(int *arr , int n){
    for ( int i =0; i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
           if(*(arr +j) >*(arr + j + 1)){
            swap(*(arr +j),*(arr + j +1));
           }
        }
    }
}
int main(){
    int n ;
    cout << "enter the no of elements:";
    cin >> n;
    int arr[n];
    for ( int i =0; i<n; i++){
        cout << "elements" << i+1 <<  " ";
        cin >> arr[i];
    }
    sortArray(arr,n);
    cout << " the sorted elements ";
    for(int i =0;i<n; i++){
        cout << " element" << i+1 << " " << arr[i] << endl;
    }
    return 0;
}