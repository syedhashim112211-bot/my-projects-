#include <stdio.h>

int main() {
int arr [10] = {1,4,8,9,10,3,2,5,7,6};
int temp;
for (int i=0; i<10; i++) {
for(int j = 0; j<9-i ;j++){
if (arr [j] > arr [j+1]) {
temp = arr[j];
arr [j]=arr [j+1];
arr [j+1] = temp;
}
}
}
for (int i=0; i<10; i++){
printf ("%d " , arr[i]);}

    return 0;
}

    