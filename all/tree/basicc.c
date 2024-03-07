#include <stdio.h>
#include <stdlib.h>
struct TreeNode {
    int key;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct TreeNode* createNode(int key) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct TreeNode* insert(struct TreeNode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}
struct TreeNode* findMin(struct TreeNode* node) {
    while (node->left != NULL)
        node = node->left;
    return node;
}
struct TreeNode* deleteNode(struct TreeNode* root, int k) {
    if (root == NULL)
        return root;
    if (k < root->key)
        root->left = deleteNode(root->left, k);
    else if (k > root->key)
        root->right = deleteNode(root->right, k);
    else {
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }
        struct TreeNode* temp = findMin(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        inorderTraversal(root->right);
        printf("%d ",root->key);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int keys[] = {1,2,3,4,5,6};
 

    for (   int i=0; i < 6; i++) {
        root = insert(root, keys[i]);
    }

    printf("In-order traversal of the BST: ");
    inorderTraversal(root);
    deleteNode(root,3);
    printf("\n");
    inorderTraversal(root);
    printf("\n");
    struct TreeNode* root1 = findMin(root);
    printf("%d",root1->key);
    return 0;
}
