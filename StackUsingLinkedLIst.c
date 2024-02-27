// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int data;
    struct stack * next;
}stack;

int isFull(stack *top){
    stack * p = (stack*)malloc(sizeof(stack));
    if(p == NULL){
        return 1;
    }else {
        return 0;
    }
}

int isEmpty(stack * top){
    if(top == NULL){
        return 1;
    }else {
        return 0;
    }
}

stack * push(stack *top, int value){
    if(isFull(top)){
        printf("Stack Overflow!\n");
    }else{
        stack *p = (stack*)malloc(sizeof(stack));
        p -> data = value;
        p -> next = top;
        return p;
    }
}

stack * pop(stack *top){
    if(isEmpty(top)){
        printf("Stack Underflow!\n");
        return top;
    }else{
        stack * p = top;
        top = top -> next;
        printf("Popped %d from the stack.\n",p-> data);
        free(p);
        return top;
    }
}

void print(stack * top){
    while(top != NULL){
        printf("%d\n",top -> data);
        top = top -> next;
    }
}

int main() {
    stack * top = NULL;
    top = push(top,2);
    top = push(top,3);
    top = push(top,4);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    print(top);
    
    return 0;
}