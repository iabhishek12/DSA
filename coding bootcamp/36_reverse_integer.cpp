#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n;
    int ans = 0;



    //running while loop till the first value of the number is not zero 
    while(n != 0 ) {

        //we are getting the last digits of the number with this 
        // one by one 
        int digit = n % 10;


        ans = ans * 10 + digit ; 



        // updating the value of n (so that we can get the previous digit of the number)
        n = n / 10 ;


    
    }

//note after running one complete loop it will check for n = 1 

    cout<<ans;

    return 0;
}