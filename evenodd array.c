#include <stdio.h>

int main() {

int odd = 0;
int count =0;

    int i = 0;
   int arr []= {1,2,4,5,77,7,8,9};
    int size =  sizeof(arr) /  sizeof (arr[0]) ;
    
    
    for (i=0 ; i<=size ; i++){
    if (arr [i] % 2 == 0) 
    { count ++ ; }
    
   else
   {odd++;}
    
    }
     printf ( "even count %d oddcount %d" , count ,odd );
    
    

    return 0;
}

    