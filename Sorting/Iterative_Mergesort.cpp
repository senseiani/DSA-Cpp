#include <bits/stdc++.h>
using namespace std;
void merge( int arr[], int left, int mid, int right){
    int n1 = mid - left+1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for ( int i = 0; i<n1; i++){
        L[i] = arr[left+i];
    }
    for ( int i = 0; i<n2; i++){
        R[i] = arr[mid + i+1];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while( i < n2 && j < n2){
        if ( L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else { 
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while ( i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while ( j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
    void mergeSort( int arr[], int n){
        for ( int curr_size = 1; curr_size <= n-1; curr_size = 2*curr_size){
            for ( int left = 0; left < n-1; left += 2*curr_size){
                int mid = min(left + curr_size -1, n-1);
                int right  = min(left + 2*curr_size -1, n-1);
                merge(arr, left, mid, right);
            }
        }
    }
    int main(){
        int n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int arr[n];
        cout<<"Enter elements: ";
        for ( int i = 0; i<n; i++){
            cin>>arr[i];
        }
        mergeSort(arr, n);
        cout<<"Sorted elements: ";
        for ( int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }
