
#include "binary_search_tree.h"

// Construct a binary search tree using a sorted array and returns it
struct treenode *make_bst(int *array, int length){
    struct treenode* root; 
    return make_bst_helper(root, array, 0, length-1);  
}

struct treenode* make_bst_helper(struct treenode *current, int *array, int start, int end){
    if(start > end){
        return NULL;
    }
    else{
        
        current = (struct treenode *)malloc(sizeof(struct treenode));
        int mid = floor((start + end)/2);
        current->value = array[mid];

        current->left = make_bst_helper(current->left, array, start, mid-1);

        current->right = make_bst_helper(current->right, array, mid+1, end);
        return current;
    }
}

// Returns a value stored in the node in the end of the tree path
// For example, if path = "000", the value stored in the left most node 
// at level 3 iwill be returned. 
// The root node resides at level 0, 
// the two children of the root is at level 1, 
// and so on.
int search_bst(struct treenode *root, char *path){
    return search_bst_helper(root, path, 0);
}

int search_bst_helper(struct treenode *current, char *path, int depth){
    if (current == NULL){
        printf("Error: path %s is too long!", path);
        return -1; 
    }

    if(depth == strlen(path)){
        return current->value;
    }
    else if(path[depth] == '0'){
        return search_bst_helper(current->left, path, depth+1);
    }
    else{
        return search_bst_helper(current->right, path, depth+1);
    }
}


void inorder_traversal(struct treenode *current){
    // Put your code here
}

// int main(){
//     // Put your code here
//     return 0;
// }



