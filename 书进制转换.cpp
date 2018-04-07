#include<stdio.h>
int versionOne(long n){
	long m=0,k=1;
	while(n>0){
		m=(n%2)*k+m;
		k=k*10;
		n=n/2;
	}
	return m;
}
long versionTwo(long n){
	if(n==1L||n==0L) return n;
	else return versionTwo(n/2L)*10+n%2;
}
int main(){
	long n;
	scanf("%ld",&n);
	printf("%d\n",versionOne(n));
	printf("%ld",versionTwo(n));
}
