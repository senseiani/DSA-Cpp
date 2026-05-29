#include <bits/stdc++.h>
using namespace std;
void insert(int arr[], int n){
    if (n == 1){
        return;
    }
    for ( int j = 0; j < n-1; j++){
        if ( arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]  = temp;
        }
    }
    insert(arr, n-1);
}
int main(){
    int n; 
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for ( int i = 0; i<n; i++){
        cin>>arr[i];
    }
    insert(arr, n);
    cout<<"Sorted elements are: ";
    for ( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}