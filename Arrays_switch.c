#include<stdio.h>
#include<string.h>

void main() {
    char a[50], b[50], c[50];
    int choice, len, len2;
    printf("Enter 2 Strings\n");
    gets(a);
    gets(b);
    printf("select: 1.Length 2.Copy 3. Merge 4.Compare\n");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
        len = strlen(a);
        printf("Length = %d\n", len);
        len2 = strlen(b);
        printf("Length = %d\n", len2);
        break;
    case 2:
        strcpy(b, a);
        printf("Copied string : %s", b);
        break;
    case 3:
        strcat(b, a);
        printf("String after merge : %s", b);
        break;
    case 4:
        if (strcmp(a, b) == 0);
        printf("strings are equal \n");
        break;
    default:
        printf("Invalid choice \n");
    }
}
