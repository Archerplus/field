#include<stdio.h>
int main(){
	int m,n,i,k;
	scanf("%d%d",&m,&n);
	while(n!=0){
	i=m%n;
	m=n;
	n=i;
	}
	printf("%d",m);
} 
/*   进行数之间的转换从而实现循环   m为较大数，n为最小数，i为余数*/