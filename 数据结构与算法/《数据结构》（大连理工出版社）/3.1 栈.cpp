//3.1.1 ջ�Ķ����Լ����������
//1��ջ�Ķ���
//ջ����ջ�������޶����ڱ��һ�˽��в����ɾ�����������Ա�
//ջ������������ɾ����һ��
//ջ�ף����ܹ������ɾ����һ��
//��ջ�������κ�Ԫ�ص�ջ

//��ջ�ϵ���Ҫ��������ջ�����в����ɾ��������

//��ջ����ջ����ջ�Ĳ������
//��ջ����ջ����ջ��ɾ������

//ջ����Ҫ�ص㣺�Ƚ����(First In Last Out(FILO))\����ȳ���Last In First Out(LIFO)��

//ֻ�������ջ��Ԫ�ز������ȳ�ջ

//2��ջ�Ļ�������
/*InitStack(&S):�����ջ
DestroyStack(&S):����ջ
ClearStack(&S):��Ϊ��ջ
EmptyStack(&S):�ж��Ƿ�Ϊ��ջ���ǿ�ջ����True,���ǿ�ջ����False
LengthStack(&S):��ջ����
TraverseStack(&S):����ջ����ջ�е�ÿ��Ԫ�ض�����һ��
GetTop(&S,e):��ȡջ��Ԫ�أ��洢��e��
Push(&S,e):��ջ,��Ԫ��e����ջS�У�ʹ���Ϊ�µ�ջ��Ԫ��
Pop(&S,e):��ջ����ջS��ջ��Ԫ��ɾ����������浽e��
*/

//3.1.2 ջ��˳��洢�ṹ������
//ջ�����ִ洢��ʾ������˳��洢����ʽ�洢
//˳��ջ��1������˳��洢�ṹ��ջ
//        2������һ���ַ�����Ĵ洢��Ԫ���δ����ջ�׵�ջ��������Ԫ�أ�ͬʱ����һ��ջ��ָ��top������ָʾ��ǰջ��λ�á�

//ջ��ָ��top=0ʱ��ʾ��ջ

//��ջ��1��������ʽ�洢�ṹ��ջ

//˳��ջ������˵����
/*#define Stack_Init_Size 100 //ջ�ĳ�ʼ��С
#define Stack Increment 10 //ջ�Ĵ洢�ռ��������
typedef int ElemType; //ElemTypeΪջ��Ԫ������
typedef struct 
{
	ElemType* stackdata; //ջ������Ԫ�ش洢�ռ䣨һλ���飩����ʼ��ַ
	int top; //ջ��ָ�룬ʵ������ջ��λ�õ������±�
	int stacksize; //ջ��ǰ�Ŀ��ô�С����ʼ��С��Stack_Init_Sizeָ��
}SeqStack;*/

//1����ʼ��˳��ջ
//Status InitStack(SeqStack* S) 
//{
//	if (!S) //if(!S)�ȼ���if(S==0)
//	{
//		return Err_InvalidParam; //˳��ջ��Ч
//	}
//	/*Ϊstackdata�����ڴ�ռ�*/
//	S->stackdata = (ElemType*)malloc(Stack_Init_Size*sizeof(ElemType)); //��ջ�ĳ�ʼ��С�з��䵱ǰջ�Ĵ�С
//	if (!S->stackdata) //�ȼ���if(S->stackdata==0)
//	{
//		return Err_Memory;//�ڴ�������
//	}
//	S->top = 0; //��ʼ��ջ��ָ��Ϊ0
//	S->stacksize = Stack_Init_Size; //����ջ��ǰ��С
//	return OK;
//}

//2�����˳��ջ
//Status ClearStack(SeqStack* S)
//{
//	if (!S) //���S������
//	{
//		return Err_InvalidParam; //˳��ջ��Ч
//	}
//	S->top = 0; //ջ��ָ������Ϊ0
//	return OK;
//}

//3���ж��Ƿ�Ϊ��ջ
//int EmptyStack(SeqStack* S)
//{
//	if (!S) 
//	{
//		return Err_InvalidParam; //˳�����Ч
//	}
//	return (S->top == 0); //top����0Ϊ�գ�����True�����򷵻�False
//}

//4������ջ�ĳ���
//int LengthStack(SeqStack* S) 
//{
//	return S->top; //topָʾջ��Ԫ�ظ���
//}

//5������˳��ջ
//void TraverseStack(SeqStack* S)
//{
//	int i;
//	for (i = 0; i < S->top; i++) //��ջ�׿�ʼֱ��i����ջ��Ϊֹ
//	{
//		printf("%d\t", S->stackdata[i]);
//	}
//}

