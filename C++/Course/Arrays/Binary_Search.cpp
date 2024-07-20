#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int low = 0;
    int high = n-1;
    
    while(high >= low)
    {
        int mid = (high+low)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            high = mid-1;
        }
        else if(key>arr[mid])
        {
            low = mid+1;
        }
    }
    return -1;
}
int main() {
    
    int n;
    cin >>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = BinarySearch(arr,n,key);
    if(ans!=-1)
    {
        cout << "element found at index :"<<ans<<endl;
    }
    else
    {
        cout << "element not found"<<endl;
    }
    return 0;
}