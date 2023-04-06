#include<bits/stdc++.h>
using namespace std;

// array with functions 
// note- we can also pass int arr[13] into our function but it is bad practice
// this function is only for int type array 
void printarray(int arr[], int size) {
    cout<<"printing the array"<<endl;
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" "; 

    }
    cout<<endl;
    cout<<"printing done"<<endl;

}

int main () {
    // declare 
    int number[10]; 
    
    cout<<"value at 4th index is :"<<number[4]<<endl;
    // value could be anything as it is garbage value;


    // initializing an array 
    int abhishek[4] = {1,2,3,4}; 

    // accessing an element
    cout<<"value at index 3 is :"<<abhishek[3]<<endl;




    int third[15] = {2,54}; 
    // print the array (let n is the size of array)
    int n = 15; 
    // cout<<"printing the array"<<endl;
    // for(int i = 0; i < n; i++) {
    //     cout<<third[i]<< " "; // element of third array 
    // }
    // cout<<endl;

// calling function
    printarray(third,15);
    




    int fourth[10] = {0};
    n = 10; 
    // cout<<"printing the 4th array"<<endl;
    // for(int i = 0; i < n; i++) {
    //     cout<<fourth[i]<< " "; // element of third array 
    // }
    // cout<<endl;
//calling function 
    printarray(fourth, 10);





    cout<<"everything is fine"<<endl; 
    return 0;
}
