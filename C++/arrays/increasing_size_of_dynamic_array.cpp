#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]={6};
    p[1]={7};
    p[2]={8};
    p[3]={9};
    p[4]={10};
    
    int *q=(int *)malloc(10*sizeof(int));
    free(p);
    p=q;
    q=NULL;
    p[0]=12;
    p[1]=22;
    p[2]=32;
    p[3]=42;
    p[4]=52;
    p[5]=6;
    p[6]=7;
    p[7]=8;
    p[8]=9;
    p[9]=10;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"**"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    return 0;
}