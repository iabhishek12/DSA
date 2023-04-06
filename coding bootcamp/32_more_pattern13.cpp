// star pattern with incrementing row number
#include<iostream>
using namespace std; 
int main() {
    int n;
    cin>>n;


    int row = 1;
    while(row <= n) {
        //printing the spaces first 
        int space = n - row;
        while(space) {
            cout<<" ";
            space--;
        }

        // printing the star pattern 
        int column = 1;
        while(column <= row) {
            cout<<row;
            column++;

        }

        cout<<endl;
        row = row + 1;
    }

    return 0;
}