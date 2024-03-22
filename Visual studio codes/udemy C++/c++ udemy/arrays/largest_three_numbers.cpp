#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"largest three numbers is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    }
    
    return 0;
}
