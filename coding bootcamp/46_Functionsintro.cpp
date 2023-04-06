// functions - basically a program with well defined task 
#include<bits/stdc++.h>
using namespace std;



// declaring the power function
int power(int a, int b) {
    int ans = 1; 
    for(int i = 1; i <= b; i++) {
        ans = ans * a;
    }

    return ans;

    
}


int main () {
    int a, b; 
    cin>>a>>b;


    int answer = power(a,b); 
    cout<<"answer is :"<<answer<<endl;

    return 0;
}