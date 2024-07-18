#include<iostream>
using namespace std;
class Solution{
    public:
    void swap(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    void bubble_sort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++) // no of passes
        {
            for(int j=0;j<n-1;j++) // no of comparisons
            {
                if(arr[j]>arr[j+1])
                {
                    swap(&arr[j],&arr[j+1]);
                }
            }
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
    s.bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}