#include<stdio.h> 
#include<malloc.h>
struct LNode{
	int data;
	struct LNode *next;
};
void creat(struct LNode *head,int size){
	struct LNode *p,*new_node;
	int i,n;
	p=head;
	for(i=1;i<=size;i++){
		scanf("%d",&n);
		//初始化结点
		new_node=(struct LNode *)malloc(sizeof(struct LNode));
		new_node->data=n;
		new_node->next=NULL;
		//新结点接入到链表尾
		p->next=new_node;
		//p指针后移
		p=p->next; 
	}
}
void print(struct LNode *head){
	struct LNode *p;
	p=head->next;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void ListInsert(struct LNode *head,int i,int e){
	struct LNode *p,*new_node;
	int k;
	//生成新结点
	new_node=(struct LNode*)malloc(sizeof(struct LNode));
	new_node->data=e;
	new_node->next=NULL;
	//使p指向插入位置的前一个结点
	p=head;
	for(k=2;k<=i&&p->next;k++)
	p=p->next;
	//插入结点
	if(p->next==NULL)
	p->next=new_node;
	else {
		new_node->next=p->next;
		p->next=new_node;
	} 
}
void ListDelete(struct LNode *head,int i){
	struct LNode *p,*q;
	int k;
	//使p指向被删除结点的前一个结点
	p=head;
	for(k=2;k<=i&&p->next;k++)
	p=p->next;
	if(p->next){
		q=p->next;
		p->next=p->next->next;
		free(q);
	} 
}
int LocateElem(struct LNode *head,int n){
	int i=0;
	struct LNode *p;
	p=head->next;
	while(p){
		i++;
		if(p->data==n) return i;
		p=p->next; 
	} 
	return -1;
}
int main(){
	struct LNode *head=NULL;
	char e,dele;
	int sel,i,n;
	//初始化头结点
	head=(struct LNode*)malloc(sizeof(struct LNode));
	head->next=NULL;
	sel=-1;
	while(sel!=0){
		printf("\n 请选择操作(1.创建 2.输出 3.插入 4.删除 5.查找 0.退出):");
		scanf("%d",&sel);
		switch(sel){
			case 1:
				printf("请输入创建链表的元素的个数:");
				scanf("%d",&n);
				creat(head,n);
				break;
			case 2:
				printf("所有链表元素如下:\n");
				print(head);
				break;
			case 3:
				printf("请输入要插入的元素:");
				scanf("%d",&n);
				printf("请输入要插入的位置:");
				scanf("%d",&i);
				ListInsert(head,i,n);
				break;
			case 4:
				printf("请输入要删除元素的位置:");
				scanf("%d",&i);
				ListDelete(head,i);
				break;
			case 5:
				printf("请输入要查找的元素:");
				scanf("%d",&n);
				i=LocateElem(head,n);
				if(i!=-1) printf("%d是链表的第%d个元素\n",n,i);
				else printf("查找失败\n");
				break;
			case 0:
				break; 
		}
	} 
	return 0;
}
