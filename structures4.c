#include <stdio.h>
struct employee{
 int id;
 char name[50];
 int salary;  
};

struct Address{
    char street[50];
    char city[50];
    char state[50];
};

struct date{
    int date;
    int year;
    char month[50];
};

int main(){
struct employee e;
struct Address a;
struct date d;
printf("Enter employee id:\n");
scanf("%d\n",&e.id);
printf("Enter name:\n");
scanf("%s\n",&e.name);
printf("Enter joining date:\n");
scanf("%s\n",&e.date);
printf("Enter address:\n");
scanf("%s\n",&e.address);
printf("Enter salary:\n");
scanf("%d\n",&e.salary);
     
printf("----Employee Details----");
printf("ID:%d\n",e.id);
printf("Name:%s\n",e.name);
printf("Joining date:%s\n",e.date);
printf("Address:%s\n",e.address);
printf("Salary:%d\n",e.salary);
return 0;
}