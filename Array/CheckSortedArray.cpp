#include <bits/stdc++.h>
using namespace std;
bool issorted(vector<int> &arr, int n){
    for ( int i = 1; i<n; i++){
        if ( arr[i] >= arr[i-1]){

        }
        else { return false ;}
    }
    return true;
}
int main(){
    vector<int> arr = {1, 3, 2, 7 ,5};
    int n = arr.size();
    int sorted = issorted(arr, n);
    cout<<sorted;
    return 0;
} 