#include<stdio.h>
typedef long long int lli;
int main() {
  while(1){
    int n;
    scanf("%d", &n);
    if(n==42){
      break;
    }
    else{
      printf("%d\n", n);
    }
  }  
  return 0;
}

