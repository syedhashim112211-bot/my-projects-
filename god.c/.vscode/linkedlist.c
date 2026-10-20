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
//insert in the beginning
struct node *insert_atfirst(struct node *head,int v){
    struct node *n=malloc(sizeof(struct node));
    n->data=v;
    n->next=head;
    head=n;
    return head;
}
//insert at the end
struct node *at_end(struct node *head,int x){
     struct node *n=malloc(sizeof(struct node));
    n->data=x;
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    n->next=NULL;
    p->next=n;
    
    return head;
}
struct node *deletion(struct node *head,int pos){
    int i=1;
    struct node *p=head;
    while(i<pos-1){
        p=p->next;
        i++;
    }
    struct node *q=p->next;
    p->next=q->next;
    free(q);
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
      //insertatindex(head,9,2);
  // head= insert_atfirst(head,2);
   // at_end(head,14);
    // traversal(head);
    deletion(head,1);
    traversal (head);
return 0;
}
