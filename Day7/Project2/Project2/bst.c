#include "bst.h"

#include <stdio.h>
#include <stdlib.h>

void inorder(treeNode* root) {
  if (root) { // root가 null이 아닐 때까지, 
	  inorder(root->left); // root->left로 이동시켜서 inorder 재귀적으로 실행
	  printf("%d ", root->key);
	  inorder(root->right);
  }
}

// Search x from BST, return node which has x
// Otherwise, return NULL
treeNode* find(treeNode* root, element x) {
	if (!root) return NULL;
	if (x == root->key) return root;
	if (x < root->key) {
		return find(root->left, x);
	}
	else {
		return find(root->right, x);
	}
}

// Insert x, check p->key
// If x already exists, do not insert
treeNode* insert(treeNode* root, element x) {
	treeNode* new = (treeNode*)malloc(sizeof(treeNode));
	new->key = x;
	new->left = NULL;
	new->right = NULL;

	if (!root) {
		root = new;
		return root;
	}

	treeNode* tmp = root;
	treeNode* parent = NULL;
	while (tmp) {
		if (x == tmp->key) {
			printf("The node already exists.\n");
			return;
		}
		parent = tmp;
		if (x < tmp->key) tmp = tmp->left;
		else tmp = tmp->right;
	}

	if (x < parent->key) parent->left = new;
	else parent->right = new;
}

// Delete node which has key
// Will be a long~function
// if 1: key not found
// if 2: terminal node
// if 3: the node has one child
// if 4: the node has two children (solution chose successor from left tree)
void erase(treeNode* root, element key) {

	//First find parent and target node
	treeNode* tmp = find(root, key);
	treeNode* parent = findParent(root, key);

	// Can't find
	if (!tmp) {
		printf("Cannot find the node.\n");
		return;
	}

	// Both child exist
	else if (tmp->left && tmp->right)
	{
		treeNode* success = findSuccess(tmp->left);
		treeNode* SP = findParent(root, success->key);
		int sk = success->key;
		
		// When Recursively Calling "erase" with Leaf Node, Error Occurs.
		if (!success->left && !success->right) erase(SP, success->key);

		else erase(tmp->left, success->key);

		tmp->key = sk;
	}

	// Only one child exists
	else if (tmp->left || tmp->right)
	{
		if (tmp->left) {
			if (parent->left == tmp) parent->left = tmp->left;
			else parent->right = tmp->left;
		}
		else {
			if (parent->left == tmp) parent->left = tmp->right;
			else parent->right = tmp->right;
		}
		free(tmp);
	}

	// Child node X
	else {
		if (parent->left == tmp) parent->left = NULL;
		else parent->right = NULL;
		free(tmp);
	}
}


treeNode* findSuccess(treeNode* root) {
	treeNode* tmp = root;
	while (tmp->right != NULL) {
		tmp = tmp->right;
	}
	//printf("Success: %d\n", tmp->key);
	return tmp;
}

treeNode* findParent(treeNode* root, element key) {
	treeNode* tmp = root;
	treeNode* parent = NULL;
	while (tmp) {
		if (key == tmp->key) {
			break;
		}
		parent = tmp;
		if (key < parent->key) tmp = parent->left;
		else tmp = parent->right;
	}
	//printf("parent: %d\n", parent->key);
	return parent;
}