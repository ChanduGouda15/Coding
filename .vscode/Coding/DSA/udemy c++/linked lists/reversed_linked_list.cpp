#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
struct Node *head = NULL;
void inserting_node(int n)
{
    struct Node *newnode = new Node;
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}
void reverse_node(){
    Node *current=head;
    Node *prev=NULL;
    Node *next=NULL;
    while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    }
    head=prev;
}
void displaying_nodes()
{
    struct Node *temp;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    inserting_node(1);
    inserting_node(2);
    inserting_node(3);
    inserting_node(4);
    inserting_node(5);
    cout<<"original linked list: "<<endl;
    displaying_nodes();
    cout<<"reversed linked list: "<<endl;
    reverse_node();
    displaying_nodes();
    return 0;
}