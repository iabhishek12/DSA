#include<iostream>
using namespace std; 
//  program for finding the number is +ve, -ve or zero


int main() {


    int a , b ;

    cout<<"Enter value for a :"<<endl;
    cin>>a;
    


    if ( a>0 ) {
        cout<<"a is positive"<<endl;


    }
    else { 
        if(a<0) {
            cout<<"a is negative"<<endl;
        }
        else {
            cout<<"a is zero"<<endl;
        //note - we use endl to break a line in the output 
        }

    }




    return 0;

    
}