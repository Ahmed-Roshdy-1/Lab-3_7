#include "stack.h"


void createStack(Stack *ps){

   ps->top=0;

}


void push(EntryType e,Stack *ps){

  ps->entry[ps->top++]=e;

}


void pop(EntryType *pe,Stack *ps){

     *pe=ps->entry[--ps->top];



}


int EmptyStack(Stack *ps){

  return(ps->top==0);

}

int FullStack(Stack *ps){

 return(ps->top==max);

}
