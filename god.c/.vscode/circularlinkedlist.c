#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create(int data){
    struct node *n=malloc(sizeof(struct node));
    n->data=data;
    n->next=NULL;
    return n;
}
void traversal(struct node *head){
struct node *p=head;
do
{
    printf("%d \n",p->data);
    p=p->next;
}
while(p!=head);}
struct node *del_occurance(struct node *head, int x){
    struct node *p=head;
    if(head->data==x){
        while(p->next!=head){
            p=p->next;}
            struct node *r=head;
            p->next=head->next;
            head=head->next;
            free(r);
    return head;}
    
    do{
        p=p->next;
        if(p->next->data==x){
            struct node *q=p->next;
            p->next=q->next;
            free(q);

        }
       
    

}
 while(p!=head);
return head;
}


int main(){
    struct node *head=NULL;
    struct node *n1=create(1);
    struct node *n2=create(2);
    struct node *n3=create(2);
    struct node *n4=create(4);
    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=head;
    //head = del_occurance(head,1);
    del_occurance(head,2);
    traversal(head);



}