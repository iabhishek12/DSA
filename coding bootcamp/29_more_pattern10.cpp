// reverse star pattern without spaces
// for value of n 
 #include<iostream>
using namespace std; 
int main () {
    int n; 
    cin>>n;


    int row = 1;
    while( row <= n ) {
        int col = n - row + 1 ;
        while ( col ) {
            cout<<" *";
            col = col - 1;
        }
        cout<<endl;
        row = row + 1;
    }




    
    return 0;
}





// using for loop 
// #include<iostream>
// using namespace std; 
// int main() {
//     int n;
//     cin>>n;
    

//     int i, j;
//     for( i = 0; i < n; i++) {
//         for( j = n - i; j > 0; j--) {
//             cout<<" *";
//         }
//         cout<<endl;

//     }
//     return 0;
// }



// solution 3
// #include<iostream>
// using namespace std; 
// int main() {
//     int n; 
//     cin>>n;

//     int row = 0;
//     int col = n;
//     while( row < n) {
//         col = n - row;
//         while( col > 0 ) {
//             cout<<"* ";
//             col--;

//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;

// }
