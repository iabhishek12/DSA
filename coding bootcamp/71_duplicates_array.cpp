// find the duplicate element inside the array 
#include<bits/stdc++.h> 
using namespace std; 
void input(int arr[],int n)
{
    for(int i = 0;i < n; i++) {
        cin>>arr[i];
    }
    cout<<endl;

}
int main (){

    int n; 
    cin>>n; 

    int arr[n];   
    input(arr,n); 


    int ans = 0;
    for(int i =0; i < n; i++) {
        ans = ans ^ arr[i];



    }
    for(int i = 1; i < n; i++) {
        ans = ans ^ i;
    }
    cout<<ans;
    return 0;
}