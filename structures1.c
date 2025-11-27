#include <stdio.h>
struct Employee{
  int id;
  char name[30];
};
int main(){
  struct Employee e;
  printf("Enter Employee ID:\n");
  scanf("%d",&e.id);
  printf("Enter name:\n");
  scanf("%s",&e.name);
  printf("%d\n",e.id);
  printf("%s",e.name);
  return 0;
}