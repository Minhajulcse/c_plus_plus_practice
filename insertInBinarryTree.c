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

tree * insert(tree * root , int data) {

    if(root == NULL) {
        tree * temp = createNewNode(data);
        printf("%d insertion succesfull.\n",data);
        return temp;
    }




    tree * head = root;
    tree * prev = NULL;
    while(root != NULL) {
        prev = root;
        if(data == root -> data) {
            printf("Can't insert %d, because it's already inserted.\n", data);
            return head;
        }
        else if(data > root -> data) {
            root = root -> right;
        }
        else root = root -> left;
    }
    tree * node = createNewNode(data);
    if(data < prev -> data) {
        prev -> left = node;
    }
    else prev -> right = node;
    printf("%d insertion succesful.\n",data);
    return head;
}




/*

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

    */

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
    root = insert(root,1);
    root = insert(root,15);
    root = insert(root,5);
    InOrderTraversar(root);
}