//6����ȡջ��Ԫ��
//Status GetTop(SeqStack* S, ElemType* e)
//{
//	if (!S) //���S������
//	{
//		return Err_InvalidParam; //˳��ջ��Ч
//	}
//	if (S->top == 0)//���ջ��Ϊ0
//	{
//		return Err_NoResult; //ջΪ��
//	}
//	*e = S->stackdata[S->top - 1]; //��ȡջ��Ԫ��
//	return OK;
//}

//7��Ԫ����ջ
//Status Push(SeqStack* S, ElemType e)  //��ȡ��������˳��ջS����ջԪ�أ�
//{
//	ElemType* newstack;
//	if (!S) //�ж�˳��ջ�Ƿ����
//	{
//		return Err_InvalidParam; //˳��ջ��Ч
//	}
//	if (S->top == S->stacksize) //ջ����׷�Ӵ洢�ռ�
//	{
//		newstack = (ElemType*)malloc(S->stackdata, (S->stacksize + Stack_Increment) * sizeof(ElemType));  //��
//	}
//	if (!newstack)   //��
//	{
//		return Err_Memory; //�ڴ�������
//	}
//	S->stackdata = newstack;
//	S->top = S->stackdata + S->stacksize; //�޸ĵ�ǰջ�Ŀ��ÿռ��С
//	S->stackdata[S->top++] = e; //��Ԫ��e����ջ����Ȼ��top��1
//	return OK;
//}

//8��Ԫ�س�ջ
//Status Pop(SeqStack* S, ElemType* e) //��ȡ��������˳��ջS��ջ��Ԫ�أ�
//{
//	if (!S) //�ж�˳��ջ�Ƿ����
//	{
//		return Err_InvalidParam;//˳��ջ��Ч
//	}
//	if (S->top == 0)
//	{
//		return Err_NoResult; //ջΪ��
//	}
//	*e = S->stackdata[--S->top];//��top��1��Ȼ��ջ��Ԫ�ش���e��
//	return OK;
//}

//3.1.3 ջ����ʽ�洢�ṹ������

//��ջ�����õ�������Ϊջ�Ĵ洢�ṹ
//��ջ��ջ�����������һ�����
//��ջ��ջ�ף����������һ�����

//��ջ�ȿ����Ǵ�ͷ��������Ҳ�����ǲ���ͷ��������

//���ڲ���ͷ������ջ��ջ��ָ��ֱ��ָ��ջ�����
//���ڴ�ͷ������ջ��ջ��ָ��ָ��ͷ��㡣

//��ջ���ṹ
//typedef struct node 
//{
//	ElemType data; //���������ڴ��ջ�е�����Ԫ��
//	Struct node *next;//ָ����
//}StackNode,*LinkStack;

//��ջ��һ���޶�ֻ���ڱ�ͷ����1��λ�ã����в��루��ջ����ɾ������ջ������������

//1����ȡջ��Ԫ��
//Status GetTop(LinkStack top, ElemType* e) //��ȡ����������ջtop������һ��e���洢ջ��Ԫ�أ�
//{
//	if (!top) //���top=0��
//	{
//		return Err_InvalidPara; //��ջ��Ч
//	}
//	if (!top->next)//ջ��Ϊ0����ջ��
//	{
//		return Err_NoResult; //ջΪ��
//	}
//	*e = top->next->data; //��ȡջ��Ԫ�أ����������e��
//	return OK;
//}

//2��Ԫ����ջ
//Status Push(LinkStack top, ElemType e)//��ȡ����������ջtop������e�������Ҫ����Ԫ�أ�
//{
//	StackNode* s; //����ָ��s
//	if (!top) //��ջ��Ч topͷ���ֵΪ0
//	{
//		return Err_InvalidParam; 
//	}
//	s = (StackNode*)malloc(sizeof(StackNode)); //�����½��s
//	if (!s) //�ڴ������� 
//	{
//		return Err_Memory; 
//	}
//	s->data = e;//������Ԫ��e��ŵ��½���������
//	s->next = top->next; //��s���뵽ջ��
//	top->next = s;
//	return OK;
//}

//3��Ԫ�س�ջ
//Status Pop(LinkStack top, ElemType* e)//��ȡ����������ջtop����e���洢ջ��Ԫ�أ�
//{
//	StackNode* p;  //����pָ��
//	if (!top) //��ջ��Ч //topͷ���ֵΪ��
//	{
//		return Err_InvalidParam; 
//	}
//	if (!top->next) //ջΪ�� //ջ������һ�����ֵΪ0
//	{
//		return Err_NoResult;
//	}
//	*e = top->next->data; //��ջ������Ԫ�ر�����e��
//	p = top->next;//pָ��ջ�����
//	top->next = p->next;//ɾ��ջ�����
//	free(p);//�ͷŽ��
//	return OK;
//}