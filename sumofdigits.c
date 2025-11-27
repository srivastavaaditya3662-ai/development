#include <stdio.h>
int sumofdigits(int n){
  if(n==0){
    return 0;
  }
return(n%10+sumofdigits(n/10));
  
}
int main(){
  int num;
  printf("Enter Number:\n");
  scanf("%d",&num);
  printf("Sum of Digits: %d\n",sumofdigits(num));
  return 0;
}