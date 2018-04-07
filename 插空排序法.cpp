#include<stdio.h>
#define M 10
int main(){
	int a[M],i,j,t;
	for(i=0;i<M;i++)
	scanf("%d",&a[i]);
	for(i=1;i<M;i++){
		t=a[i];
		for(j=i-1;j>=0&&t>a[j];j--)
		a[j+1]=a[j];
		a[j+1]=t;
	}
	for(i=0;i<M;i++)
	printf("%d ",a[i]);
	printf("\n");
} 
