//to reduce redundancy we use function 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{
    int empid;
    char empname[20];
    float sal;
    struct employee *next;
}emp;

void accessdata(emp *ptr){
    printf("%d\n",ptr->empid);
    printf("%s\n",ptr->empname);
    printf("%f\n",ptr->sal);
    printf("%p\n",ptr->next);
}

void main(){
    emp *emp1=(emp *)malloc(sizeof(emp));
    emp *emp2=(emp *)malloc(sizeof(emp));
    emp *emp3=(emp *)malloc(sizeof(emp));

    //initialize

    emp1->empid=1;
    strcpy(emp1->empname,"kanha");
    emp1->sal=60.00;
    emp1->next=emp2;

    emp2->empid=2;
    strcpy(emp2->empname,"ashish");
    emp2->sal=70.00;
    emp2->next=emp3;

    emp3->empid=3;
    strcpy(emp3->empname,"rahul");
    emp3->sal=80.00;
    emp3->next=NULL;
    

    //Access
    accessdata(emp1);
    accessdata(emp2);
    accessdata(emp3);

    
}
