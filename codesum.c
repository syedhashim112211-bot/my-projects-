#include <stdio.h>
int main(){
    int a = 0;
    int b = 1;
    int n=5;
    for(int i=0 ;i<=10;i++){
        printf("%d" , a);
        int NextTerm = a+b;
        a=b;
        b=NextTerm;
    }
    return 0;
}