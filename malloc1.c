#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr1=(int *)malloc(sizeof(int));   //malloc
    *ptr1=50;
    printf("%d\n",*ptr1);
}











