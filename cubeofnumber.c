#include <stdio.h>
int cubeofnumber(int n){
  return n*n*n;
}
int main(){
  int n;
  printf("Enter Number:\n");
  scanf("%d",&n);
  int cube=cubeofnumber(n);
  printf("Cube of %d = %d",n,cube);
  
return 0;
}