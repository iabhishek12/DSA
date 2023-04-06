// function to find out a particular number is even or odd
#include<bits/stdc++.h>
using namespace std; 




// 1 --> even 
// 0 --> odd
bool Even_odd(int num1) {

    
    // odd
    if(num1 & 1) {
        return 0;
    }

    else {

        // even
        return 1;
    }
}


int main () {
    int a; 
    cin>>a; 

    if(Even_odd(a)) {
        cout<<"number is even "<<endl;
    }
    else {
        cout<<"number is odd"<<endl;
    }


    return 0;
}