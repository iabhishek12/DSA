
// (^) xor logical operator (a ^ a = 0 ) xor of same int returns 0 



// method 1 
// sorting array and then count no of occurences 
// if no of occurences == 1  then print that element 

#include<bits/stdc++.h> 
using namespace std; 
void sorted(int arr[], int size) {
    for(int i = 0; i  < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j]; 
                arr[j] = arr[i]; 
                arr[i] = temp;
            }
        }
    }
}
void printarray(int arr[], int size) {
    for(int i = 0; i < size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int count(int arr[], int size) {
    int count = 0;
    for(int i =0; i< size; i++) {
        
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                i++;
            }
        }
    }
    return count;
    
}
int main () {
    int arr[6] = {1,2,2,3,5,3}; 

    // sorting an array in cpp 
    sorted(arr,6); 
    count(arr,6);
    int count = 0;
    for(int i =0; i< 6; i++) {
        
        for(int j = i + 1; j < 6; j++) {
            if(arr[i] == arr[j]) {
                count++;
                i++;
            }


        }
        
    }
    
    

    return 0;
}
























// #include<bits/stdc++.h> 
// using namespace std; 
// void input(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         cin>>arr[i];
//     }
//     cout<<endl;  
// }
// int unique_element(int arr[], int size) {
//     int output = 0; 
//     for(int i =0; i < size; i++) {
//         output = output ^ arr[i];
//     }
//     return output;  
// }


// int main () {
//     int n; 
//     cin>>n; 


//     int arr[n];
//     input(arr,n); 
    
    
//     cout<<unique_element(arr,n)<<endl;

//     return 0; 
// }
