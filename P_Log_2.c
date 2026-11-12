#include<stdio.h>

long long int recursion(int n){
  if(n==1){
    return 0;
  }

 return recursion(n/2)+1;
 
}

int main(){

    long long int n;
    scanf("%d",&n);

    long long int result=recursion(n);
    printf("%lld",result);
     return 0;
}