// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

typedef struct stack{
    int size;
    int top;
    char * ch;
}stack;

int isEmpty (stack *p){
    if(p -> top == -1){
        return 1;
    }
    return 0;
}

int isFull (stack *p){
    if(p -> top = p -> size - 1){
        return 1;
    }
    return 0;
}

void push(stack *p, char value){
    p -> ch[p -> top++] = value;
}

void pop(stack *p){
    p -> top--;
}

int parenthesisMatch(char *exp) {
    stack *p = (stack*) malloc(sizeof(stack));
    p -> size = strlen(exp);
    p -> top = -1;
    p -> ch = (char*)malloc(p -> size *sizeof(char*));
    
    for(int i = 0; exp[i] != '\0'; i++){
        if(exp[i] == '(') {
            push(p,exp[i]);
        }
        else if(exp[i] == ')') {
            if(isEmpty(p)) {
                return 0;
            }
            pop(p);
        }
    }
    return isEmpty(p);
}

int main() {
    char *exp = ")((2*4))";
    if(parenthesisMatch(exp)){
        printf("Parenthesis is matched\n");
    }else {
        printf("Parenthesis is not matched\n");
    }

    return 0;
}