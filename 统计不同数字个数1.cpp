#include<stdio.h>
#define N 20
int main(){
	int flag,a,b=N,n,i[N],s,t,sum[20]={};
	for(n=0;n<N;n++){
		scanf("%d",&i[n]);
	}
	for(a=0;a<N;a++){
		flag=1;
		    for(s=a+1;s<N&&flag;s++){
		    for(t=a-1;t>=0&&flag;t--)
			if(i[a]==i[t]) flag=0;
			
			if(flag&&i[a]==i[s]) sum[a]++;
			}
			b-=sum[a];
		}
	printf("%d",b);
} 
