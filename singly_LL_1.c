
#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int id;
    float ht;
    struct student *next;
}std;

void main(){
    std *head=NULL;
    std *newnode=(std *)malloc(sizeof(std));
    newnode->id=1;
    newnode->ht=6.7;
    newnode->next=NULL;
    head=newnode;

    newnode=(std *)malloc(sizeof(std));
    newnode->id=2;
    newnode->ht=4.5;
    newnode->next=NULL;
    head->next=newnode;

    newnode=(std *)malloc(sizeof(std));
    newnode->id=3;
    newnode->ht=8.9;
    newnode->next=NULL;
    head->next->next=newnode;

    std *temp=head;
    while(temp !=NULL){
        printf("%d\n",temp->id);
        printf("%f\n",temp->ht);
        temp=temp->next;
    }

}