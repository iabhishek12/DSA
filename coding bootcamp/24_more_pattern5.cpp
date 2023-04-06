//a
//bb
//ccc for value of n
#include<iostream>
using namespace std; 
int main() {   
    int n; 
    cin>>n;


    int row = 1;
    while( row <= n) {
        //for updating the char with the row 
        char ch = 'A' + row - 1;
        int col = 1;
        while(col <= row) {
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

    return 0;
}