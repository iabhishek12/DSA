#include<bits/stdc++.h> 
#include<cmath> 
using namespace std;
void reverse(int arr[], int size) {
    int start = 0; 
    int end = size - 1; 
    while(start <= end) {
        swap(arr[start], arr[end]); 
        start++; 
        end--; 
    }
}
void printarray(int arr[],int size) {
    for(int i  = 0; i < size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; 
    cin>>n;
    
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    reverse(arr,n); 
    printarray(arr,n);
    
    return 0;
}