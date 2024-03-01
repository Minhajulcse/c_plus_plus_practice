// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    int size;
    int top;
    char * ch;
}stack;

int StackTop (stack * sp) {
    return sp -> ch[sp -> top];
}

int isOperator (char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') return 1;
    return 0;
}

int precedence (char ch){
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return 0;
}

void push (stack * sp, char ch) {
    sp -> top ++;
    sp -> ch[sp -> top] = ch;
}

char pop (stack * sp) {
    char ans = sp->ch[sp->top];
    sp -> top -= 1;
    return ans;
}

int isEmpty(stack * sp){
    if(sp -> top == -1 ) return 1;
    return 0;
}

char * InfixToPostfix (char * Infix) {
    stack * sp = (stack*)malloc(sizeof(stack));
    sp -> size = 10;
    sp -> top = -1;
    sp -> ch = (char*)malloc(sp->size * sizeof(char));
    char * postfix = (char*)malloc((strlen(Infix)+1) * sizeof(char));
    int i = 0; // Track infinix 
    int j = 0; // Track Postfix
    while(Infix[i] != '\0'){
        if(!isOperator(Infix[i])){
            postfix[j++] = Infix[i++];
        }
        else{
            if(precedence(Infix[i]) > precedence(StackTop(sp))) {
                push(sp,Infix[i]);
                i++;
            }
            else {
                postfix[j++] = pop(sp);
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j++] = pop(sp);
    }
    postfix[j] = '\0';
    return postfix;
}

int main() {
    char * exp = "A+B*C-D";
    printf("Postfix is %s \n", InfixToPostfix(exp));

    return 0;
}