#ifndef _STACK_H_ //����ͷ�ļ���ʼ
#define _STACK_H_  //����ͷ�ļ�������
#include<stdio.h>
#include<stdlib.h>
/*��������*/
#define OK 0  //�ɹ�ִ��
#define Err_Memory -1 //�ڴ�������
#define Err_InvalidParam -2 //���������Ч
#define Err_Overflow -3 //�������
#define Err_IllegalPos -4 //�Ƿ�λ��
#define Err_NoResult -5 //�޷��ؽ���򷵻ؽ��Ϊ��
#define Stack_Init_Size 100 //ջ�ĳ�ʼ��С
#define Stack_Increment 10 //ջ�Ĵ洢�ռ��������

/*��������*/
typedef int ElemType; //ElemTypeΪջ��Ԫ������
typedef struct  //ջ�ṹ
{
	ElemType* stackdata; //ջ������Ԫ�ش洢�ռ䣨һά���飩����ʼ��ַ
	int top; //ջ��ָ�룬ʵ������ջ��λ�õ������±�
	int stacksize; //ջ��ǰ�Ŀ��ô�С����ʼ��С��Stack_Init_Sizeָ��
}SeqStack;

typedef int Status; //��������״̬

/*��������Ҫ�õ���ջ�Ļ���������ʵ�ֺ���*/
Status InitStack(SeqStack* S) //��ʼ������
{
	if (!S) //if(!S)�ȼ���if(S==0)
	{
		return Err_InvalidParam; //˳��ջ��Ч
	}
	/*Ϊstackdata�����ڴ�ռ�*/
	S->stackdata = (ElemType*)malloc(Stack_Init_Size * sizeof(ElemType)); //��ջ�ĳ�ʼ��С�з��䵱ǰջ�Ĵ�С
	if (!S->stackdata) //�ȼ���if(S->stackdata==0)
	{
		return Err_Memory;//�ڴ�������
	}
	S->top = 0; //��ʼ��ջ��ָ��Ϊ0
	S->stacksize = Stack_Init_Size; //����ջ��ǰ��С
	return OK;
}

int EmptyStack(SeqStack* S)  //�ж��Ƿ�Ϊ��ջ
{
	if (!S)
	{
		return Err_InvalidParam; //˳�����Ч
	}
	return (S->top == 0); //top����0Ϊ�գ�����True�����򷵻�False
}

Status GetTop(SeqStack* S, ElemType* e) //��ȡջ��Ԫ��,�������e
{
	if (!S) //���S������
	{
		return Err_InvalidParam; //˳��ջ��Ч
	}
	if (S->top == 0)//���ջ��Ϊ0
	{
		return Err_NoResult; //ջΪ��
	}
	*e = S->stackdata[S->top - 1]; //��ȡջ��Ԫ��
	return OK;
}

Status Push(SeqStack* S, ElemType e)  //��ȡ��������˳��ջS����ջԪ�أ� //Ԫ��e��ջ
{
	StackNode* p;
	if (!S) //�ж�˳��ջ�Ƿ����
	{
		return Err_InvalidParam; //˳��ջ��Ч
	}
	if (S->top == S->stacksize) //ջ����׷�Ӵ洢�ռ�
	{
//		newstack = (ElemType*)malloc(S->stackdata, (S->stacksize + Stack_Increment) * sizeof(ElemType));  //��
	}
	if (!newstack)   //��
	{
		return Err_Memory; //�ڴ�������
	}
	S->stackdata = newstack;
//	S->top = S->stackdata + S->stacksize; //�޸ĵ�ǰջ�Ŀ��ÿռ��С
	S->stackdata[S->top++] = e; //��Ԫ��e����ջ����Ȼ��top��1
	return OK;
}

Status Pop(SeqStack* S, ElemType* e) //��ȡ��������˳��ջS��ջ��Ԫ�أ� //ջ��Ԫ�س�ջ������e��
{
	if (!S) //�ж�˳��ջ�Ƿ����
	{
		return Err_InvalidParam;//˳��ջ��Ч
	}
	if (S->top == 0)
	{
		return Err_NoResult; //ջΪ��
	}
	*e = S->stackdata[--S->top];//��top��1��Ȼ��ջ��Ԫ�ش���e��
	return OK;
}
#endif //ͷ�ļ�����
