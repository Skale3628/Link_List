#include<stdio.h>
#include<stdlib.h>
//void* malloc(size_t);

typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}node;

node *head=NULL;

node* createnode(){
    node *newnode=(node *)malloc(sizeof(node));
    newnode->prev=NULL;
    printf("enter data:\n");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    return newnode;
}

void addnode(){
    node *newnode=createnode();
    if (head==NULL){
        head=newnode;
    }else{

    }
}

void printDLL(){
    node *temp=head;
    while(temp !=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("|%d|",temp->data);

}

void main(){
    int countnode();
    printf("enter node couny:\n");
    scanf("%d",&countnode);
    for(int i=1;i<=countnode;i++){
        addnode();
    }
    printDLL();

}