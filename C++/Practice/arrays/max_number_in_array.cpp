#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"enter the size"<<endl;
    int arr[n];
    
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        
    }
    cout<<"largest element is:"<<max<<endl;
    return 0;
}