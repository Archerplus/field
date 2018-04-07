#include<stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) (t=b,b=a,a=t);
	if(a>c) (t=c,c=a,a=t);
	if(b>c) (t=c,c=b,b=t);
	printf("%d,%d,%d",a,b,c); 	
} 
/*  将数字之间从小到大排列，若原输入数字大小相反，将两者调换位置即可，通过第三者进行代换*/
