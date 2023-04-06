#include<bits/stdc++.h> 
using namespace std; 
void printarray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main () {
    int arr[5] = {1,2,1,4,5}; 

    for(int i = 0; i < 5; i = i + 2) {
        
        if(i + 1 < 5) {
            swap(arr[i],arr[i + 1]);
        }

        
    }
    
    

    printarray(arr,5); 
    return 0;
}



























// #include<bits/stdc++.h> 
// using namespace std; 
// void input(int arr[], int n) {
//     for(int i = 0; i < n;i++) {
//         cin>>arr[i];
//     }
//     cout<<endl; 
     
// }

// void swap(int arr[], int n) {
//     for(int i = 0; i < n; i = i + 2) {
    
//     // condition for odd case 
//         if(i + 1 < n) { 
//             swap(arr[i],arr[i+1]); 

//         }
//     }
//     cout<<endl;
// }

// void printarray(int arr[], int n) {
//     for(int i = 0; i < n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main () {
//     int n; 
//     cin>>n; 

//     int arr[n]; 
//     input(arr,n);

//     swap(arr,n); 

//     printarray(arr,n); 


//     return 0;
// }