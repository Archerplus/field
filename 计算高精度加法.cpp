#include "stdio.h"
#include "string.h"
main()
{ int a[100]={0},b[100]={0},c[100]={0};
char s[101];
int i=0,n1=0,n2=0,max=0,e=0;
gets(s);
n1=strlen(s);
for(i=n1-1;i>=0;i--) a[n1-1-i]=s[i]-'0';
gets(s);
n2=strlen(s);
for(i=n2-1;i>=0;i--) b[n2-1-i]=s[i]-'0';
if(n1>n2) max=n1;
else max=n2;
for(i=0;i<=max;i++)
{ c[i]=(a[i]+b[i]+e)%10;
e=(a[i]+b[i]+e)/10;
}
if(c[max]>0) printf("%d",c[max]);
for(i=max-1;i>=0;i--)
printf("%d",c[i]);
}
