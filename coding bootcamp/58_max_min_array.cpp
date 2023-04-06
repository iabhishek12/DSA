#include<bits/stdc++.h>
using namespace std;
// function for min value in array 
int get_min(int arr[], int size) {
    int mini = INT_MAX; 
    for(int i = 0; i < size; i++) {
        // if number is smaller than min than store that into min

        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

// function for max value in array 
int get_max(int arr[], int size) {
    int maxi = INT_MIN; 
    for(int i =0 ; i < size; i++) {

    // we also have predefined functions which are max and min  
    // we can also write this as 
        maxi = max(maxi, arr[i]);// this means same code we write below 
        // if(arr[i] > maxi) {
        // maxi = arr[i]; // storing the elements into max 
            
        // }
    }

    return maxi;
}


int main () {
    int size; 
    cout<<"size of array is :"; 
    cin>>size;


    // this is bad practice (variable in array)
    // int new_array[size]; 

    int new_array[100]; 
    for(int i = 0; i < size; i++) {

        // taking input of second index of array
        cin>>new_array[i];

    }

    cout<<"max element in array is :"<<get_max(new_array, size)<<endl;
    cout<<"min element in array is :"<<get_min(new_array,size)<<endl;

    return 0;

}