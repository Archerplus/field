#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int a[3][3],b[3][3],t[3][3];
	int i,j,s,n;
	srand(time(NULL));
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		a[i][j]=rand()%10;
		b[i][j]=rand()%10;
		}
	}; 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(n=0;n<3;n++){
			s+=(a[i][n]*b[n][j]);	
			}
			t[i][j]=s;
			s=0;
		}
		printf("\n");}
		printf("\n");
		printf("原矩阵");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
		printf("%3d ",a[i][j]);
		}
		printf("\n");
		}
		printf("\n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
		printf("%3d ",b[i][j]);
		}
		printf("\n");
		}
		printf("\n");
		printf("两个矩阵相乘为：\n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
		printf("%3d ",t[i][j]);
		}
		printf("\n");
		}
	}
	
