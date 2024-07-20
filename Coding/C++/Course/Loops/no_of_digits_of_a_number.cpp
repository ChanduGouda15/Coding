#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    while(n>0)
    {
        int digits= n%10;
        n=n/10;
        cout << digits <<endl;
    }

    return 0;
}