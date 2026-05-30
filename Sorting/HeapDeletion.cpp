#include <bits/stdc++.h>
using namespace std;
void heapify( int heap[], int n, int i){
    while ( true ){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if ( left < n && heap[left] > heap[largest]){
            largest = left;
        }
        if ( right < n && heap[right] > heap[largest]){
            largest = right;
        }
        if ( largest == i){
            break;
        }
        swap(heap[i], heap[largest+i]);
        i = largest;
    }
}
void displayheap(int heap[], int n){
    if ( n <= 0){
        cout<<"Heap is empty.-.";
        return ;
    }
    heap[0] = heap[n-1];
    n--;
    heapify(heap, n, 0);
}
void display(int heap[], int n){
    for ( int i = 0; i<n; i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int heap[100] = {50, 40, 30, 10, 20};
    int n =5;
    cout<<"Heap before deletion: ";
    display(heap, n);
    displayheap(heap, n);
    cout<<"Heap after deletion: ";
    display(heap, n);
    return 0; 

}