// for loops in cpp 
// for loop doesn't know where to stop 
#include<iostream>
using namespace std; 
int main () {
    int n; 
    cout<<"enter the value of n"<<endl; 
    cin>>n; 

    cout<<"printing the count from 1 to n "<<endl; 
    int i = 1; 


    // syntax for loop (statement1; statement2; statement3)
    for  (; ;) {
        if(i  <= n) {
            cout<<i<<endl;
        } 
        else {
            break;
// break statement gets you out of the current loop 
        }

        i = i + 1;

    }




    // via while loop 
    // while(i <= n) {
    //     cout<<i<<endl;
    //     i = i + 1; 
// updating the value of i for nxt condition 
    // }

    

}