//reversing pattern with incrementing number values 
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;


    int row = 1;
    
    while( row <= n ) {
        int space = row - 1;
        while(space) {
            cout<<" ";
            space--;
        }

    
        int column = n - row + 1;
        while(column) {

            
            cout<<row;
            
            column--;
        }
        cout<<endl;
        row = row + 1;
    }

    return 0;
}