#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#include "AVL.h"

// ���� ���
int height(struct AVL_Node* N) {
    if (N == NULL)
        return 0;
    return N->height;
}

// AVL ����
struct AVL_Node* AVL_create_node(int key) { // ��� ����
    struct AVL_Node* node = (struct AVL_Node*)malloc(sizeof(struct AVL_Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return (node);
}

// ������ ȸ��
struct AVL_Node* rightRotate(struct AVL_Node* y) {
    struct AVL_Node* x = y->left;
    struct AVL_Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// ���� ȸ��
struct AVL_Node* leftRotate(struct AVL_Node* x) {
    struct AVL_Node* y = x->right;
    struct AVL_Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// �뷱�� ���� (-1, 0, 1) �̸� ȸ�� x
int getBalance(struct AVL_Node* N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}


int AVL_insert_node(struct AVL_Node** root, struct AVL_Node* new_node) { // ��� ����
    if (*root == NULL)
        return (new_node->key);

    if (new_node->key < *root)
        (*root)->left = insertNode((*root)->left, new_node->key);
    else if (*root > new_node->key)
        (*root)->right = insertNode((*root)->right, new_node->key);
    else
        return root;

    (*root)->height = 1 + max(height((*root)->left), height((*root)->right));

    int balance = getBalance(root);
    if (balance > 1 && new_node->key < (*root)->left->key)
        return rightRotate(root);

    if (balance < -1 && new_node->key >(*root)->right->key)
        return leftRotate(root);

    if (balance > 1 && new_node->key > (*root)->left->key) {
        (*root)->left = leftRotate((*root)->left);
        return rightRotate(root);
    }

    if (balance < -1 && new_node->key < (*root)->right->key) {
        (*root)->right = rightRotate((*root)->right);
        return leftRotate(root);
    }

    return root;
}

void AVL_print_keys_preorder(struct AVL_Node* root) { // ���� ��ȸ ���
    if (root != NULL) {
        printf("%d\t", root->key); // Ű�� ���
        AVL_print_keys_Preorder(root->left); // ���� ����Ʈ���� �̵�
        AVL_print_keys_Preorder(root->right); // ������ ����Ʈ���� �̵�
    }
}