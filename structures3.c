#include <stdio.h>
struct Student {
    char city[20];
    int pincode;
};
struct Address {
    int roll;
    char name[20];
    struct Student addr;   
};
int main() {
    struct Address s;
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter city: ");
    scanf("%s", s.addr.city);
    printf("Enter pincode: ");
    scanf("%d", &s.addr.pincode);
    printf("\nStudent Info:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.addr.city);
    printf("Pincode: %d\n", s.addr.pincode);
    return 0;
}