#include<stdio.h>
void main()
{
    char a[100];
    int i,c=0,l,ck;

    printf("Enter the string: ");
    gets(a);
    l=0;
    while(a[l]!='\0')
    {    l++;}

    for(i=0;i<l;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        c++;
    }
    ck=l-c;
    printf("The string has %d vowels and %d consonants.",c,ck);
}
