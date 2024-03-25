#include<iostream>
using namespace std;
int main()
{
    int n;
    int d;
    cout<<"enter size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin >> d;
    int count=0;
    int triplet[3];
    for(int j=0;j<n;j++)
    {
        // cout<<"**"<<j<<endl;
        for(int k=j+1;k<n;k++)
        {
            // cout<<k;
            for(int l=k+1;l<n;l++)
            {
                cout<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;
                if((arr[j]+arr[k]+arr[l])%d==0)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}