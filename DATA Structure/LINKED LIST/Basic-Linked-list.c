#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node* first = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    struct node* fourth = NULL;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    first -> data = 10;
    first -> next = second;

    second -> data = 21;
    second -> next = third;

    third -> data = 32;
    third -> next = fourth;

    fourth -> data = 43;
    fourth -> next = NULL;

    struct node *temp = first;
    while(temp != NULL) {
        printf(" %d ",temp -> data);
        temp = temp -> next;
    }
    return 0;
}