//��������i�����ݵ��㷨˼·
/*��ʼ������˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)*/
/*�������*/
//Status GetElem(LinkList L, int i, ElemType* e)
//{
//	int j;
//	LinkList p; /*����һ���p*/
//	p = L->next;/*��pָ������L�ĵ�һ�����*/
//	j = 1;    /*jΪ������*/
//	while (p && j < i) /*p��Ϊ�ջ��߼�����j��û�е���iʱ��ѭ������*/
//	{
//		p = p->next; /*��pָ����һ�����*/
//		++j;
//	}
//	if (!p || j > i)
//	{
//		return ERROR; /*��i��Ԫ�ز�����*/
//		*e = p->data;/*ȡ��i��Ԫ�ص�����*/
//		return OK;
//	}
//}