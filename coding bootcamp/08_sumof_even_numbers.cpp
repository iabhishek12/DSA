#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n;


    int i = 1; 
    int sum = 0;

    while(i <= n) {
        // checking if the number is even or not 
        if(i % 2 == 0){
            sum = sum + i;
        }
        i = i + 1;
    }
    cout<<"Sum of n even numbers:"<<sum<<endl;


    return 0;
}