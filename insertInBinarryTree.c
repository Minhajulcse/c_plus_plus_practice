#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node * left;
    struct node * right;
}tree;

tree * createNewNode (int data) {
    tree * temp = (tree*)malloc(sizeof(tree));
    temp -> data = data;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

tree * insert(tree * root, int data) {

    if(root == NULL) {
       return createNewNode(data);
    }
    if(data > root -> data) {
        root -> right = insert(root->right,data);
    }
    else root -> left = insert(root->left,data);

    return root;
}

void InOrderTraversar(tree * root) {
    if(root != NULL) {
        InOrderTraversar(root->left);
        printf("%d ", root->data);
        InOrderTraversar(root->right);
    }
}




int main() {

    tree * root = NULL;
    root = insert(root,1);
    root = insert(root,2);
    root = insert(root,5);
    root = insert(root,10);
    root = insert(root,100);
    root = insert(root,12);
    InOrderTraversar(root);
}