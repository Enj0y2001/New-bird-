//3.8.1 ������Ĳ���
/*��ʼ������˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)*/
/*�����������L�е�i��λ��֮ǰ�����µ�Ԫ��e��L�ĳ��ȼ�1*/
//Status ListInsert(LinkList* L, int i, ElemType e)
//{
//	int j;
//	LinkList p, s;   //����һ�����pָ�������һ�����
//	while (p && j<i) /*Ѱ�ҵ�i�����*/
//	{
//		p = p->next;
//		++j;         
//	}
//	if (!p || j > i)
//	{
//		return ERROR; /*��i��Ԫ�ز�����*/
//	}
//	s = (LinkList)malloce(sizeof(Node));/*�����½�㣨C��׼������*/
//	s->data = e;
//	s->next = p->next; /*��p�ĺ�̽�㸳ֵ��s�ĺ�*/
//	p->next = s; /*��s����p�ĺ��*/
//	return OK;
//}

//3.8.2 �������ɾ��
/*��ʼ���������Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)*/
/*���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1*/
//Status ListDelete(LinkList* L, int i, ElemType* e)
//{
//	int j;
//	LinkList p, q;
//	p = *L;
//	j = 1;
//	while (p->next && j<i) /*Ѱ�ҵ�i�����*/ //��j<iʱ���ͱ�������
//	{
//		p = p->next;   //��p��ָ������ƶ�������ָ����һ���
//		++j;           //j�ۼ�1
//	}
//	if (!(p->next) || j > i) //��������ĩβpΪ�գ���˵����i��Ԫ�ز�����
//	{
//		return ERROR;/*��i��Ԫ�ز�����*/
//	}
//	//�����ҳɹ�������Ҫɾ���Ľ��p->next��ֵ��q
//	q=p->next;      
//	p->next = q->next;   /*��q�ĺ�̸�ֵ��p�ĺ��*/  //������ɾ����׼���
//	*e = q->data;        /*��q����е����ݸ�e*/  
//	free(q);             /*��ϵͳ���մ˽�㣬�ͷ��ڴ�*/
//	return OK;
//}