#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
       
        
    }
    for(int i=0;i<n;i++)
    {

    }
    cout<<"Second least number is:"<<arr[1]<<endl;

    return 0;
}