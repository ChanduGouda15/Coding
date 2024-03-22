#include<iostream>
using namespace std;
class Solution{
    public:
    void digits(int x)
    {
        
        int count=0;
        while(x>0)
        {
            
            int digit=x%10;
            x=x/10;
            count++;
            if(x==0)
            {
                cout<<"no of digits are: "<<count<<endl;
                break;
            }
        }

    }
};
int main()
{
    int x;
    cout<<"enter the number: "<<endl;
    cin>>x;
    Solution s;
    s.digits(x);
    return 0;
}