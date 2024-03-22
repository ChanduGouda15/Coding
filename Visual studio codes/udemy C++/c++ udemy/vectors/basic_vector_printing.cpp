#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        void print_vector(vector<int>w)
        {
            cout<<"vector is: "<<endl;
            for(int i=0;i<w.size();i++)
            {
                    cout<<w[i]<<"";
                cout<<endl;
            }
            cout<<"*"<<endl;
            cout<<w.front()<<endl;
            cout<<w.back()<<endl;
        }
};
int main()
{
    cout<<"enter the array: "<<endl;
    vector<int>w(5);
    for(int i=0;i<5;i++)
    {
        cin>>w[i];
    }
    Solution s;
    s.print_vector(w);
    return 0;
}