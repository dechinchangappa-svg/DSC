#include <stdio.h>
#include <stdlib.h>

struct treenode{
    int data;
    struct treenode *left;
    struct treenode *right;
};

struct treenode* createnode(int data){
    struct treenode *newnode=(struct treenode*)malloc(sizeof(struct treenode));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
   
}

struct treenode* insert(struct treenode* root, int data){
    if(root==NULL)
    return createnode(data);
   
    if(root->left==NULL)
    root->left=createnode(data);
   
    else if (root->right==NULL)
    root->right=createnode(data);
    else
    insert(root->left,data);
    return root;
}

void preorder_traversal(struct treenode* root){
    if(root !=NULL){
        printf("%d ",root->data);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

int main(){
    struct treenode* root=NULL;
   
    root=insert(root,10);
    insert(root,20);
    insert(root,30);
    insert(root,40);
    insert(root,50);
   
    printf("pre order traversal:");
    preorder_traversal(root);
    return 0;
}
