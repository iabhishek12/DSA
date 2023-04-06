// return the triangle pattern in reverse number order 

#include<iostream>
using namespace std; 
int main() {
    int n ; 
    cin>>n;


    int row = 1;
    
    
    

    while ( row <= n) {
        int col = 1;
        while( col <= row) {

//hint - start from the row number and then decrement 
// logic -  we use formula (row = row - col + 1)



        // we find this formula through observation 
            cout<<(row - col  + 1)<<" ";
            
            
            
            col = col + 1;
        }
        cout<<endl;

        row  = row  + 1;




    }


    return 0 ;
}