#include<stdio.h>
union info{
    char name[20];
    int id;
};
void main(){
    union info a;
    int c;
    printf("Enter your info\n1.Name\n2.ID\nEnter your choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("Enter your name: ");
        scanf("%s",&a.name);
        break;
    case 2:
        printf("Enter your ID: ");
        scanf("%d",&a.id);

    default:
        break;
    }
    if(c==1)
    printf("Your name is %s",a.name);
    else
    printf("Your ID is %d",a.id);

}
