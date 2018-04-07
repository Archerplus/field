#include<stdio.h>
int main(){
	int a=1,b=0;
	while(a<=100){
		b=a+b;
		a++;
	}
	printf("%d",b);
}
/* 从一加到一百，求和*/
