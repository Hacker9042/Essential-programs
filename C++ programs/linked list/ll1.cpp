#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};


int main()
{
    struct node *head,*ptr,*ptr1,*ptr2,*temp;
    ptr= (struct node*) malloc(sizeof(struct node*));
    ptr1= (struct node*) malloc(sizeof(struct node*));
    ptr2= (struct node*) malloc(sizeof(struct node*));
    ptr->data=5;
    ptr->next=NULL;
    ptr1->data=10;
    ptr1->next=NULL;
    ptr2->data=15;
    ptr2->next=NULL;
    head=ptr;
    ptr->next=ptr1;
    ptr1->next=ptr2;

    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}