//reverse star pattern with spaces 
// * * * * 
// - * * *
// - - * * 
// - - - *  for the value of n 
#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n;


    int row = 1;
    while( row <= n ) {

        // printing the space 
        int space = row - 1;
        while(space){
            cout<<"- ";
            space = space - 1;
        }

        // printing the pattern 
        int column = n - row + 1;
        while(column) {
            cout<<"* ";

            //decrementing the column with respect to row 
            column = column - 1;
        }
        cout<<endl;
        row = row + 1;
    }

    return 0;
}