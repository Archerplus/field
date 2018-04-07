#include<stdio.h>
int main(){
	int number;
	scanf("%d",&number);
	getchar();
	char chars[number][200];
	int i;
	for(i = 0;i < number;i++)
	gets(chars[i]);
	for(i = 0;i < number;i++)
	{	
		int count = 0;
		for(int t = 0;chars[i][t]!='\0';t++)
			{
			if(t == 0&&chars[i][t]!=' ')
				count++;
			else if(chars[i][t]==' '&&chars[i][t+1]!=' ')
				count++;	
			}
			printf("%d\n",count);
	}
} 
