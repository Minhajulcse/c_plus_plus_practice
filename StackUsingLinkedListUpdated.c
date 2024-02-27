// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int data;
    struct stack * next;
}stack;

    stack * top = NULL;

int isEmpty(){
    if(top == NULL) return 1;
    return 0;
}

int isFull(){
    stack * p = (stack*)malloc(sizeof(stack));
    if(p == NULL){
        return 1;
    }
    else{
        free(p);
        return 0;
    }
}

void push(int value){
    if(isFull()){
        printf("Stack Overflow!\n");
        return;
    }
    stack * p = (stack*)malloc(sizeof(stack));
    p -> data = value;
    p -> next = top;
    top = p;
    
}

void pop(){
    if(isEmpty()){
        printf("Stack Underflow!\n");
        return ;
    }
    int val = top -> data;
    stack * p = top;
    top = top -> next;
    free(p);
    printf("Popped %d from the stack\n",val);
}

void peek(int pos){
    stack *p = top;
    for(int i = 0; (i < pos - 1 && p != NULL); i++){
        p = p -> next;
    }
    if(p == NULL){
        printf("Invalid postion\n");
    }else {
        printf("Value at position %d is %d\n",pos,p->data);
    }
    
}

void head(){
    if(top == NULL){
        printf("Stack is Empty!\n");
        return ;
    }
    printf("Value at top position is %d\n",top->data);
}

void Buttom(){
    if(top == NULL){
        printf("Stack is Empty!\n");
        return ;
    }
    stack * p = top;
    while(p -> next != NULL){
        p = p -> next;
    }
    printf("Value at Buttom position is %d\n",p -> data);
}

void print(){
    stack *p = top;
    while(p != NULL){
        printf("%d\n",p -> data);
        p = p->next;
    }
}

int main() {
    push(100);
    push(200);
    print();
    peek(3);
    head();
    Buttom();
    
    return 0;
}