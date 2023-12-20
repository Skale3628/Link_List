//Addfirst


#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
    char name[20];
    int id;
    struct employee *next;
}emp;

emp *head=NULL;

emp* createnode(){
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
    return newnode;
}

void addnode(){   
    emp *newnode=createnode();  
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
        temp=temp->next; 
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

void addfirst(){
    emp *newnode=createnode();
    if(head==NULL){
        head=newnode;
    } else{
        newnode->next=head;
        head=newnode;    } 
}

void addATPos(int pos){
    emp *newnode=createnode();
    emp *temp=head;
    while(pos-1){
        temp=temp->next;
        pos--;
    }
    newnode->next=temp->next;
    temp->next=newnode;

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
    addfirst();
    printLL();
    printf("enter pos to add node\n");
    scanf("%d\n",&pos);
    addATPos(pos);
    printLL();
}