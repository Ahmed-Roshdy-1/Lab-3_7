#define max 10

typedef int EntryType;

typedef struct {

    int top;

    EntryType entry[max];


}Stack;

void createStack(Stack *ps);

void push(EntryType e,Stack *ps);

void pop(EntryType *pe,Stack *ps);

int FullStack(Stack *ps);

int EmptyStack(Stack *ps);
