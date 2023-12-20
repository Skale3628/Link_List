//example of ott platform using malloc 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct prime{
    char moviename[50];
    int subs;
    float amount;
};
void main(){
    struct prime *cptr=(struct prime *)malloc(sizeof(struct prime));

    strcpy(cptr->moviename,"Animal");
    cptr->subs=12;
    (*cptr).amount=150.20;

    printf("Movie name = %s\n",cptr->moviename);
    printf("no of subscribers = %d\n",cptr->subs);
    printf("total amount  = %f\n",(*cptr).amount);
}


