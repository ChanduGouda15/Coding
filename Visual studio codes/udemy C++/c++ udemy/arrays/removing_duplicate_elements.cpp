#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k =j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
            
        }
        
    }
    cout<<"Array after removing duplicate numbers: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    return 0;
}