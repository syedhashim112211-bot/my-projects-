#include <stdio.h>



int main()



{
int number = 5;
int i=1;
int n = 1;
while(i<=number){
n*=i;
i++;
}

printf("%d",n);
return 0;
}