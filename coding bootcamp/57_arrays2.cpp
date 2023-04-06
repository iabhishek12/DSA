#include<bits/stdc++.h>
using namespace std;
void char_array(char ch[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<ch[i]<<" ";
    }
    cout<<endl; 
}

int main() {
    // initiazing character array  
    char ch1[4] = {'a', 'b', 'c', 'd'}; 
    char_array(ch1,4);
    
// some other arrays in cpp 
    double firstdouble[5]; 
    float firstfloat[6]; 
    bool f_bool[6]; 

    cout<<endl; 
    cout<<"everything is fine "<<endl; 
    return 0;
}