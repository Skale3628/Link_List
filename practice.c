#include<stdio.h>
#include<stdlib.h>

struct deno{
    int data;
    struct demo *next;
};

struct demo *head=NULL;

struct demo* createnode(){
    struct demo *newnode=(struct demo*)malloc(sizeof(struct demo));
    printf("enter data:\n");
    scanf("%d\n",&newnode->data);
    newnode->next=NULL;
    return newnode;
}

void addnode(){
    struct demo *newnode=createnode();
    if(head==NULL){
        head=newnode;
    }else{
        struct demo *temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void addfirst(){
    struct demo *newnode=createnode();
    if(head==NULL){
        head=newnode;
    }else{
        newnode->next=head;
        head=newnode;
    }
}

void addAtPos(int pos){
    
    struct demo *newnode=createnode();
    struct demo *temp=head;
    while(pos-2){
        temp=temp->next;
        pos--;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void printll(){
    struct demo *temp=head;
    while(temp !=NULL){
        printf("|%d|",temp->data);
        temp=temp->next;
    }
}

void main(){
    int countnode;
    printf("enter the node to add:\n");
    scanf("%d\n",&countnode);

    for(int i=1;i<=countnode;i++){
        addnode();
    }
    printll();
    addfirst();
    printll();

    int pos;
    printf("enter position to add node:\n");
    scanf("%d",&pos);
    addAtPos(pos);
     printll();


}