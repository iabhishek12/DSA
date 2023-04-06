//Important question



// d 
// c d 
// b c d 
// a b c d 
// for value of n 



#include<iostream> 
using namespace std; 
int main() {
    int n; 
    cin>>n;

    int row = 1;
    while(row <= n) {
        int col = 1;


// we will use ch = 'a' + (no_of_rows) - 1 up to the last row number (row for this case)
        char ch = 'A' + n - row;

        while(col <= row) {
            cout<<ch<<"  ";
            ch = ch + 1;

            col = col + 1; 
            // updating column within each iteration 
        }
        cout<<endl; 

        // updating the rows after iteration 


    }



    return 0;
}