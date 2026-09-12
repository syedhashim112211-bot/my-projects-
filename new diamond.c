#include <stdio.h>

int main(){

int n=5;
for (int i=1; i<=n;i++){
for(int j=1 ; j<= n-i ; j++){
printf ( " ");
}
for (int k=1 ; k<=2*i -1 ; k++){
printf("*");

}
printf("\n");
}


for (int i =6; i<=9;i++){
for (int j= 1 ; j<=i-5 ; j++){
printf (" ");
}
for(int k =1 ; k>=2*(i-8)-1 ; k--){
printf("*");
}
printf("\n");
}

return 0;
}
    