#include<stdio.h>
#include <string.h>
int main()
{char str [] = "madan";
char rev[6] ;
int j= 0;
for (int i =4 ; i>=0; i--){
rev [j] = str[i] ;
j++;
}
rev [j] = '\0';
printf ("%d" , strcmp(str,rev ) );
}

