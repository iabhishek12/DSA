#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n; 


    int i = 2;

    while ( i < n) {

        // checking the number is prime for values btw i to n 
        if ( n % 2 == 0) {
            cout<<"prime for"<<i<<endl;
        }
        else {
            cout<<"Non-prime for"<<i<<endl;
        }

        i = i + 1;
    }


    return 0;
}