#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void print_vector(vector<int>w)
    {
        int num=w.size();
        for(int i=0;i<num;i++)
        {
            for(int j=i+1;j<num;j++)
            {
                if(w[i]==w[j])
                {
                    for(int k=j;k<num;k++)
                    {
                        w[k]=w[k+1];
                    }
                    num--;
                    j--;

                }
            }
        }
        cout<<"array after removing duplicate numbers is:"<<endl;
        for(int i=0;i<num;i++)
        {
            cout<<" "<<w[i];
        }
    }
};
int main()
{
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    cout<<"enter the array: "<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    Solution s;
    s.print_vector(v);
    return 0;

}
