/*���Ա��˫������洢�ṹ*/
//typedef struct DulNode
//{
//	ElemType data;
//	struct DuLNode* prior; /*ֱ��ǰ��ָ��*/
//	struct DuLNode* next;  /*ֱ�Ӻ��ָ��*/
//}DulNode,*DuLinkList;

//���������е�ĳһ�����p�����ĺ�̵�ǰ�������Լ���
//Լ�����Ϻ�����һվ�����ݣ��Ϻ�����һվ��ǰһվ�����
//p->next->prior = p = p->prior->next

//�洢Ԫ��e�Ľ��Ϊs��Ҫ��s������p��p->next֮��
//s - >prior = p; /*��p��ֵ��s��ǰ��*/
//s -> next = p->next; /*��p->next��ֵ��s�ĺ��*/
//p -> next->prior = s; /*��s��ֵ��p->next��ǰ��*/
//p -> next = s�� /*��s��ֵ��p�ĺ��*/

//ɾ�����p
//p->prior->next = p->next; /*��p->next��ֵ��p->prior�ĺ��*/
//p->next->prior = p->prior;/*��p->prior��ֵ��p->next��ǰ��*/
//free(p);