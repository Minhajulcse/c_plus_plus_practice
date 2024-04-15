// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node * left;
    struct node* right;
}node;

void preOrder(node * root) {
    if(root != NULL) {
        printf("%d ",root -> data);
        preOrder(root->left);
        preOrder(root -> right);
    }
}

node * CreateNewNode(int data) {
    node * temp = (node*)malloc(sizeof(node));
    temp -> data = data;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

int main() {
    //create all nodes
    node * p = CreateNewNode(4);
    node * p1 = CreateNewNode(1);
    node * p2 = CreateNewNode(6);
    node * p3 = CreateNewNode(5);
    node * p4 = CreateNewNode(2);
    
    /*
           4
         /  \
       1     6
      / \ 
    5    2
    */
    
    //link all nodes
    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    
    // print the tree using preorder travarsal
    
    preOrder(p);
    
    

    return 0;
}