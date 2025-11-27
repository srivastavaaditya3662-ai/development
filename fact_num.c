#include <stdio.h>
long long factorial(int n){
  long long fact=1;
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  return fact;
}
int main(){
  int n;
  scanf("%d",&n);
  long long result=factorial(n);
  printf("Factorial of %d is: %d",n,result);
  return 0;
}
