// make rectangular pattern using one or more characters 

#include<iostream>
using namespace std; 
int main() {
    int n; 
    cout<<"Enter any integer :";
    cin>>n;

    int row = 1;

    while(row <= n) {

        // find a relation of char with row 
        int col = 1;


        // logic 
        char ch = 'A' + row - 1;

        
        while(col <= n) {
            cout<<ch<<" ";
            col = col + 1;

        }
            

        cout<<endl;
        row = row + 1;
    }



    return 0;
}