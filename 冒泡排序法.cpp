#include<stdio.h> 
#define M 10
int main(){
	int a,i,s,j,n[M];
	for(a=0;a<M;a++){
		scanf("%d",&n[a]);
		}
	for(i=0;i<M;i++){
		for(j=i+1;j<M;j++){
			if(n[i]<n[j])
			{
			s=n[j];
			n[j]=n[i];
			n[i]=s;}
		}
	}
	for(i=0;i<M;i++){
		printf("%d ",n[i]);
	}
}
