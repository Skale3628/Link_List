#include<stdio.h>
#include<stdlib.h>

struct demo{
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
   char choice;

   do{
    printf("1.addnode\n");
    printf("2.addfirst\n");
    printf("3.adAtPos\n");
    printf("4.printll\n");

    int ch;
    printf("enter choice:\n");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            addnode();
            break;
        case 2:
            addfirst();
            break;
        case 3:{
            int pos;
            printf("enter number:\n");
            scanf("%d",&pos);
            addAtPos(pos);
            }
            break;
        case 4:
            printll();
            break;
        default:
        printf("wrong choice\n");
    }
        getchar();
        printf("do you want to continue:\n");
        scanf("%c",&choice);
   }while(choice=='y'||choice=='Y');
}