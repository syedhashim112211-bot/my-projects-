#include <stdio.h>

int main() {
int n =25;
int count =0;
for(float i=n;i>=1;i=i/10){
count ++;

n = n/10;

}
printf("%d" , count);

    return 0;
}

    