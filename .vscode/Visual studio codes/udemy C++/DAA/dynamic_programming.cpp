#include<iostream>
using namespace std;
int linearseach(int *arr,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size,key;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            arr[i]=-arr[i];
        }
    }
    cin>>key;
    int result = linearseach(arr,size,key);
    cout<<result<<endl;
    delete[] arr;
    return 0;
}