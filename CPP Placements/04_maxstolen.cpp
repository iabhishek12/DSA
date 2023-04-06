// program to find the max stolen value 
#include <iostream>
using namespace std;
 

int maxLoot(int* maxvalue, int n)
{
    // base case
    if (n < 0) {
        return 0;
    }
 
    if (n == 0) {
        return maxvalue[0];
    }
    
    int pick = maxvalue[n] + maxLoot(maxvalue, n - 2);
    
    int notPick = maxLoot(maxvalue, n - 1);
    return max(pick, notPick);
}
 
int main () 

{


    int maxvalue[] = { 6, 7, 1, 3, 8, 2, 4 };
    int n = sizeof(maxvalue) / sizeof(maxvalue[0]);
    cout << "Maximum loot possible : "
         << maxLoot(maxvalue, n - 1);
        return 0;


}