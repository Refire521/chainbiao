#include<stdio.h>
#include<malloc.h>
struct data {
	int num;
	struct data* pnext;
};
int main()
{
	struct data* p, * head, * pre;//pre���ӳ�ָ�룬������һ������λ��
	int n, i;
	printf("�����뽨���������Ľṹ�壺\n");
	scanf_s("%d", &n);
	//������һ�����
	p = (struct data*)malloc(sizeof(struct data));
	head = p;//һ����ֵ�����׸ı䣬������׵�ַ
	pre = p;
	printf("�������һ���ڵ�����ݣ�\n");
	scanf_s("%d", &p->num);
	p->pnext = NULL;
	//������2����n�����
	for (i = 2; i <= n; i++) {
		p = (struct data*)malloc(sizeof(struct data));
		printf("�������%d����������\n", i);
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