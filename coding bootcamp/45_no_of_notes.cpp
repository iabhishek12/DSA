// no of notes using switch statement 
#include<bits/stdc++.h>
using namespace std; 
int main () {
    int total_amount; 
    cout<<"Enter the total amount :"; 
    cin>>total_amount; 

    int remainder, notes_100, notes_50, notes_20, notes_1; 
    //note -  we pass 1 inside switch statement cos 1 is true in binary 
    

    switch(1) {


        case 1:notes_100 = total_amount / 100; 
        remainder = total_amount % 100;  
        cout<<"notes of 100 :"<< notes_100<<endl;


        case 2:notes_50 = total_amount / 50; 
        remainder = total_amount % 50;  
        cout<<"notes of 50 :" <<notes_50<<endl;  
         

        case 3:notes_20 = total_amount / 20; 
        remainder = total_amount % 20; 
        cout<<"notes of 20 :"<<notes_20<<endl; 


        case 4: 
        notes_1 = total_amount / 1; 
        remainder = total_amount % 1; 
        cout<<"notes of 1 :"  <<notes_1<<endl; 
        break; 

        default: cout<<"invalid input"<<endl; 
        break;
    }

    return 0;
     

}