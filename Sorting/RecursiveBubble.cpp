#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n){
    if ( n == 1) return;

    for ( int j = 0; j<= n-2; j++){
        if ( arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
        
    }

bubble(arr, n-1);

}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for ( int i = 0; i<n; i++){
        cin>>arr[i];
    }
    bubble(arr, n);
    cout<<"Sorted array is: ";
    for ( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}