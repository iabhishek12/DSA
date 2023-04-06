// program to find if the strings are anagram or not 

#include<iostream> 
#include<cstring> 
using namespace std;
int main () {
    char string1[10], string2[20];
    int len1, len2 , i, j , found, not_found = 0;   

    cout<<"enter the first string :";
    cin>>string1;

    cout<<"enter the second string : "; 
    cin>>string2; 


    len1 = strlen(string1); 
    len2 = strlen(string2); 
    if(len1 == len2) {
        for(i = 0 ; i < len1; i++) {
            found = 0; // initialize found with value 0

            for(j = 0; j < len1; j++) {
                if(string1[i] == string2[j]) {
                    found = 1; 
                    break; 
                }
                
            

            }
            if(found = 0) {
                not_found = 1; 
                break; 
                

            }
            
            
            
            
        }if(not_found == 1) {
            cout<<"strings are  anagram"<<endl; 

        }
        else {
            cout<<"stings are not anagram"<<endl;
        }

    }
    else {
        cout<<"Invalid option"<<endl; 

    }



    


    
}


