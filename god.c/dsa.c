#include <stdio.h>

// traversal
void traversal (int arr[],int n ){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }

}
// linear search
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        
        }
    }
    return -1;
}

// insertion
int insert(int arr[],int n,int x,int pos){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    n++;
}
// deletion
int deletion(int arr[],int n,int pos){
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  /* // traversal
    traversal(arr,n);*/
   //linear search
    int key;
    printf("enter key");
    scanf("%d",&key);
   int result= linearsearch(arr,n,key);
   if(result==-1){
    printf("no key found");
   }
   else{
    printf("key found at index %d", result);
   }
// insertion
int x,pos;
printf("enter x=");
scanf("%d",&x);
printf("pos=");
scanf("%d",&pos);
insert(arr,n,x,pos);
// deletion
int pos;
printf("enter pos=");
scanf("%d",&pos);
deletion(arr,n,pos);
    
return 0;
}
