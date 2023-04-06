#include<bits/stdc++.h>
using namespace std; 
// variable of one function is independent of variable of another function
int dummy(int n) {
    n++;
    cout<<"number is "<<n<<endl; 
    return n; 

}
int main () {
    int n; 
    cin>>n; 
    

    // calling dummy function and this will make a copy of n
    // with its own storage (don't effect the n of main function that is pass by value)
    dummy(n); 
    cout<<"main number is :"<<n<<endl;



    return 0;
}