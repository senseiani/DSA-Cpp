#include <bits/stdc++.h>
using namespace std;
void insertHeap(int heap[], int n, int value){
    int i = n;
    heap[n] = value;
    n++;
    while ( i!=0 && heap[(i-1)/2] < heap[i]){
        swap(heap[i], heap[(i-1)/2]);
        i = (i-1) /2;
    }
}
void display( int heap[], int n){
    for ( int i = 0; i<n; i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int heap[100];
    int n = 0;
    int size;
    int value;
    cout<<"Enter the size: ";
    cin>>size;
    for( int i = 0; i< size; i++){
        cout<<"Enter value: ";
        cin>>value;
        insertHeap(heap, n, value);
        n++;
    }
    cout<<"Heap after insertion: ";
    display(heap, n);
    return 0;
}