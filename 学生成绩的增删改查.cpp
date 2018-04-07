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
		//��ʼ�����
		new_node=(struct LNode *)malloc(sizeof(struct LNode));
		new_node->data=n;
		new_node->next=NULL;
		//�½����뵽����β
		p->next=new_node;
		//pָ�����
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
	//�����½��
	new_node=(struct LNode*)malloc(sizeof(struct LNode));
	new_node->data=e;
	new_node->next=NULL;
	//ʹpָ�����λ�õ�ǰһ�����
	p=head;
	for(k=2;k<=i&&p->next;k++)
	p=p->next;
	//������
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
	//ʹpָ��ɾ������ǰһ�����
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
	//��ʼ��ͷ���
	head=(struct LNode*)malloc(sizeof(struct LNode));
	head->next=NULL;
	sel=-1;
	while(sel!=0){
		printf("\n ��ѡ�����(1.���� 2.��� 3.���� 4.ɾ�� 5.���� 0.�˳�):");
		scanf("%d",&sel);
		switch(sel){
			case 1:
				printf("�����봴�������Ԫ�صĸ���:");
				scanf("%d",&n);
				creat(head,n);
				break;
			case 2:
				printf("��������Ԫ������:\n");
				print(head);
				break;
			case 3:
				printf("������Ҫ�����Ԫ��:");
				scanf("%d",&n);
				printf("������Ҫ�����λ��:");
				scanf("%d",&i);
				ListInsert(head,i,n);
				break;
			case 4:
				printf("������Ҫɾ��Ԫ�ص�λ��:");
				scanf("%d",&i);
				ListDelete(head,i);
				break;
			case 5:
				printf("������Ҫ���ҵ�Ԫ��:");
				scanf("%d",&n);
				i=LocateElem(head,n);
				if(i!=-1) printf("%d������ĵ�%d��Ԫ��\n",n,i);
				else printf("����ʧ��\n");
				break;
			case 0:
				break; 
		}
	} 
	return 0;
}
