#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

node * insert_beg(node* h,int num){
    node *new;
    new=(node*)malloc(sizeof(node*));
    new->data=num;
    if (h==NULL){
        new->next = NULL;
        h=new;
    }
    else{
        new->next=h;
        h=new;
    }
    return h;
    
}

node* insert_end(node* h,int num)
{
    node *ptr,*temp,*newNode;
    newNode = (node*)malloc(sizeof(node*));
    // int num; printf("Enter the number: ");
    // scanf("%d",&num);
    newNode->data=num;
    newNode->next=NULL;
    if(h==NULL){
        h=newNode;
        return h;
    }
    else{
        temp=h;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
        return h;
    }
}

void printll(node* h){
    node* temp = h;
    while(temp!=NULL){
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main()
{
    node* h,*p,*q,*temp;
    p = (node*)malloc(sizeof(node));
    q = (node*)malloc(sizeof(node));
    h=p;p->next = q;
    q->next = NULL;
    temp=h;

    p->data = 6;
    q->data = 5;
    printll(h);
    h = insert_beg(h,10);
    printll(h);
    h = insert_end(h,15);
    printll(h);
    return 0;
}