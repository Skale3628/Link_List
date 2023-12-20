#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int id;
    float ht;
    struct student *next;
}stud;

stud *head=NULL;            //head is declared Global

void addnode(){
    stud *newnode=(stud *)malloc(sizeof(stud));
    newnode->id=1;
    newnode->ht=8.9;
    newnode->next=NULL;
    head=newnode;
    //return head;
}
void printLL(){
    stud * temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->id);
        printf("%f\n",temp->ht);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    addnode();
    printLL();
    
}