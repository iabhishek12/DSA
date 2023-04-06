#include<iostream>
using namespace std; 
int main() {
    // note - make sure to check the ascii table
    // note- we use endl cos its manipulator (it doesn't occupy and memory) while \n is a character
    
    int a, b;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    
    
    if(a>b) {
        cout<<"a is greater than b "<<endl;
    }
    if(b>a) {
        cout<<"b is greater than a"<<endl;

    }
    
    
    //this means the program will execute successfully 
    return 0;

    
}