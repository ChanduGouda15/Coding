#include<iostream>
#include<cstdlib>
using namespace std;
struct Stack
{
    int data;
    struct Stack *next;
};
struct Stack *top=NULL;
void push(int x)
{
    struct Stack *t;
    t=(struct Stack*)malloc(sizeof(struct Stack));
    if(t==NULL)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
void pop()
{
    struct Stack *t;
    int x=-1;
    if(t==NULL)
    {
        cout<<"stack is full";
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
}
int peek(int pos)
{
    struct Stack *t;
    int x=-1;
    t=top;
    for(int i=0;t!=NULL&&i<pos-1;i++)
    {
        t=t->next;
    }
    if(t!=NULL)
    {
        return t->data;
    }
    else
    {
        return -1;
    }
}
void display()
{
    struct Stack *t=top;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    cout<<"**"<<endl;
    pop();
    display();
    cout<<"**"<<endl;
    cout<<peek(3);
    return 0;
}
