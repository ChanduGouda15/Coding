#include <iostream>
#include<vector>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int temp = n;
 
    while(n>0)
    {
        int digits= n%10;
        n=n/10;
        cout << digits;
    }

    return 0;
}