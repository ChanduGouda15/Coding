#include<iostream>
using namespace std;
class Solution{ // created a class named soluition
    public:
    void linear_search(int arr[],int n,int num) // creatinga void function & taking 3 inputs
    {
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==num)
            {
                cout<<"number at index is: "<<i<<endl;

            }
        }
        
    }
};
int main()
{
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Solution s; // creating an object
    s.linear_search(arr,n,num); // calling the function
    return 0;

}