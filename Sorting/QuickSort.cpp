#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low , int high){
    int pivot = arr[low];
    int i = low; 
    int j = high;
    while ( i < j){
        while ( arr[i] <= pivot && i <= high-1){
            i++;
        }
        while( arr[j] > pivot && j >= low + 1 ){
            j--;
        }
        if ( i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
   
void quick(int arr[], int low, int high){
    if ( low < high ){
        int pIndex = partition( arr, low , high);
        quick(arr, low , pIndex-1);
        quick(arr, pIndex+1, high);
    }

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
    quick(arr, 0, n);
    cout<<"Sorted elements are: ";
    for ( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}