#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data)
{
    struct Node* newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
};
void perorder(struct Node* root)
{
    if(root != NULL)
    {
        printf("%d", root->data);
        perorder(root->left);
        perorder(root->right);
    }
}
void Inorder(struct Node* root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d",root->data);
        Inorder(root->right);
    }
}
void postorder(struct Node* root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
void main()
{
    struct Node* root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("perorder : ");
    perorder(root);

    printf("\nInorder : ");
    Inorder(root);

    printf("\npostorder : ");
    postorder(root);

}
