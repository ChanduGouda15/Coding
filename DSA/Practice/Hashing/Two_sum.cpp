#include <iostream>
#include <unordered_map>
using namespace std;
void TwoSum(int nums[],int target,int n)
{
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        if(mpp.find(target-nums[i])!=mpp.end()){
            cout<<nums[mpp[target-nums[i]]]<<" "<<i<<endl;
        }
        mpp[nums[i]]=i;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target = 10;
    TwoSum(arr,target,n);
    return 0;
}