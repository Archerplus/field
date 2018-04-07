#include<stdio.h>
int main(){
	int a[3][4],mj,flag=1,max,i,j,n,s,t;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		mj=0;
	max=a[i][mj];
	for(j=0;j<4;j++)
	{
		if(max<a[i][j]) {
		max=a[i][j]; mj=j;} 
		}
	for(t=0;t<3&&flag;t++){
	if(max>a[t][mj]) flag=0;}
	if(flag) printf("%d",max);
	flag=1;
	} 
	if(!flag) printf("NO"); 
} 
