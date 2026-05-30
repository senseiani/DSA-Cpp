#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of files: ";
    cin>>n;
    int arr[100];
    cout<<"Enter file size: ";
    for ( int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    int totalcost = 0;
    while ( n >1 ){
        // sort
        for ( int i = 0; i < n-1; i++){
            for ( int j = i+1; j<n; j++){
                if ( arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                }
            }
        }
        int sum = arr[0] + arr[1];
        totalcost += sum;
       arr[0] = sum;
       for ( int i = 1; i< n-1; i++){
        arr[i] = arr[i+1];
       }
       n--;
    }
    cout<<"Minimum merge cost: "<<totalcost;
    return 0;
}