#include <bits/stdc++.h>
using namespace std;

void heap(int arr[], int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if ( left < n && arr[left] > arr[largest]){  // if left child exists && is larger than root 
        largest = left;
    }
    if ( right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if ( largest != i){
        swap(arr[i], arr[largest]);
       heap(arr, n, largest);
    }   
}

void heapsort(int arr[], int n){
    for ( int i = n /2 -1; i>=0; i--){
        heap(arr, n, i);    
    }

    for ( int i = n-1; i>0; i--){
        swap(arr[0], arr[i]);

        heap(arr, i, 0);
    }
}

int main(){
    int n; 
    cout<<"Enter the size: "; cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    heapsort(arr, n);
    cout<<"The sorted array is: ";
    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}