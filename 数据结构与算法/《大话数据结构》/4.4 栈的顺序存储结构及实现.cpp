//4.4.1 ջ��˳��洢�ṹ

//˳��ջ��˳��洢��ջ
//top��(1)һ��������ָʾջ��Ԫ�����������е�λ�ã���ͬ���α꿨�ߵ��α꣩
//     (2)ջ����top���Ա��䣬����������α겻�ܳ����ߵĳ��ȡ�
//StackSize:(1)�洢ջ�ĳ��ȣ���ջ��λ��top����С��StackSize
//          (2)��ջ������һ��Ԫ��ʱ��top����0�����ͨ���ѿ�ջ���ж�����Ϊtop����-1

//ջ�Ľṹ����
//#define ERROR 0
//#define OK 1
//#define MAXSIZE 5
//typedef int SElemType;/*SElemType���͸���ʵ������������������Ϊint*/
//typedef struct 
//{
//	SElemType data[MAXSIZE];
//	int top; /*����ջ��ָ��*/
//}SqStack;

//4.4.2 ջ��˳��洢�ṹ������ջ����
//��ջ����push������
/*����Ԫ��eΪ�µ�ջ��Ԫ��*/
//Status Push(SqStack* S, SElemType e)
//{
//	if (S->top == MAXSIZE) /*ջ��*/
//	{
//		return ERROR;
//	}
//	S->top++; /*ջ��ָ���һ*/
//	S->data[S->top] = e; /*���²���Ԫ�ظ�ֵ��ջ���ռ�*/
//	return OK;
//}

//4.4.3 ջ��˳��洢�ṹ������ջ����
/*��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR*/
//Status Pop(SqStack* S, SElemType* e)
//{
//	if (S->top == -1)   //ջΪ��ջ
//	{
//		return ERROR;
//	}
//	*e = S->data[S->top]; /*��Ҫɾ����ջ��Ԫ�ظ�ֵ��e*/
//	S->top--; /*ջ��ָ���һ*/
//	return OK;
//}