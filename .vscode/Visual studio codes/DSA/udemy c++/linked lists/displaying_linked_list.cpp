#include<iostream>
using namespace std;
struct Node{
    int num;
    struct Node *next;
};

struct Node *head = NULL;

void insert_node(int n){
    struct Node *new_Node = new Node;
    new_Node->num = n;
    new_Node->next = head;
    head = new_Node;
}

void displaying_nodes()
{
    struct Node *temp=head;
    while(temp!=NULL){
        
        cout<<temp->num<<" ";
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
    displaying_nodes();
    return 0;
}