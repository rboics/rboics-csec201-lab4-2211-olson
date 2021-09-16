#include "binary_search_tree.h"

int rng(long input);
int* fill_heap(void);

void sort_heap(int *heap_begin);
unsigned long get_offset(int *begin, int *middle);
char *get_path(unsigned long offset);


// A pseudo random number generator
int rng(long input){
    int min = 50000;
    int max = 100000;
    int random = (input*90012 + 120457)%max;
    if(random < min){
        random += min;
    }
    return random;
}
// Elements are initialized and stored in heap
int* fill_heap(){
    int *heap_begin = (int *)malloc(sizeof(int)*LENGTH);
  
    int seed = 1;
    for(int i=0; i<LENGTH; i++){
        int random =  rng(seed);
        *(heap_begin+i) = random;
        seed = random;
    }   
    return heap_begin;
}


int main(){
    
    int *heap_begin = fill_heap();

    //1. get the address of 78405
    

    //2. get the paths
    

    //3. sort heap

    //4. construct binary tree
 

    //inorder_traversal(bst); //display elements in sorted order

    //5. free heap

    //6. search the first half of password
    

    //7. search the second half
    

    //8. print the pwd 

    return 0;
}


