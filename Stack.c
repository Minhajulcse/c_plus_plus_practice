// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int size;
    int top;
    int * ar;
}stack;

int isEmpty(stack * ptr){
    if(ptr -> top == -1) return 1;
    return 0;
}

int isFull(stack * ptr){
    if(ptr -> top == ptr -> size - 1) {
        return 1;
    }
    return 0;
}

void push(stack * ptr, int value){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack.\n",value);
    }else{
        ptr -> top++;
        ptr -> ar[ptr -> top] = value;
    }
}

int pop(stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack.\n");
        return -1;
    }else{
        int value = ptr ->ar[ptr -> top--];
        return value;
    }
}

void print(stack * ptr){
    for(int i = 0; i <= ptr -> top; i++){
        printf("%d ",ptr -> ar[i]);
    }
    printf("\n");
}

int main() {
    stack * s = (stack*)malloc(sizeof(stack));
    s -> size = 5;
    s -> top = -1;
    s -> ar = (int*)malloc(s -> size* sizeof(int));
    
    push(s,1);
    print(s);
    
    push(s,2);
    print(s);
    
    push(s,3);
    print(s);
    
    push(s,4);
    print(s);
    
    push(s,5);
    print(s);
    
    push(s,6);
    print(s);
    
    printf("Popped %d from the stack\n",pop(s));
    print(s);
    printf("Popped %d from the stack\n",pop(s));
    print(s);
    printf("Popped %d from the stack\n",pop(s));
    print(s);
    printf("Popped %d from the stack\n",pop(s));
    print(s);
    printf("Popped %d from the stack\n",pop(s));
    print(s);
    printf("Popped %d from the stack\n",pop(s));
    print(s);
    
    push(s,10);
    print(s);
    
    push(s,12);
    print(s);
    printf("Popped %d from the stack\n",pop(s));
    print(s);

    return 0;
}