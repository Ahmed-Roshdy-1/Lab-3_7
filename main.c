#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    int group_id,section_code,group_code;

    Stack s1,s2,s3;
    createStack(&s1);
    createStack(&s2);
    createStack(&s3);

    while(!FullStack(&s1)&&group_id!=0){
        printf("\nEnter group_id : ");
        scanf("%d",&group_id);
    if(group_id!=0)
        push(group_id,&s1);


    }

    while(!FullStack(&s2)&&!FullStack(&s3)&&!EmptyStack(&s1)){
        pop(&group_id,&s1);
        section_code=group_id/10;
        push(section_code,&s2);
        group_code=group_id%10;
        push(group_code,&s3);
    }
    while(!EmptyStack(&s2)||!EmptyStack(&s3)){
        pop(&section_code,&s2);
        printf("section code is %d\t",section_code);
        pop(&group_code,&s3);
        printf("group code is %d\n",group_code);

    }


    return 0;
}
