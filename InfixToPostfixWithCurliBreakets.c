// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stk{
    int size;
    int top;
    char * ar;
}stk;
stk * stack;

char peek() {
    if(stack -> top == -1){
        return -1;
    }
    return stack -> ar[stack-> top];
}
void push(char ch) {
    stack -> ar[++stack -> top] = ch;
}

char pop() {
    char ch = stack -> ar[stack -> top];
    stack -> top --;
    return ch;
}

int isOperand (char ch) {
    if(ch >= 'A' && ch <= 'Z') return 1;
    return 0;
}

int precedence (char ch) {
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return -1;
}

void InfixToPostfix(char * infix) {
    int i = 0;
    while(infix[i] != '\0') {
        if(isOperand(infix[i])) {
            printf("%c", infix[i]);
        }
        else if(infix[i] == '('){
            push(infix[i]);
        }
        else if(infix[i] == ')') {
            while(peek() != '(') {
                printf("%c", pop());
            }
            pop();
        }
        else {
            while(precedence(peek()) >= precedence(infix[i])) {
                printf("%c", pop());
            }
            push(infix[i]);
        }
        i++;
    }
    while(stack -> top != -1) {
        printf("%c", pop());
    }
}

int main() {
    //initiliaze the stack
    stack = (stk*) malloc (sizeof(stk));
    stack -> size = 40;
    stack -> top = -1;
    stack -> ar = (char*) malloc(stack -> size * sizeof(stack));
    
    char exp[40];
    printf("Enter the infix ; ");
    scanf("%s", exp);
    
    InfixToPostfix(exp);

    return 0;
}