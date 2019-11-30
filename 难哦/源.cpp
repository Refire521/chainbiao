#include<stdio.h>
#include<malloc.h>
struct data {
	int num;
	struct data* pnext;
};
int main()
{
	struct data* p, * head, * pre;//pre是延迟指针，拿着上一个结点的位置
	int n, i;
	printf("请输入建立几个结点的结构体：\n");
	scanf_s("%d", &n);
	//建立第一个结点
	p = (struct data*)malloc(sizeof(struct data));
	head = p;//一旦赋值不轻易改变，链表的首地址
	pre = p;
	printf("请输入第一个节点的数据：\n");
	scanf_s("%d", &p->num);
	p->pnext = NULL;
	//建立第2到第n个结点
	for (i = 2; i <= n; i++) {
		p = (struct data*)malloc(sizeof(struct data));
		printf("请输入第%d个结点的数据\n", i);
		scanf_s("%d", &p->num);
		p->pnext = NULL;
		pre->pnext = p;
		pre = p;
	}
	p = head;
	while (p != NULL)
	{
		printf("%d", p->num);
		p = p->pnext;
	}
	return 0;
}