#include<iostream>
using namespace std;
class Solution{
    public:
    void insertion_sort(int arr[],int n)
    {
        int i,j;
        for( i=1;i<n;i++)
        {
            int temp=arr[i];
            j=i-1;
            for(j>=0;(arr[j]>arr[i]);j--)
            {
                arr[j+1]=arr[j];
            }
            arr[j+1]=temp;
        }
    }
};
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
    Solution s;
    s.insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}