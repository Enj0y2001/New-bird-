//��̬��������������������
/*���Ա�ľ�̬����洢�ṹ*/
//#define MAXSIZE 1000 /*�����������󳤶���1000*/
//typedef struct
//{
//	ElemType data;
//	int cur; /*�α꣨Cursor����Ϊ0ʱ��ʾ��ָ��*/
//}Component,StaticLinkLinst[MAXSIZE];

//��������δ��ʹ�õ�����Ԫ��
//��̬�����ʼ��
/*��һά����space�и���������һ��������*/
/*space[0].cur Ϊͷָ�룬��0����ʾ��ָ��*/
//Status InitList(StaticLinkList space)
//{
//	int i;
//	for (i = 0; i < MAXSIZE - 1; i++) 
//	{
//		space[i].cur = i + 1;//space[i]�൱��������space[i].cur=i+1�൱��ָ����
//	}
//	space[MAXSIZE - 1].cur = 0;/*Ŀǰ��̬����Ϊ�գ����һ��Ԫ�ص�curΪ0*/
//	return OK;
//}

//3.12.1 ��̬����Ĳ������
/*�����ÿռ�����ǿգ��򷵻ط���Ľ���±꣬���򷵻�0*/
//int Malloc_SLL(StaticLinkList space)
//{
//	int i = space[0].cur;/*��ǰ�����һ��Ԫ�ص�cur���ֵ*/
//	                     /*����Ҫ���صĵ�һ�����ÿ��е��±�*/
//	if (space[0].cur)
//	{
//		space[0].cur = space[i].cur; /*����Ҫ�ó�һ��������ʹ���ˣ���������*/
//		                             /*�͵ð�������һ��������������*/
//		return i;
//	}
//}

/*��L�е�i��Ԫ��֮ǰ�����µ�����Ԫ��e*/
//Status ListInsert(StaticLinkList L, int i, ElemType e)
//{
//	int j, k, l;
//	k = MAX_SIZE - 1;/*ע��k���������һ��Ԫ�ص��±�*/ //k=MAX_SIZE-1=999
//	if (i<1||i>ListLength(L)+1)  //�����ֵ���Ϸ�
//	{
//		return ERROR;
//	}
//	j = Malloc_SSL(L);/*��ÿ��з������±�*/
//	if (j)
//	{
//		L[j].data = e;/*�����ݸ�ֵ���˷�����data*/
//		for (l = 1; l <= i - 1; l++) /*�ҵ���i��Ԫ��֮ǰ��λ��*/
//		{
//			k = L[k].cur; //ʹ��k=999���õ�k=L[999].cur=1,�ڵõ�k=L[1].cur=2
//		}
//		L[j].cur = L[k].cur;/*�ѵ�i��Ԫ��֮ǰ��cur��ֵ����Ԫ�ص�cur*/
//		L[k].cur = j;/*����Ԫ�ص��±긳ֵ����i��Ԫ��֮ǰԪ�ص�cur*/
//		return OK;
//	}
//	return ERROR;
//}

//3.12.2 ��̬�����ɾ������
/*ɾ����L�е�i������Ԫ��e*/
//Status ListDelete(StaticLinkList L, int i)
//{
//	int j, k;
//	if (i<1 || i>ListLength(L)) //ɾ��λ�ò��Ϸ�
//	{
//		return ERROR;
//	}
//	k = MAX_SIZE - 1;   //k=999
//	for (j = 1; j <= i - 1; j++)
//	{
//		k = L[k].cur;
//	}
//	j = L[k].cur;    
//	L[k].cur = L[j].cur;
//	Free_SSL(L, j);  //�����뿴�¸�����
//	return OK;
//}

/*���±�Ϊk�Ŀ��н����յ���������*/
//void Free_SSL(StaticLinkList space, int k)
//{
//	space[k].cur = space[0].cur;/*�ѵ�һ��Ԫ��cur��ֵ��Ҫɾ���ķ���cur*/
//	space[0].cur = k;/*��Ҫɾ���ķ����±긳ֵ����һ��Ԫ�ص�cur*/
//}

/*��ʼ��������̬����L�Ѵ��ڡ��������������L������Ԫ�ظ���*/
//int ListLength(StaticLinkList L)
//{
//	int j = 0;
//	int i = L[MAXSIZE - 1].cur;
//	while (i)
//	{
//		i = L[i].cur;
//		j++;
//	}
//	return j;
//}