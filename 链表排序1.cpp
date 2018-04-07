#include<stdio.h>
#include<malloc.h> 
struct stu{
	int data;
	struct stu *next;
};
void creat(struct stu *head,int size){
	stu *new_node,*p;
	int i;
	int data;
	p=head;
	for(i=1;i<=size;i++){
		scanf("%d",&data);
		new_node=(struct stu*)malloc(sizeof(struct stu));
		new_node->data=data;
		new_node->next=NULL;
		p->next=new_node;
		p=p->next; 
	}
}
stu *seek(struct stu *head,int position){
	int i;
	struct stu *p;
	p=head->next;
	for(i=0;i<position;i++)
		p=p->next;
	return p;
}
void print(struct stu *head,int number){
	int i,j;
	stu *replace,*a1,*a2;
	for(i=0;i<number;i++)
		for(j=i+1;j<number;j++)
		{
		a1=seek(head,i);
		a2=seek(head,j);
		if(a1->data>a2->data){		
			replace->data=a1->data;
			a1->data=a2->data;
			a2->data=replace->data;
		}
	}	
	struct stu *p;
	p=head->next;
	while(p) 
	{
	printf("%d ",p->data);
	p=p->next; 
	}
}
int main(){
	int number; 
	stu *head = NULL;
	head=(struct stu*)malloc(sizeof(struct stu));
	head->next=NULL;
	printf("请问您将要把多少个数字进行排序.");
	scanf("%d",&number);
	creat(head,number);
	printf("排序后的结果:");
	print(head,number);
} 
