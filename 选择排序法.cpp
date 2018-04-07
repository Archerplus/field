#include<stdio.h> 
int main() 
{  
int i,j,min,t,a[10]; 
for(i=0;i<10;i++) 
scanf("%d",&a[i]); 
printf("\n"); 
for(i=0;i<9;i++) 
{ 
min=i; 
for(j=i+1;j<10;j++) 
if(a[min]>a[j]) 
min=j; 
t=a[i]; 
a[i]=a[min]; 
a[min]=t; 
}  
printf("\n The sorted numbers:\n"); 
for(i=0;i<10;i++) 
printf("%5d",a[i]); 
printf("\n"); 
}  

