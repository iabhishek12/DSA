#include<iostream>
using namespace std; 
int main() {


    //no of rows = no of columns
    int n; 
    cout<<"Enter any number :";
    cin>>n;

    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n) {

            
            cout<<i;  //for sameoutput in while row 
            j = j + 1;
        }
        cout<<endl;

        i = i + 1;

    }

    return 0;
}



