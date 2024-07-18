#include <iostream>
#include <cstdlib>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *arr;
};
void create(struct Stack *st) // call by reference
{
    cout<<"enter the size: "<<endl;
    cin>>st->size;
    st->top=-1;
    st->arr=(int*)malloc(st->size*sizeof(int));
}
void display(struct Stack st) // call by value
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        cout<<st.arr[i]<<" ";
    }
    cout<<endl;
}
void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
    {
        cout<<"stack overflow"<<endl;
    }    
    else
    {
        st->top++;
        st->arr[st->top]=x;        
    }
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        x=st->arr[st->top];
        st->top--;
    }
    return x;
}                                                   
int isEmpty(struct Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    return 0;
}
int StackTop(struct Stack st)
{
    if(st.top==-1)
    {
        return -1;
    }
    else
    {
        return st.arr[st.top];
    }
}
int peek(struct Stack st,int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
    {
        cout<<"invalid position"<<endl;
    }
    else{
        x=st.arr[st.top-pos+1];
    }
    return x;
}

int main()
{
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50); // for more than 5 inputs,we get stack overflow
    cout<<pop(&st)<<endl;
    cout<<pop(&st)<<endl; 
    cout<<pop(&st)<<endl;
    cout<<pop(&st)<<endl;
    cout<<pop(&st)<<endl;
    cout<<pop(&st)<<endl; // here we will get the output as stack underflow
    cout<<"**"<<endl;
    
    push(&st,10);
    cout<<peek(st,0)<<endl;
    cout<<"**"<<endl;
    cout<<isEmpty(st)<<endl;
    cout<<"**"<<endl;
    cout<<isFull(st)<<endl;
    cout<<"**"<<endl;
    cout<<StackTop(st)<<endl;
    cout<<"**"<<endl;
    return 0;
}