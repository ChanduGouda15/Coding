#include<iostream>
using namespace std;
struct rectangle{

int length;
int breadth;
};
void ChangeLength(struct rectangle *p,int l)
{
    p->length=l;
}
int main()
{
    struct rectangle r={10,5};
    ChangeLength(&r,20);
    cout<<"Area is: "<<r.length * r.breadth << endl;

}