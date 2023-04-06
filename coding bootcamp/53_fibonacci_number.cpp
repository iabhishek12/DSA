//find the nth number in fibonacci series 
//note--> Fn = Fn - 1 + Fn - 2 (fibonacci series)


//  THE FIBRONACCI SERIES 

// The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding numbers.
// The sequence starts with 0 and 1, and each subsequent number is the sum of the previous two numbers. 
// So the sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on.
// The sequence is named after Leonardo Fibonacci, an Italian mathematician who introduced it to the Western world in his book Liber Abaci,
// which was published in 1202. The Fibonacci sequence is fascinating because it
// appears in many areas of mathematics and science, including geometry, biology, and physics.


#include<bits/stdc++.h> 
using namespace std; 
void fibronacci(int n) {
    int first = 0; 
    int second = 1; 
    for(int i = 0; i < n; i++) {

        cout<<first<<" ";
        
        int next = first + second;  

        first = second;     
        second = next; 

        
    }
    cout<<endl; 
}
int main () {
    int n; 
    cin>>n; 


    fibronacci(n);
    return 0; 
    
}