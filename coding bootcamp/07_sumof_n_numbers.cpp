// find the sum from 1 to n 

#include<iostream> 
using namespace std; 
int main() {
    int n; 
    cin>>n;

    int i = 1;
    int sum = 0;
    while(i <= n) {
        sum = sum + i;
        i = i + 1;   // we are checking for nxt value with the help of this condition 
        
    }

    cout<<"value of sum is "<<sum<<"\n";
    


    return 0;
}