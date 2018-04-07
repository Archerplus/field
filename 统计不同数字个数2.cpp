#include<stdio.h>
int sortofup(int s[20],int n){
	int i,r;
	bool flag=true;
	while(flag){
		flag=false;
		for(i=0;i<n-1;i++)
			if(s[i]>s[i+1]){
				r=s[i];
				s[i]=s[i+1];
				s[i+1]=r;
				flag=true;
			}
	}
	return 0;
}
int main(){
	int i,n=20,a[20],d=0;
	for(i=0;i<=19;i++)
		scanf("%d",&a[i]);
	sortofup(a,20);
	for(i=0;i<19;i++)
		if(a[i]==a[i+1])
			d++;
	printf("%d",20-d);
}

