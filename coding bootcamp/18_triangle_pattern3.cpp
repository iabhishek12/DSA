// solving the problem using a variable

#include<iostream>
using namespace std; 
int main() {
    int n ;
    cin>>n;


    int row = 1;



    //declare and maintain a variable
    int value = 1; // we can also put (int value = row) for this question
    while( row <= n) {
        int col = 1;

        while(col <= row) {
            cout<<value<<" ";
            
            //increment the value of variable
            value = value + 1;
            col = col + 1;


        }
        cout<<endl;
        row = row + 1;
    }


    return 0;
}


//solution without using int value or declaring the variable

// #include<iostream>
// using namespace std; 
// int main () {
//     int n ; 
//     cin>>n;

//     int row = 1;
//     while(row <= n) {

//         // hint 
//         int col = row;


//         // logic for this problem
//         while(col < row*2) {
//             cout<<col<<" ";
//             col = col + 1;
            
//         }
//         cout<<endl;

//         row = row + 1;
//     }

//     return 0;
// }