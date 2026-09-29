#include <stdio.h>
void sub_str(char str[]){
    char sub[100];
    printf("enter your sub_string: ");
    fgets(sub,100,stdin);
    int k=0;
    while(sub[k]!='\0'){
    if(sub[k]=='\n'){
        sub[k]='\0';
        
    }
    k++;
}
    int found=0;
    int i=0;
    while(str[i]!='\0'){
    int j=0;
    while(sub[j]!='\0'&& str[i+j]==sub[j] ){
        j++;
        }
        if(sub[j]=='\0'){
            found=1;
            break;
        }
        i++;

    }
if (found==1){
    printf("sub string exists from index: %d", i);
}
    if(found==0){
        printf("no sub string found");
    }
}

int main(){
    
    char str[100];
    printf("enter your string: ");
    fgets(str,100,stdin);
    sub_str(str);
    return 0;

}