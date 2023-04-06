#include<bits/stdc++.h>
using namespace std; 
int search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key ) {
            return 1; 
        }


    }
    return 0; 
}

int main () {
    int arr[100]; 
    int size; 
    cout<<"Enter the size of array :"; 
    cin>>size;  


    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    

    int key; 
    cout<<"enter key "; 
    cin>>key; 

    bool linear_search = search(arr,size,key); 

    if(linear_search) {
        cout<<"key is present "<<endl; 
    }
    else {
        cout<<"key is not present"<<endl;
    }


    return 0;
}