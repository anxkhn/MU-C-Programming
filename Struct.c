#include<stdio.h>
struct cr
{
    int r,m,b;
    char n[30],t[30];
};
void main()
{
    struct cr c[100],k;
    int n,i,j;
    printf("Enter the number of players: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Name of player,Team,Runs,Matches and boundaries: ");
        scanf("%s%s%d%d%d",c[i].n,c[i].t,&c[i].r,&c[i].m,&c[i].b);
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-2;j++){
            if(c[j].r<c[j+1].r){
                k=c[j];
                c[j]=c[j+1];
                c[j+1]=k;

            }
        }
    }
    printf("PLAYER\tTEAM\tRUNS\tMATCHES\tBOUNDARIES\n");
    printf("---------------------------------------------\n");

    for(i=0;i<n;i++){
        printf("%s\t%s\t%d\t%d\t%d\n",c[i].n,c[i].t,c[i].r,c[i].m,c[i].b);
    }

}
