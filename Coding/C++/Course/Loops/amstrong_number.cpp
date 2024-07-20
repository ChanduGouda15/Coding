#include <iostream>
#include<vector>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int temp = n;
    vector<int>w;
    while(n>0)
    {
        int digits= n%10;
        n=n/10;
        cout << digits <<endl;
        w.push_back(digits);
    }
    int sum=0;
    for(int i=0;i<w.size();i++)
    {
        sum = sum+(w[i]*w[i]*w[i]);
        
    }
    if(temp == sum)
    {
        cout << "it is a amstrong number " << endl;
    }
    else
    {
        cout << "not a amstrong number "<< endl;
    }
    return 0;
}