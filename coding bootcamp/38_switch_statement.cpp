//switch statement 

// #include<iostream>
// using namespace std; 
// int main() {

//     // for int value 
//     int num = 2;
//     // cout<<endl;
//     char ch = '1';

//     cout<<endl;
//     switch (ch) {
//         case 1: cout<<"first"<<endl;
//         break;



//         // switch within switch 
//         case '1': switch (num){
//             case 2: cout<<"this is num case "<<endl;
//             break;
//         }
//         break;

//         default: cout<<"it is default case"<<endl;
//     }
//     cout<<endl;
// }


// escaping an infinite loop within switch condition without using break statement 
// we will use exit() statement for immediate termination of code 

#include<iostream>
using namespace std; 
int main() {
    int num;
    cin>>num; 
    while(num == 2) {
        switch(num) {
            case 2: cout<<"HELLO"<<endl;

            //code will immediately terminates after exit() statement 
            exit(0);

            default: cout<<"this is default case"<<endl;
        }
        
    }


}