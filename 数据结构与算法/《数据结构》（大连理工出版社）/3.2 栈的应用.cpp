//3.2.1 ����ת��
/*ͷ�ļ�*/
#include<stdio.h>
#include<stdlib.h>
#include"Stack.h" //ջʵ�ֳ���
/*ת������*/
void conversion(int N,int h) //��ʮ������Nת����h����
{
	SeqStack* S; //����ջ
	ElemType e; 
	S = (SeqStack*)malloc(sizeof(SeqStack));//�����ַ
	if (!S) 
	{
		printf("�ڴ�������\n");
		return ;
	}
	InitStack(S); //��ʼ��ջ
	while (N)
	{
		Push(S, N % h);
		N = N / h;
	}
	printf("ת�����Ϊ��");
	while (!EmptyStack(S)) 
	{
		Pop(S, &e);
		printf("%d", e);
	}
}

/*������*/
void main() 
{
	int N, m; //�ֱ����ڴ��Ҫת����ʮ���ƺ�Ҫת�����Ľ���
	printf("������Ҫת����ʮ��������"); 
	scanf("%d", &N);
	printf("������Ҫת���Ľ��ƣ�");
	scanf("%d", &m);
	conversion(N, m); //���ý���ת������
}