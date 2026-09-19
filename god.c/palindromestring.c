#include <stdio.h>
int main(){
    int n;
    printf("enter size");
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int is_palindrome=1;
    for(int i=0,j=n-1;i<j;i++,j--){
        
        if(str[i]!=str[j]){
            is_palindrome=0;
        }
    }
    if(is_palindrome==1){
        printf("its palindrome");
    }
    if(is_palindrome==0){
        printf("not palindrome");
    }

}