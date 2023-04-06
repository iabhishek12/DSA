// mini calculator program using switch case statement  
#include<iostream>
using namespace std; 
int main() {
    int a; 
    cout<<"Enter first number :"; 
    cin>>a;

    int b; 
    cout<<"enter second number :";
    cin>>b;

    char c; 
    cout<<"Enter operation you want to perform : "; 
    cin>>c;


    switch(c) {
        case '+': cout<<a + b<<endl;
        // or we can write it as cout<<"output is :"<<a  + b <<endl;
        break;

        case '-': cout<< a - b <<endl;
        break;
        
        case '*':cout<<a * b <<endl;
        break; 

        case '/':cout<<a / b <<endl;
        break;

        case '%': cout<<a % b <<endl;
        break;

        default: cout<<"please enter a valid operator"<<endl;

    }

    return 0; 
    

    



    
}
