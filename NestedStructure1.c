#include<stdio.h>
struct health {
    char blood [10];
    int pc;
    };
struct address {
    char city[20];
    int pin;
    char phone[14];
};
struct employee {
    char name[20];
    struct address add;
    struct health hell;
};
void main() {
    struct employee emp;
    printf("Enter employee information?\n");
    scanf("%s %s %d %s %s %d", emp.name, emp.add.city, & emp.add.pin, emp.add.phone, & emp.hell.blood, emp.hell.pc);
    printf("Printing the employee information....\n");
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s \Blood: %s\nPC: %d", emp.name, emp.add.city, emp.add.pin, emp.add.phone ,emp.hell.blood, emp.hell.pc);
}
