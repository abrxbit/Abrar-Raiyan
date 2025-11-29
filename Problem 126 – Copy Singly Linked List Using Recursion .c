#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* copy(struct node* head){
    if(head==NULL) return NULL;
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = head->data;
    n->next = copy(head->next);
    return n;
}

int main(){
    int n;
    scanf("%d",&n);
    struct node *head=NULL, *temp=NULL;

    for(int i=0;i<n;i++){
        struct node* newNode = malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head==NULL) head=newNode;
        else temp->next=newNode;

        temp=newNode;
    }

    struct node* copied = copy(head);

    while(copied){
        printf("%d ", copied->data);
        copied=copied->next;
    }
    return 0;
}
