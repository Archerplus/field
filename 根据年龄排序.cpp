#include<stdio.h>
#include<malloc.h> 
struct stu{
	int data;
	char name[20];
	struct stu *next;
};
void creat(struct stu *head,int size){
	stu *new_node,*p;
	int i;
	int data;
	char name[20];
	p = head;
	for(i = 1;i <= size;i++){
		printf("����: ");
		scanf("%s",name); 
		printf("����: "); 
		scanf("%d",&data); 
		new_node = (struct stu*)malloc(sizeof(struct stu));
		new_node->data = data;
		for(int t = 0;name[t] != '\0';t++)
			new_node->name[t] = name[t];
		new_node->next = NULL;
		p->next = new_node;
		p = p->next; 
	}
}
stu *seek(stu *head,int position){
	int i;
	struct stu *p;
	p = head;
	for(i = 1;i <= position;i++)
		p = p->next;
	return p;
}
void print(stu *head,int number){
	int i,j;
	stu *replace,*a1,*a2;
	for(i = 1;i < number;i++)
		for(j = i+1;j <= number;j++)
		{
		a1=seek(head,i);
		a2=seek(head,j);
		if(a1->data>a2->data){		
			replace = a1;
			a1 = a2;
			a2 = replace;
		}
	}	
	stu *p;
	p = head->next;
	printf("���������������");
	while(p) 
	{
	printf("����: %s ����: %d",p->name,p->data);
	p = p->next; 
	}
}
int main(){
	int number; 
	stu *head = NULL;
	head = (struct stu*)malloc(sizeof(struct stu));
	head->next = NULL;
	printf("��������Ҫ�Ѷ��ٸ����ֽ�������.");
	scanf("%d",&number);
	creat(head,number);
	printf("�����Ľ��:");
	print(head,number);
} 
