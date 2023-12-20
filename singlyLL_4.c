//get vakues

#include<stdio.h>
#include<stdlib.h>

typedef struct movie {
    char moviename[19];
    float rating;
    struct movie *next;
}mov;

void main(){
    addnode;
    addnode;
    addnode;
     printLL;
}
mov *head=NULL;

void addnode(){
    mov *newnode=(mov *)malloc(sizeof(mov));
    printf("enter movie name->\n");
    fgets(newnode->moviename,19,stdin);

    printf("enter movie rating\n");
    scanf("%f\n",newnode->rating);

    getchar();
    newnode->next=NULL;

    if (head==NULL){
        head=newnode;
    }else{
        mov *temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void printLL(){
    mov *temp=head;
    while(temp !=NULL){
        printf("%s\n",newnode->moviename);
        printf("%f\n",newnode->rating);
        temp=temp->next;
    }
}

