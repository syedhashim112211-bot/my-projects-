#include <stdio.h>

int main() {
int arr [10] = {1,3,2,4,5,6,7,9,8,10};
int temp;
for (int i=0; i<10; i++) {
for(int j = 0; j<10-i -1 ;j++){
if (arr [i] > arr [j+1]) {
temp = arr[j];
arr [j]=arr [j+1];
arr [j+1] = temp;
}
}
printf ("%d " , arr[i]);
}
    return 0;
}

    