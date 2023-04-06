// reverse star pattern for value of n
// approach find the relation between spaces and stars in rectangular pattern




//Approach - print the space pattern and after that print the star pattern 
// find relation between spaces and rows and star and rows for this question 

#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n;

    int row = 1; 
    while ( row <= n) {
        int space = n - row ; 
        while ( space ) {
            cout<< " "; 
            space = space - 1;
        }


        // printing the pattern 
        int column = 1;
        while ( column <= row ) {
            cout<<"*";
            column = column + 1; 

        }
        cout<<endl;
        row = row + 1;
    }


    return 0;
}



