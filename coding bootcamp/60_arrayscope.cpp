#include<bits/stdc++.h>
using namespace std; 
void update(int arr[], int size) {

    cout<<endl<<"inside the function"<<endl;
    arr[0] = 120; //updating the first element of array
    // printing the array
    for(int i = 0; i < 3; i++) {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
    
    cout<<"going back to main function"<<endl;
}
int main () {
    int arr[3] = {1,2,3}; 
    
    update(arr, 3); 
    cout<<endl;
    cout<<"printing the main function"<<endl;
    for(int i = 0; i < 3; i++) {
        cout<<arr[i]<<" "; 

    }
    cout<<endl;
    
    return 0;
}

