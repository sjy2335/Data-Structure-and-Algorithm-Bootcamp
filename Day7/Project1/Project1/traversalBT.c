#include <stdio.h>
#include <stdlib.h>
#include "traversalBT.h"

// data is parant node
// Allocate data dynamically, and assume that leftNode and rightNode were already assigned
// then, return data
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
	treeNode* new = (treeNode*)malloc(sizeof(treeNode));
	new->data = data;
	new->left = leftNode;
	new->right = rightNode;
}

// Preorder traversal: -*AB/CD
void preorder(treeNode* root) {
	if (root) {
		printf("(");
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
		printf(")");
	}
}

// Inorder traversal: A*B-C/D
void inorder(treeNode* root) {
	if (root) {
		printf("(");
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
		printf(")");
	}
}

// Postorder traversal: AB*CD/-
void postorder(treeNode* root) {
	if (root) {
		printf("(");
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
		printf(")");
	}
}