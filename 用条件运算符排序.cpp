#include<stdio.h>
int main(){
	int max,min,between,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	min=a>b?(b>c?c:b):(a>c?c:a);
	between=a>b?(a>c?(b>c?b:c):a):(b>c?(a>c?a:c):b);
	printf("%d %d %d",max,between,min);
} 
