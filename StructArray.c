#include <stdio.h>

int main() {
    struct {
        char name;
        float price;
        int page;
    } b[100] ;
    int i;
    for (i = 0; i <= 99; i++) {
        printf("Enter name, price and pages ");
        scanf("%c %f %d", & b[i].name, & b[i].price, & b[i].page);
    }
    for (i = 0; i <= 99; i++)
        printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);
    return 0;
}
