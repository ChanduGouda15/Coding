#include<iostream>
using namespace std;
struct area_of_Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct area_of_Rectangle r;
    r.length=10;
    r.breadth=16;
    cout<<"area is: "<<r.length * r.breadth <<endl;
    return 0;
}


