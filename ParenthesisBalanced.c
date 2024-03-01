// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    int size;
    int top;
    char * ch;
}stack;

int match(char a, char b) {
    if(a == '(' && b == ')') return 1;
    if(a == '[' && b == ']') return 1;
    if(a == '{' && b == '}') return 1;
    return 0;
}

int isEmpty (stack *s){
    if(s -> top == -1) return 1;
    return 0;
}

int isFull (stack * s) {
    if(s -> top == s-> size - 1) return 1;
    return 0;
}

void push(stack * s, char ch) {
    s -> top ++;
    s -> ch[s -> top] = ch;
}

char pop(stack *s ) {
    s -> top -= 1;
    return s -> ch[s ->top + 1];
}

int parenthesisMatch (char * exp ) {
    stack * s = (stack*)malloc(sizeof(stack));
    s -> size = strlen(exp);
    s -> top = -1;
    s -> ch = (char*)malloc(s->size * sizeof(char));
    for(int i= 0; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] == '[' || exp[9] == '{'){
            push(s,exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == ']' || exp[9] == '}'){
            if(isEmpty(s)){
                return 0;
            }
            if(!match( pop(s) , exp[i]) ){
                return 0;
            }
        }
    }
    return isEmpty(s);
}

int main() {
    char * exp = "(6+2)*{5-8}/{(6+6+0)}]";
    if(parenthesisMatch(exp)){
        printf("Parenthesis is balanced.\n");
    }
    else {
        printf("Parenthesis is not balanced\n");
    }

    return 0;
}