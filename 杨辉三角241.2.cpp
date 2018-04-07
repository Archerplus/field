#include<stdio.h>
int main(){
	int i,j,n,t[80][80],s[80][80];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++){
			if(j<1)s[i][j]=1;
			else 
			s[i][j]=s[i-1][j]+s[i-1][j-1];
		}
	}
	for(i=0;i<n;i++)
	{for(j=0;j<i+1;j++)
	printf("%3d ",s[i][j]);
	printf("\n");
	}
}
