//self refrencial structure

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
    emp obj1,obj2,obj3;
    //printf("%d\n",sizeof(emp));
    obj1.empid=1;
    strcpy(obj1.empname,"khana");
    obj1.sal=50.50;
    obj1.next=&obj2;

    obj2.empid=2;
    strcpy(obj2.empname,"krishna");
    obj2.sal=60.50;
    obj2.next=&obj3;

    obj3.empid=3;
    strcpy(obj3.empname,"ashish");
    obj3.sal=70.50;
    obj3.next=NULL;

    //printf("%s\n",obj1.next->empname);
    
    struct employee *head=&obj1;             //address of obj 1

    printf("%d\n",obj2.next->empid);
    printf("%s\n",obj2.next->empname);
    printf("%f\n",obj2.next->sal);

    printf("%d\n",obj1.next->empid);
    printf("%s\n",obj1.next->empname);
    printf("%f\n",obj1.next->sal);
    
    printf("%d\n",head->empid);
    printf("%s\n",head->empname);
    printf("%f\n",head->sal);








}