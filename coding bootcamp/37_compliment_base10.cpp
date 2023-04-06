#include<iostream>
#include<math.h>

//using brute force method 
using namespace std; 
int main() 
{
    int n; 
    cin>>n;

    //we will check for values between pow(n, i ) where i is from 0 to 30 ;
    for(int i = 0 ; i <= 30; i++) {


        // pow function is for returning the power of i raised to the value of j 
        int ans = pow(2,i);
        if(n == ans) {
            cout<<"yes";
        }
        else{
            cout<<"no";
        }


    }


    return 0;
}


