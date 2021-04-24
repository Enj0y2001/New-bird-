//4.6.1 ջ����ʽ�洢�ṹ

//��ջ��ջ����ʽ�洢�ṹ
//������ջ��˵������������ջ�������

//��ջ�Ľṹ���룺
#include"stdio.h"
#include"stdlib.h"
#define ERROR 1
#define OK 0
typedef int SElemType;
typedef struct StackNode  //���
{
	SElemType data;   //����������
	struct StackNode* next; //ָ����
}StackNode,*LinkStackPtr; //����һ��ָ��ṹ���ָ��LinkStackPtr

typedef struct LinkStack  //��ջ
{
	LinkStackPtr top; //ջ��ָ��
	int count;      //����һ������count����¼�����
}LinkStack;

//4.6.2 ջ����ʽ�洢�ṹ������ջ����
/*����Ԫ��eΪ�µ�ջ��Ԫ��*/
Status Push(LinkStack* S,SElemType e)
{
	LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode)); //ָ��s����ռ�
	s->data = e; //��e��ֵ��s����������
	s->next = S->top; /*�ѵ�ǰ��ջ��Ԫ�ظ�ֵ���½���ֱ�Ӻ�̣���ͼ��*/  //���Ӱ�̲�P122
	S->top = s;/*���µĽ��s��ֵ��ջ��ָ�룬��ͼ��*/ //���Ӱ�̲�P122
	S->count++;
	return OK;
}

//4.6.3 ջ����ʽ�洢�ṹ������ջ����
/*��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR*/
Status Pop(LinkStack* S, SElemType* e)
{
	LinkStackPtr p;  //����ָ��p
	if (StackEmpty(*S)) //���ջSΪ�գ�����ERROR
	{
		return ERROR;
	}
	*e = S->top->data; //��e������ջ��Ԫ��
	p = S->top; /*��ջ����㸳ֵ��p����ͼ��*/ //���Ӱ�̲�P123
	S->top = S->top->next; /*ʹ��ջ��ָ������һλ��ָ���һ��㣬��ͼ��*///���Ӱ�̲�P123
	free(p); /*�ͷŽ��p*/
	S->count--; //�������һ
	return OK;
}