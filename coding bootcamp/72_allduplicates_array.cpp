//return all repeating element inside the array
#include<bits/stdc++.h> 
using namespace std; 
int main () {
    int arr[6] = {1,2,3,1,2,45}; 
    int ans = 0; 


    for(int i = 0;i < 6; i++){
        ans = ans ^ arr[i];

    }
    cout<<ans; 
    
}