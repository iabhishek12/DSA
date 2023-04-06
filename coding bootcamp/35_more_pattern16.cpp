#include<iostream>
using namespace std; 
int main() {
    int n;
    cin>>n;

    int row = 1;
    while(row <= n) {

        //pattern1
        int col = 1;
        while(col <= n - row + 1){
            cout<<col;

        // we must raise the col 
            col = col + 1;
        }


       // star pattern 
        int star = 1;
        while(star <= row - 1) {
            cout<<"*";
            star = star + 1;
        }

        //pattern 3
        int space = 1;
        while(space <= row - 1) {
            cout<<"*";
            space = space + 1;
        }

        //pattern4 
        col = n - row + 1; 
        while(col >= 1) {
            cout<<col;
            col = col - 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}