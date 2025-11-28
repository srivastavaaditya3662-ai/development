#include <stdio.h>
struct Address {
    char city[20];
    int pincode;
};
struct Student {
    int roll;
    char name[20];
    struct Address s;   
};
int main() {
    struct Student stu;
    printf("Enter roll: ");
    scanf("%d", &stu.roll);
    printf("Enter name: ");
    scanf("%s", stu.name);
    printf("Enter city: ");
    scanf("%s", stu.s.city);
    printf("Enter pincode: ");
    scanf("%d", &stu.s.pincode);
    printf("\nStudent Info:\n");
    printf("Roll: %d\n", stu.roll);
    printf("Name: %s\n", stu.name);
    printf("City: %s\n", stu.s.city);
    printf("Pincode: %d\n", stu.s.pincode);
    return 0;
}
