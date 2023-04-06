// return nth term of a give arithmetic progression 
#include<bits/stdc++.h>
using namespace std; 
int nth_term (int term) {
    int answer = (3 * term + 7); 
    return answer; 
}

int main () {
    int number ; 
    cout<<"Enter any number :";
    cin>>number; 

    cout<<"nth term is "<<nth_term(number)<<endl;
    return 0;
}