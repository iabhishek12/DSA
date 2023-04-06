#include<iostream> 
using namespace std; 
int main() { 
    int n;
    cin>>n;


    int i = 1; 
    while(i <= n) {
        int j = 1;
        while(j <= n) {
            cout<<" * ";
            j = j + 1;
        }
        cout<<endl;


        //for checking next condition one after other 
        i = i + 1;
    }


    return 0;
}