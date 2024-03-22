#include<iostream>
using namespace std;
class Solution{ // creating a class
    public:
    int binary_search(int arr[],int start,int end,int x)
    {
        if(start>=end)
        {
            int mid=(start+end)/2;
            
                if(arr[mid]==x)
                {
                    return mid;
                }
                else if(arr[mid]>x)
                {
                    return binary_search(arr,start,mid-1,x); // using recurssion
                }
                else if(arr[mid]<x)
                {
                    return binary_search(arr,mid+1,end,x); // using recurrsion
                }
            
        }
        return -1;
        
    }
    
};
int main()
{
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int x;
    cout<<"enter the number: "<<endl;
    cin>>x;
    int low = 0;
    int high=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Solution s; // creating an object named s
    int result=s.binary_search(arr,low,high,x);
    if(result==-1)
    {
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"element found at index: "<<result<<endl;
    }
    return 0;
}