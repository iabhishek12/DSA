//print the numbers in reverse order

#include<iostream>
using namespace std; 
int main() {
    int n;
    cin>>n;


    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n) {


            // we will need to find out the formula here 
            // relation between j and n

// formula --> j = n - j + 1 for satisfying the condition
            cout<<n - j + 1<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }

    return 0;

    
}