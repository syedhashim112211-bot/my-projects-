#include <stdio.h>
int main() {
    int i;
    int j;
    int k;
    int l;
    int m;
    for(i = 1 ; i<= 5;i++){
        for(j=4;j>=1;j--){ 
            printf(" ");

        }
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
        for(m=1;m<=2*i-1;m++){
            printf("*");
        }
        printf ("\n");

    }
    return 0;
}