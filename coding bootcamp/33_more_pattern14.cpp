//star pattern with spaces with incrmenting the value of variable 
#include<iostream>
using namespace std; 
int main() {
    int n; 
    cin>>n;
     
    int row = 1;
    int var = 1;
    while ( row <= n) {
        int space = n - row ;
        while(space) {
            cout<<" ";
            space--;

        }


        //star pattern 
        int col = 1;
        while(col <= row) {
            cout<<var;
            var++;
            col++;
        }

        cout<<endl;
        row++;
    }

    return 0;
}