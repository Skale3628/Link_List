//structure pointer

#include<stdio.h>

struct movie{
    char mname[10];
    int count;
    float rating;

} obj1={"drishyam",2,8.8};

void main(){
    typedef struct movie mv;
    mv obj2={"kantara",10,9.9};

    struct movie *ptr1=&obj1;
    mv *ptr2=&obj2;

    //Access

    printf("%s\n",(*ptr1).mname);
    printf("%d\n",(*ptr1).count);
    printf("%f\n",(*ptr1).rating);

    printf("\nAccessing obj with another way \n");

    printf("%s\n",ptr2->mname);
    printf("%d\n",ptr2->count);
    printf("%f\n",ptr2->rating);

}