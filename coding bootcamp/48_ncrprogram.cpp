#include<bits/stdc++.h>
using namespace std; 



// function for factorial value
int Factorial (int f) {
    int fact = 1; 

    for(int i = 1; i <= f; i++) {
        fact = fact * i; 
    }

    return fact;



}


// function for program
int nCr (int n ,int r) {

    int numerator = Factorial(n);
    int denominator = Factorial(r) * Factorial(n - r); 

    int answer = numerator / denominator; 
    return answer;



}



// main function
int main () {
    int n, r; 
    cin>>n>>r; 

    cout<<"answer is : "<<nCr(n ,r )<<endl;

    return 0;
}