// output the total no of setbits of two user input numbers 
 #include<bits/stdc++.h>
using namespace std; 
 int setbits ( int num) {
    int count = 0;
     while(num) {
         if(num & 1 == 1) {
             count = count + 1;
         }

        //doubt in this condition 
        num=num>>1; 
        
     }
     return count ; 
 }

 int main () {
     int a,b; 
     cin>>a>>b; 

     int setbits_a = setbits(a); 
     int setbits_b = setbits(b); 
     cout<<"no of setbits in a and b are "<<setbits_a + setbits_b<<endl;
     return 0;
 }
