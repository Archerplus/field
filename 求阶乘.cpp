#include<stdio.h>
int main(){
	long i,n;
	long fact=1;
	scanf("%ld",&n);
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("%ld",fact);
}
