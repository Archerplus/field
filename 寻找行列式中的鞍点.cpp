#include <stdio.h>
main()
{ int i,j,k,a[3][4],max,maxj,flag;
for(i=0;i<3;i++)
for(j=0;j<4;j++)
scanf("%d",&a[i][j]);
for(i=0;i<3;i++)
{ 
max=a[i][0];
maxj=0;
for(j=0;j<4;j++)
if(a[i][j]>max)
{max=a[i][j]; maxj=j; }
flag=1;
for(k=0;k<3;k++)
if(max>a[k][maxj])
{ flag=0; break; }
if(flag)
{printf("%d",max);break;}
}
if(!flag)
printf("NO");
}
