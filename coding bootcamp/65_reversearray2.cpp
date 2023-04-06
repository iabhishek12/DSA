// reversing an array using swap method 

#include<bits/stdc++.h> 
using namespace std; 
void input(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }
}


// reverse function 
void reverse (int arr[], int size) {
    int start = 0; 
    int end = size - 1; 
    while(start < end) {
        swap(arr[start], arr[end]); 
        start++; 
        end--; 
    }
    
}
void printarray(int arr[], int size) {
    for(int i = 0; i < size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main () {
    int arr[3];
    input(arr,3); 
    
    int brr[4];
    input(brr,4);



    reverse(arr,3); 
    reverse(brr,4); 


    printarray(arr,3); 
    printarray(brr,4);



    return 0;
}