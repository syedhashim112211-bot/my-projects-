#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *head){
struct node *p=head;
while(p!=NULL){
    printf("%d \n",p->data);
    p=p->next;
}}
struct node *insertatindex(struct node *head,int x,int indx){

    struct node *p=head;

    struct node *n=malloc(sizeof(struct node));
    int i=1;
    n->data=x;
    while(i<indx){

    p=p->next;
    i++;
}
    n->next=p->next;
    p->next=n;
    return head;
}



int main(){
    struct node *head=malloc(sizeof(struct node));
     struct node *ist=malloc(sizeof(struct node));
      struct node *second=malloc(sizeof(struct node));
      head->data=4;
      head->next=ist;
      ist->data=5;
      ist->next=second;
      second->data=6;
      second->next=NULL;
      insertatindex(head,9,2);
      traversal(head);
    
return 0;
}
