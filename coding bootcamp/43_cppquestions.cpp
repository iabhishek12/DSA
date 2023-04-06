#include<iostream>
#include <typeinfo>
#include<iostream>
#include<string.h> 
#include<math.h> 
using namespace std; 
int main () {
    // note we can use .length() property in case of string declaration 
    // we will use sizeof() property in case of string STL 
    




    // no of characters in a string 
    string s = "abhishek bohra";
    int b = s.length(); 
    cout<<b<<endl; 


    // no of char in string 2
    char ch[] = "student of lpu"; 
    cout<<sizeof(ch) - 1<<endl; // we use -1 here for removing the null value from string 


    // total no of punctuation exist in a string 
    char str[] = "abhishek, is ; ! from haryana: "; 
    int i = 0;
    int no_of_punctutation = 0; 
    for(i = 0; i < strlen(str); i++) {


        
        if(str[i] == ',' or str[i] == '!' or str[i] == ':' or str[i] == '/' or str[i] == '?' or str[i] == ';') {
            no_of_punctutation = no_of_punctutation + 1; 
            

        }
        


        
    }
        cout<<no_of_punctutation<<endl; 
        



    // total no of vowels and constants in a string 
    char str1[] = "I am a software developer in amazon"; 
    int no_of_vowels = 0; 
    int alphabets = strlen(str1); 

    for(i = 0; i < alphabets; i++) {
        if(str1[i] == 'a' or str1[i] == 'e' or str1[i] == 'i' or str1[i] == '0' or str1[i] == 'u')
        {
            no_of_vowels++; 
        }
    
    }

    cout<<"no of consonants :"<<alphabets - no_of_vowels<<endl; 
    cout<<"no of vowels :"<<no_of_vowels<<endl; 
    



    
}