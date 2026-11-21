#include <stdio.h>
#include <stdlib.h>
struct stack {
    int data;
    struct stack *next;
};
struct stack *create(int value){
    struct stack *n=malloc (sizeof(struct stack));
    n->data=value;
    return n;

}
struct stack *push(struct stack *top ,int x){
    struct stack *new=create(x);
    new->next=top;
    top=new;
    return top;
}
struct stack *pop(struct stack *top){
    struct stack *p=top;
    top=top->next;
free(p);
return top;
}
void traversal(struct stack *top){
    struct stack *p=top;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");

}
int main(){
    struct stack *top=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    traversal(top);

    top=pop(top);
    top=pop(top);
    traversal(top);
    
}