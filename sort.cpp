#include<stdio.h>
#include<malloc.h> 
#include<string>
#include<iostream> 
struct stu{
	int data;
	char name[20];
	struct stu *next;
};
void creat(struct stu *head,int size){
	stu *new_node,*p;
	p=head;
	while(size--){
		new_node = (struct stu*)malloc(sizeof(struct stu));
		printf("姓名: ");
			scanf("%s",new_node->name);
		printf("年龄: "); 
			scanf("%d",&new_node->data);
		p->next = new_node;
		new_node->next=NULL;
		p=p->next; 
	}
	
	
	
	
//	for(i = 1;i <= size;i++){
//		printf("姓名: ");
//		scanf("%s",name); 
//		printf("年龄: "); 
//		scanf("%d",&data); 
//		new_node = (struct stu*)malloc(sizeof(struct stu));
//		new_node->data = data;
//		for(int t = 0;name[t] != '\0';t++)
//			new_node->name[t] = name[t];
//		new_node->next = NULL;
//		p->next = new_node;
//		p = p->next; 
//	}
}


void sort(stu *head){
	stu *p,*q,*k;
	p=head;
	
	while(p){
		q=p->next;
		while(q){
			if(p->data>q->data){
				k->data=q->data;
			//	k->name=q->name;
				q->data=p->data;
				//q->name=p->name;
				p->data=k->data;
				//p->name=k->name
			}
			else
				q=q->next;
			}
		p=p->next;
	}
			
}
void print(stu *head){
	
	stu *p=head;
	
	while(p){
		std::cout<<"姓名:"<<p->name<<"年龄"<<p->data<<std::endl;
		 p=p->next;
	}
}


int main(){
	int number; 
	stu *head = NULL;
	head = (struct stu*)malloc(sizeof(struct stu));
	head->next = NULL;
	printf("请问您将要把多少个数字进行排序.");
	scanf("%d",&number);
	creat(head,number);
	sort(head);
	printf("排序后的结果:");
	print(head);
} 
