#include <iostream>
#include<vector>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int temp = n;
    int rev=0;
    while(n>0)
    {
        int digits= n%10;
        n=n/10;
        rev = rev*10+digits;
    }
    cout<<rev<<endl;
    return 0;
}