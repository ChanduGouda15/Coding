#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c = a+b;
    return c;
}
int main()
{
    int x=15;
    int y=10;
    int z = add(x,y);
    cout<<"sum is : "<<z<<endl;
}