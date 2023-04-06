// return the characters pattern as ABC for every row and column 
// in rectangular pattern

#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n;


    int row = 1;
    while(row <= n) {
        int col = 1;

        //we can take char only in ('A')
        char ch = 'A';
        while(col <= n) {
            cout<<ch<<" ";
            
            ch = ch + 1;
            col = col + 1;

        }

        cout<<endl;
        row = row + 1;
    }


    return 0; 
}