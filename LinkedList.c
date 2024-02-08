// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node * insertAtHead(struct node* head, int data){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = head;
    head = ptr;
    return head;
}
//insertAtEnd function is  working in only 2nd to last position's node, 
struct node * insertAtIndex (struct node * head , int data, int position){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    struct node * temp = head;
    int i = 1;
    while(i != position - 1 ){
        temp = temp -> next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = temp -> next;
    temp -> next = ptr;
    return head;
}

struct node * insertAtEnd(struct node* tail, int data){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    
    tail -> next = ptr;
    ptr -> next = NULL;
    tail = ptr;
    return tail;
}

void print(struct node * head){
    while(head != NULL){
        printf("%d ",head -> data);
        head = head -> next;
    }
}

int main() {
    struct node * node1 = (struct node*)malloc(sizeof(struct node));
    node1 -> data = 5;
    node1 -> next = NULL;
    struct node* head = node1;
    struct node* tail = node1;
    printf("Before insert element at first position -> \n");
    print(head);
    head = insertAtHead(head,2);
    printf("\nAfter insert element in first position -> \n");
    print(head);
    tail = insertAtEnd(tail,7);
    printf("\nAfter insert element in the last position -> \n");
    print(head);
    tail = insertAtEnd(tail,9);
    printf("\nAfter insert element in the last position -> \n");
    print(head);
    tail = insertAtEnd(tail,10);
    printf("\nAfter insert element in the last position -> \n");
    print(head);
    head = insertAtHead(head,1);
    printf("\nAfter insert element in the first position -> \n");
    print(head);
    head = insertAtIndex(head,3,3);
    printf("\nAfter insert element in the 3rd position -> \n");
    print(head);
    head = insertAtIndex(head,4,4);
    printf("\nAfter insert element in the 4th position -> \n");
    print(head);
    head = insertAtHead(head,0);
    printf("\nAfter insert element in the first position -> \n");
    print(head);
    tail = insertAtEnd(tail,50);
    printf("\nAfter insert element in the last position -> \n");
    print(head);
    
    

    return 0;
}
