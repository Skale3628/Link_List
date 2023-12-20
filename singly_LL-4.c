//count

#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
    char name[20];
    int id;
    struct employee *next;
}emp;

emp *head=NULL;

void addnode(){
    emp *newnode=(emp *)malloc(sizeof(emp));

    getchar();

    printf("Enter the Employee Name : ");
    char ch;
    int i=0;
    while((ch=getchar())!='\n'){
        (*newnode).name[i]=ch;
        i++;

    }

    printf("enter id:\n");
    scanf("%d\n",&newnode->id);
    newnode->next=NULL;
     
    if (head==NULL){
        head=newnode;
    }else{
        emp *temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void countnode(){
    emp *temp=head;
    int count=0;
    while(temp !=NULL){
        count++;
        temp=temp->next:    
        }
        printf("count=%d\n",count);
}
void printLL(){
    emp *temp=head;
    while(temp !=NULL){
        printf("%s\n",temp->name);
        printf("%d\n",temp->id);
        temp=temp->next;
    }
}
void main(){
    int nodecount;
    printf("enter node count:\n");
    scanf("%d\n",&nodecount);

    for(int i=1;i<=nodecount;i++){
        addnode();
    }
    printLL();
    countnode();
}