/* Online C Compiler and Editor */
#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
    int data;
    struct queue * next;
}queue;

queue * f = NULL;
queue * r = NULL;

void enqueue() {
    queue * temp = (queue*) malloc (sizeof(queue));
    if(temp == NULL) {
        printf("Queue is full.\n");
        return;
    }
    printf("Enter data : ");
    scanf("%d", &temp -> data);
    temp -> next = NULL;
    if(f == NULL) {
        f = r = temp;
    }
    else {
        r -> next = temp;
        r = temp;
    }
}

void dequeue () {
    if(f == NULL) {
        printf("Queue is Empty.\n");
    }
    else {
        queue * temp = f;
        f = f -> next;
        free(temp);
    }
}

void print() {
    printf("The value inside the queue : ");
    
    queue * temp = f;
    while(temp != NULL) {
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main()
{
    enqueue();
    enqueue();
    print();
    dequeue();
    print();

    return 0;
}