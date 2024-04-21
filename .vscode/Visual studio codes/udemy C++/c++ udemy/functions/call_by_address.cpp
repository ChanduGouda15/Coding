#include<iostream>
using namespace std;
void swap(int *x,int *y) //formal parameters
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10;
    int b=20;
    swap(&a,&b); // actual parameters
    cout<<a<<endl;
    cout<<b<<endl;

}