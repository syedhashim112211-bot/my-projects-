#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<f;
}
int palindrome(int x){
     int rev=0;
     int org =x;
    while(x>0){
    int r=x%10;
    rev = rev*10+r;
    x=x/10;}
    if(rev==org){
        cout<<"its palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}
int main(){
    int choise;
    cout<<"case 1. factorial"<<endl;
    cout<<"case 2. palindrome"<<endl;
    cin>>choise;
    switch(choise){
        case 1:{
        int n;
        cout<<"enter value of n";
        cin>>n;
        fact(n);
        break;}
        case 2:{
        int x;
        cout<<"enter value of x";
        cin>>x;
        palindrome(x);
        break;}
        default:
        cout<<"invalid input";
        break;
    }
    
    
return 0;
}