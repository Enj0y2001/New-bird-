//���Ա�ĳ���������������
//ADT ���Ա�List��
//Data
//	  ���Ա�����ݶ��󼯺�Ϊ{a1��a2,......,an},ÿ��Ԫ�ص����;�λDataType�����У�����
//    һ��Ԫ��a1�⣬ÿһ��Ԫ������ֻ��һ��ֱ��ǰ��Ԫ�أ��������һ��Ԫ��an�⣬ÿһ��
//    Ԫ������ֻ��һ��ֱ�Ӻ��Ԫ�ء�����Ԫ��֮��Ĺ�ϵ��һ��һ�Ĺ�ϵ��
//
//Operation
//     InitList(*L);         ��ʼ������������һ���յ����Ա�
//     ListEmpty(L);         �����Ա�Ϊ�գ�����true�����򷵻�false��
//     ClearList(*L);        �����Ա����
//     GetElem(L,i,*e);      �����Ա�L�еĵ�i��λ��ֵ���ظ�e��
//     LocateElem(L,e);      �����Ա�L�в��������ֵe��ȵ�Ԫ�أ�������ҳɹ�������
//                           ��Ԫ���ڱ�����ű�ʾ�ɹ������򣬷���0��ʾʧ�ܡ�
//     ListInsert(*L,i,e);   �����Ա�L�еĵ�i��λ�ò�����Ԫ��e��
//     ListDelete(*L,i,*e);  ɾ�����Ա�L�е�i��λ��Ԫ�أ�����e������ֵ��
//     ListLength(L);        �������Ա�L��Ԫ�ظ�����
//
//endADT

/*�����е������Ա�Lb�е�����La�е�Ԫ�ز��뵽La��*/
//void union(List* La, List* Lb)
//{
//	int La_len,Lb_len, i;
//	ElemType e; /*������La��Lb��ͬ������Ԫ��e*/
//	La_len = ListLength(La);/*�����Ա�ĳ���*/
//	Lb_len = ListLength(Lb);
//	for (i=1;i<=Lb_len;i++) 
//	{
//		GetElem(Lb, i, e);/*ȡLb�е�i������Ԫ�ظ���e*/
//		if (!LocateElem(La, e, equal))/*La�в����ں�e��ͬ����Ԫ��*/
//		{
//			ListInsert(La, ++La_len, e);/*����*/
//		}
//	}
//}