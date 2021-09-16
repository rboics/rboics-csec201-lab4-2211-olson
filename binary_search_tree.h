#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define LENGTH 1023

struct treenode* make_bst_helper(struct treenode *current, int array[], int start, int end);
struct treenode *make_bst(int *array, int length);
int search_bst(struct treenode *current, char *path);
int search_bst_helper(struct treenode *current, char *path, int index);
void inorder_traversal(struct treenode *tree);

struct treenode{
    struct treenode *left;
    struct treenode *right;
    int value;
};