#include <stdio.h>
//string length
int str_len(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
//string copy
void copy_str(char str[]){
char str2[str_len(str)];
int i=0;
while(str[i]!='\0'){
str2[i]=str[i];
i++;
}
printf("copied string is  %s",str2);
}
//string compare
int str_compare(char str[]){
    char str3[str_len(str)+2];
    printf("enter string 3");
fgets(str3,sizeof(str3),stdin);
int i=0;
while(str[i]!='\0'){
    if(str3[i]!=str[i]){
        return 0;

    }
    i++;
}
return 1;
}
//reverse
void rev_str(char str[]){
for(int i=str_len(str);i>=0;i--){
   
    printf("%c",str[i]);
}
 printf(": is the reverse string ");

}
//ponter reverse
void ptr_rev(char *str){
char *p=str;
char *q=str+str_len(str)-2;
while(p<q){
    char temp;
    temp=*p;
    *p=*q;
    *q=temp;
    p++;
    q--;

}
printf("%s",str);
}
//palindrome
void palindrome_str(char str[]){
    int is_pal=1;
    for(int i=0,j=str_len(str)-2;i<j;i++,j--){
        if(str[i]!=str[j]){
            is_pal=0;

        }
    }
    if(is_pal==1){
        printf("its palindrome");
    }
    if(is_pal==0){
        printf("not palindrome");
    }
}
//cocatinate
void concatinate(char str[]){
    char str4[str_len(str)+2];
    printf("enter second string");
    fgets(str4,sizeof(str4),stdin);
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        i++;
    }
    while(str[j]!='\0'){
        str[i]=str4[j];
        i++;
        j++;
    }
    printf("concatinated string= %s",str);
}


int main(){
    int n=100;
    char str[n];
    printf("enter string");
    fgets(str,sizeof(str),stdin);
  //  int result=str_len(str)-1;
    //printf("%d",result);
//copy_str(str);
//printf("%d", str_compare(str));
//rev_str(str);
//ptr_rev(str);
//palindrome_str(str);
concatinate(str);
}