#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    int arr1[n];
    int count=0;
    int i,j;
    int most_repeated_element;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count_max=0;
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    
        if(count>count_max)
        {
            count_max=count;
            most_repeated_element = arr[i];
        }
    }
    cout<<"most repreated element: "<<most_repeated_element<<endl;
}