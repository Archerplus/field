#include<stdio.h>
int main(){
	int m,n,i,k;
	scanf("%d%d",&m,&n);
	while(n!=0){
	i=m%n;
	m=n;
	n=i;
	}
	printf("%d",m);
} 
/*   ������֮���ת���Ӷ�ʵ��ѭ��   mΪ�ϴ�����nΪ��С����iΪ����*/