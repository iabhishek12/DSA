// usage of switch satements 
#include<iostream>
using namespace std; 
int main () {
    int num; 
    cout<<"Enter any number :"; 
    cin>>num; 

     

     
    switch (num)
    {
    case 1: cout<<"this is the first case";
    // break statement to exit the loop once statement is matched 
        break; // ---> yes/no
    case 2: cout<<"this is the second case ";
        break; // 

    case 3: cout<<"this is the third case "; 
        break; 

    case 4: cout<<"this is the fourth case"; 
        break; 

    case 5: cout<<"this is the fifth case"; 
        break; 
    
    default: cout<<"default case value"; 
        break; 

    
    return 0; 
    
    
    }
}



