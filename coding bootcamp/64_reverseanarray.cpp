#include<bits/stdc++.h>
using namespace std; 
int main () {
    int array1[5] = {1,2,3,4,5}; 
    int start = 0; 
    int end = 4; 

    while(start <= end) {
        swap(array1[start], array1[end]); 
        start++; 
        end--; 
    }


    //printing the array
    for(int i = 0; i <= 4;i++) {
        cout<<array1[i]<<" ";
    }
    

    return 0;
}