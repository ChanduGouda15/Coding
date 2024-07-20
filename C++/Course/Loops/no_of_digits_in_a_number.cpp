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

//for using for loop
// int n0.of.digits - log10(n)+1;
//for(int i=0;i<no.of.digits;i++)