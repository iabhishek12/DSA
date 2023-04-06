#include<bits/stdc++.h> 
using namespace std; 
int sum(int arr[], int size) {
    int sum = 0; 
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i]; 

    } 
    return sum;
}
int main () {
    
    int array[4];
    int size; 
    cout<<"Enter size of array"; 
    cin>>size; 

    for(int i = 0; i < size; i++) {
        cin>>array[i];
    }
    cout<<"Sum of elements of array is :"<<sum(array,size)<<endl;
    return 0;


}