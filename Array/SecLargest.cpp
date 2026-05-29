#include <bits/stdc++.h>
using namespace std;

  int secondlargest(  vector<int> &arr, int n){
    int largest = arr[0];
    int seclargest = INT_MIN;
    for ( int i = 1; i<n; i++){
        if ( arr[i] > largest ){
            seclargest = largest;
            largest = arr[i];
        }
        else if ( arr[i] < largest && arr[i] > seclargest ){
            seclargest = arr[i];
        }
    }
    return seclargest;
  }

  int secondsmallest( vector<int> & arr, int n){
    int smallest = arr[0];
    int secsmallest = INT_MAX;
    for ( int i = 1; i<n; i++){
        if ( arr[i] < smallest ){
            secsmallest = smallest;
            smallest = arr[i];
        }
        else if ( arr[i] != smallest && arr[i] < secsmallest){
            secsmallest = arr[i];
        }
    }
    return secsmallest;

  }
  int main(){
    vector<int> arr = { 1, 2, 4, 7, 7, 5};
    int n = arr.size();
    int secsmallest = secondsmallest(arr, n);
   int seclargest = secondlargest(arr, n);
      cout<<"Second smallest: "<<secsmallest<<endl;
   cout<<"Second largest: "<<seclargest;
   return 0;
  }