#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{
    int empid;
    char empname[20];
    float sal;
    struct employee *next;
}emp;

void main(){
    emp obj1;
    emp *head=&obj1;
    //obj1.empid=1;
    head->empid=1;
    strcpy(head->empname,"kanha");
    head->sal=56789;
    head->next=obj2;

    obj.next->empid=1;    
    //another way to initialize values with pionters only 
    head->next->empid=1;

}