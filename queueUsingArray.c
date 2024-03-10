// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
    int size;
    int f;
    int r;
    int * ar;
}queue;

int isEmpty(queue * q) {
    if(q -> r == q -> f) return 1;
    return 0;
}

int isFull (queue * q) {
    if(q -> r == q -> size - 1) return 1;
    return 0;
}

void enqueue(queue * q, int value) {
    
    if(isFull(q)) {
        printf("Queue is Full.\n");
        return;
    }
    q -> ar[++q -> r] = value;
}

void dequeue (queue * q ) {
    
    if(isEmpty(q)) {
        printf("Queue is empty.");
        return ;
    }
    q -> f++;
}

void print(queue * q ){
    for(int i = q -> f + 1; i <= q -> r; i++) {
        printf("%d ", q -> ar[i]);
    }printf("\n");
}

int main() {
    
    queue * q = (queue*) malloc(sizeof(queue));
    q -> size = 2;
    q -> f = q -> r = -1;
    q -> ar = (int*)malloc(q-> size * sizeof(int));
    
    
    
    enqueue(q,23);
    print(q);
    
    enqueue(q,56);
    print(q);
    
    dequeue(q);
    print(q);
    
    enqueue(q,34);
    print(q);
    
    
    
    
    
    
    return 0;
}