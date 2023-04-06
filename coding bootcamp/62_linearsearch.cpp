#include<bits/stdc++.h>
using namespace std; 
bool search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return 1; 
        }
    }

    // return in case of key is not found in arrray
    return 0;
}
int main () {
    int array[5] = {1,2,3,4,5}; 
    // wheather 1 is present in array or not 
    // for this case 1 is the key --> we are seaching for in the array 
    cout<<"enter the element to search for :"; 
    int key; 
    cin>>key;
    bool found = search(array,5,key);

    if(found) {
        cout<<"key is present"<<endl;

    }
    else {
        cout<<"not present"<<endl;
    } 


    return 0;
}