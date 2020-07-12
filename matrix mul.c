#include <stdio.h>
main()
{
  int a[10][10],b[10][10],c[10][10];
int i,j,k,m,n,p,q;
printf("enter matrix a row,column size");
scanf("%d%d",&m,&n);
if(n=p)
    printf("enter matrix a elements");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
}
printf("enter matrix b elements");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{
    for(j=0;j<q;j++)
    {
        c[i][j]=0;
        for(k=0;k<n;k++)
            c[i][j]=a[i][k]*b[k][j];
    }
}
printf("multiplication of two matrices is");
for(i=0;i<m;i++)
{
  for(j=0;j<q;j++)
        printf("%d",c[i][j]);
        printf("\n");
}
}

