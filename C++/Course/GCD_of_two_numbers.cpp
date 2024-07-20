#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    int n1;
    cin >>n1;
    int n2;
    cin>>n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1 = n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    cout<<"GCD is: "<<n1<<endl;
return 0;
}