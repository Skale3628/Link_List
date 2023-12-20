//Singly linked list  
//as this approach is not recomended for large no of nodes

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
};

void main(){
    struct node *head=NULL;
    
    //first node....
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=10;
    newnode->next=NULL;

    //connecting the node....
    head=newnode;

    //second node....
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=20;
    newnode->next=NULL;

    //connecting second node.....
    head->next=newnode;

    //third node.....
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=30;
    newnode->next=NULL;

    //connecting third node.....
    head->next->next=newnode;

    struct node *temp=head;
    while(temp->next !=NULL){                           //if we write (temp->next !=NULL) then it will return data of only two nodes ex. 10,20 
        printf("%d\n",temp->data);                     //so we have to write (temp !=NULL) this will print data of all nodes ex.10,20,30     
        temp=temp->next;
    }
}