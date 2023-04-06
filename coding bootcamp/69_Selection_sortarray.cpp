#include<bits/stdc++.h> 
using namespace std;
void printarray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 
int main () {
    int arr[6] = {1,2,2,3,6,3}; 

    for(int i = 0; i < 6; i++) {
        for(int j = i + 1; j < 6; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j]; 
                arr[j] = arr[i]; 
                arr[i] = temp;
            }
        }
    }
    printarray(arr,6); 
    

    return 0;
}