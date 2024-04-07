#include<iostream>
using namespace std;
struct Node{
    int data;
     Node *next;
};

struct Node *head = NULL;

void insert_node(int n){
    struct *newNode = new Node;
    new_Node -> data = n;
    new_Node -> next = head;
    head = new_Node;
}

void displaying_node()
{
    struct Node *temp=head;
    while(temp!=NULL{
        
        cout<<temp->data->" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    insert_node(10);
    insert_node(20);
    insert_node(30);
    insert_node(40);
    insert_node(50);
    displaying_node();
    return 0;
}