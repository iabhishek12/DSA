// return a fibonacci series upto n and store it into an array 
#include<bits/stdc++.h> 
using namespace std; 
int main () {
    int t; 
    cin>>t; 

    while(t--) {
        int x,y; 
        cin>>x>>y; 

        int distance = x * 5; 
        if(distance >= y) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
// void printarray(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// int main () {
//     int first = 0; 
//     int second = 1;
    

//     int n; 
//     cin>>n; 

//     int new_arr[n]; 

//     for(int i = 0; i < n; i++) {

//         int next = first + second;
//         // storing into new_arr
//         new_arr[i] = first;
//         first = second; 
//         second = next; 
//         next++; 

        
//     }
//     printarray(new_arr,n);
    
    

//     return 0;
// }














































// program to calculate element of index i count times inside an array 


// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int x[10];
//     for (int i=0;i<10;i++) {
//         cin>>x[i];
//     }

//     for (int i=0;i<9;i++) {
//         int count=1;
//         for (int j=i+1;j<10;j++) { 
//             if (x[i]==x[j]) count++;
//         }
//         cout<<"The number "<<x[i]<<" is repeated "<<count<<" times"<<"\n";
//     }


//     return 0;
// }









// note --> first we have to store the int function into variable and then print it 
// int sum (int a , int b) {
//     int sum = a + b; 
//     return sum;
// }
// int main () {
//     int a,b; 

//     cin>>a>>b; 
//     int sumis = sum(a,b); 
//     cout<<sumis<<endl;
//     return 0;
// }






// sum of elements of an array
// int main (){
//     int ans = 0; 
//     int arr[5] = {1,2,3,4,5}; 
//     for(int i = 0; i < 5; i++) {
//         ans = ans + arr[i];

//         cout<<ans<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// swap function in cpp (very important)
    // int arr[5] = {1,2,3,4,5};
    // int temp = arr[0]; 
    // arr[0] = arr[1]; 
    // arr[1] = temp; 

    






























// next element we are swapping with should be < size of array 
// void swap(int arr[], int size) {
//     for(int i = 0; i < size; i = i + 2) {
//         while(i + 1 < size) {
//             swap(arr[i],arr[i+1]);
//         }
        
//     }
//     cout<<endl;
// }
// int main () {
//     int arr[5] = {1,2,3,4,5};

//     swap(arr,5);

//     // print array
//     for(int i = 0; i < 5; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl; 



//     return 0;

// }





























// void input(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         cin>>arr[i];
        
//     }




// }
// void printarray(int arr[], int size){
//     for(int i = 0; i <size; i++) {
//         cout<<arr[i]<<" ";
//     }


// }

// int main () {
//     int arr[3]; 
//     input(arr,3); 

//     printarray(arr,3);
//     return 0;
    

   
// }























// sum of elements of array 
// #include<bits/stdc++.h>
// using namespace std; 
// int main () {
//     int array[3] = {3,5,10};
//     int sum = 0; 




//     for(int i = 0; i < 3; i++) {
//         sum = sum + array[i];
        
//     }
//     cout<<sum<<endl;

    
//     return  0;

// }













//     // find the average of marks of 6 students which are given as follows 
//     int arr[6] = {2,3,4,5,6,7}; 
//     int sum = 0; 
    
//     for(int i = 0; i < 6; i++) {
//         sum = sum + arr[i]; 

        
//     }

//     int avg = sum/5;  
//     cout<<avg; 

    
//     // find the power a to the power b given 
//     // a and b are float values 

//     float a,b,power; 

//     cout<<"1st student"<<endl; 
//     cin>>a; 
//     cout<<"2nd student"<<endl; 
//     cin>>b; 

//     power = pow(a, b); 
//     cout<< power<<endl; 
//     return 0;

// // add two numbers 
//     int a,b;
//     cin>>a; 
//     cin>>b;
//     sum = a + b; 

// // square of given number 
//     int a = 2; 
//     int square = a*a; 
//     cout<<square<<endl; 


//     //cube of given number ; 

//     int b = 3 ; 
//     int cube = b*b*b; 
//     cout<<cube<<endl; 



//     //adding two number using while loop 
//     int a,b; 
//     while(b > 0){
//         a = a + 1;
//         b = b - 1; 
//     }
//     cout<<"sum is : "<<a; 


    
    
    
    
