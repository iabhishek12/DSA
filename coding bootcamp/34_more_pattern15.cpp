// question no - 21 (lecture 4 lb dsa course)
#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n;

    int row = 1;
    while( row <= n ) {
        // spaces 
        int spaces = n - row;
        int column = 1;
        while(spaces) {
            cout<<" ";
            spaces--;
        }


        // pattern
        while(column <= row) {
            cout<<column;
            column++;
            
                
        
       
        } 
        column = row - 1;
        while(column >= 1) {
            cout<<column;
            column--;
        }
        cout<<endl; 
        row = row + 1; 





    }

    return 0;
}