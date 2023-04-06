#include<bits/stdc++.h>
using namespace std; 

// 1 --> prime 
// 0 --> not a prime no 

bool Prime_ornot (int number) {
// we run for loop from 2 to n-1 so simply run it to i < number 
    for(int i = 2; i < number; i++) {
        // that means number is dividable and not a prime number 



        // condition for not a prime number is cs 
        if(number % i == 0) 
        {
            return 0;
        }

        
    }
return 1;
}

int main () {
    int num; 
    cin>>num; 
    


    //will return 0
    if(Prime_ornot(num)) {
        cout<<"is a prime number"<<endl; 

    }
    else {
        cout<<"not a prime number"<<endl;
    }


    return 0;
    
}