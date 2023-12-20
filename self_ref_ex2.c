//example2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct batsman{
    int jerno;
    char name[30];
    float avg;
    struct batsman *next;
}bat;

void main(){
   bat obj1;
   bat *head=&obj1;
   head->jerno=07;
   strcpy(head->name,"dhoni");
   head->avg=200.3;
   head->next=NULL;

   printf("%d\n",head->jerno);
   printf("%s\n",head->name);
   printf("%f\n",head->avg);
   
}