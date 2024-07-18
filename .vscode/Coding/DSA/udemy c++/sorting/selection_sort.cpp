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
    
    
    
    void selection_sort(int arr[],int n)
    {
        int i,j,k;
        for( i=0;i<n-1;i++)
        {
            for(j=k=i;j<n;j++)
            {
                if(arr[j]<arr[k])
                {
                    k=j;
                }
                
            }
            swap(&arr[i],&arr[k]);
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
        cout<<endl;
    Solution s;
    s.selection_sort(arr,n);
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    return 0;
}