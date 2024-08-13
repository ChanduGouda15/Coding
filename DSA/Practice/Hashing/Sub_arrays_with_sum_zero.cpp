#include<iostream>
#include<unordered_map>
using namespace std;
void printAllSubarrays(int nums[], int n)
{
    unordered_map<int,int>mp;
    int sum = 0;
    mp.insert(pair<int,int>(0,-1));
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
    
    if(mp.find(sum)!=mp.end())
    {
        auto it = mp.find(sum);
        while(it!=mp.end() && it->first == sum)
        {
            cout<<"subarray is from"<<" "<<it->second+1<<" "<<"to"<<" "<<i<<endl;
            it++;
        }
    }
    mp.insert(pair<int,int>(sum,i));
    }
}




int main()
{
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(nums)/sizeof(nums[0]);
 
    printAllSubarrays(nums, n);
 
    return 0;
}