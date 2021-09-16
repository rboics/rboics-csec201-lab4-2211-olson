#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct linkedlist *initialize();
void add(struct linkedlist* list, int value);
void print_list(struct linkedlist *list);

struct node{
    int data;
    struct node *next;
};

struct linkedlist{
    int size;
    struct node *head;
};

struct linkedlist *initialize(){
    struct linkedlist* list = malloc(sizeof(struct linkedlist));
    list->size = 0;
    list->head = NULL;
    return list;
}

void add(struct linkedlist* list, int value){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = list->head;
    list->head = newnode;
    list->size++;
}

void print_list(struct linkedlist *list){
    if(list->head == NULL){
        printf("Empty list\n");
        return;
    }
    struct node *current = list->head;
    while(current){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(){

    //Uncomment the following test code during signoffs

    /*
    struct linkedlist *mylist = initialize();
    for(int i=0; i<10; i++){
        add(mylist, (i+1)*10);
    }
    add(mylist, 50);
    add(mylist, 50);

    print_list(mylist);

    print_oldest_first(mylist);
    
    printf("updated at 2? %s\n", update_at(mylist, 2, 300) == 1? "true" : "false");
    print_list(mylist);

    delete_all(mylist, 50);
    printf("delete 50\n");
    print_list(mylist);

    printf("deleted at 0? %s\n", delete_at(mylist, 0) == 1? "true" : "false");
    print_list(mylist);
    printf("deleted at 5? %s\n", delete_at(mylist, 5) == 1? "true" : "false");
    print_list(mylist);
    printf("deleted at 7? %s\n", delete_at(mylist, 7) == 1? "true" : "false");

    print_list(mylist);
    print_oldest_first(mylist);
    */

}
