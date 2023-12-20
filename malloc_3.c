//creating objects(emp1,2,3) with pointer in malloc 

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

    printf("%d\n",emp1->empid);
    printf("%s\n",emp1->empname);
    printf("%f\n",emp1->sal);

     printf("\n");

     printf("%d\n",emp2->empid);
    printf("%s\n",emp2->empname);
    printf("%f\n",emp2->sal);

     printf("\n");

     printf("%d\n",emp3->empid);
    printf("%s\n",emp3->empname);
    printf("%f\n",emp3->sal);
     
     printf("\nend of structure employeee \n");

    
}
