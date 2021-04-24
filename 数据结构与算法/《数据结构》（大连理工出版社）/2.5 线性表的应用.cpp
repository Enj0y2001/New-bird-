/*//2.5.1 Լɪ������
//Լɪ��Դ����
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct NodeType  //�Զ���ṹ������
{
	int id; //���
	int password; //����
	struct NodeType* next; //����ָ����һ������ָ��
}NodeType;

//��������
void CreatList(NodeType**, int);//��������ѭ������
NodeType* GetNode(int, int);//�õ�һ�����
void PrntList(NodeType*);//��ӡѭ������
int IsEmptyList(NodeType*);//���������Ƿ�Ϊ��
void JosephusOperate(NodeType**, int);//���С�Լɪ�򻷡�����

//������
int main(void) 
{
	int n = 0; //����һ������nΪ����
	int m = 0; //����һ������mΪ��ʼ����
	NodeType* pHead = NULL;  //����pHeadָ��
	do 
	{
		if (n > MAX)
		{
			//����n�����������ѭ������������һ��ѭ����������������n��ֱ����������Ϊֹ
			printf("����̫�࣬���������룡\n");
		}
		printf("����������n�����%d����:", MAX);
		scanf("%d", &n);
	} while (n > MAX);
	printf("�������ʼ����m:");
	scanf("%d", &m);
	CreatList(&pHead, n); //��������ѭ������
	printf("\n-----------��ӡѭ������-----------\n");
	PrntList(pHead); //��ӡѭ������
	printf("\n-----------��ӡ�������-----------\n");
	JosephusOperate(&pHead, m);
	return 1;
}

//��������
void CreatList(NodeType** ppHead, int n) //������n������ѭ������ppHead  //��ȡ����������n��
{
	int i = 0;  //����һ������iΪ����
	int iPassword = 0;  //����һ������iPasswordΪ��������
	NodeType* pNew = NULL;    //����pNewָ�룬��ָ���½����
	NodeType* pCur = NULL;    //����pCurָ��
	for (i=1;i<=n;i++)   //����¼��ÿһ��ѧ���ĸ�������
	{
		printf("�����%d�������룺", i);
		scanf("%d", &iPassword);
		pNew = GetNode(i, iPassword); //���洢��ѧ��id��ѧ������
		if (*ppHead==NULL)  //���*ppHeadָ��ָ���Ϊ�ս��
		{
			*ppHead = pCur = pNew; //������ָ�붼ָ���½����
			pCur->next = *ppHead; 
		}
		else 
		{
			pNew->next = pCur->next;
			pCur->next = pNew;
			pCur = pNew;
		}
	}
	printf("��ɵ���ѭ������Ĵ���!\n");
}

NodeType* GetNode(int iId, int iPassword) //�����д��ͱ�ź����� //��ȡ��������id���������룩
{
	NodeType* pNew = NULL; //����ָ��
	pNew = (NodeType*)malloc(sizeof(NodeType)); //Ϊ��ǰ��㿪���¿ռ�
	if (!pNew) //������ٿռ�ʧ��
	{
		printf("Error,the memory is not enough!\n");
		exit(-1);
	}
	pNew->id = iId;  //������id��ֵ���������ϵ�id
	pNew->password = iPassword; //���������븳ֵ���������ϵ�����
	pNew->next = NULL; //pNew��nextָ��գ��ÿձ�β
	return pNew; //����ָ�룿
}

void PrntList(NodeType* pHead) //���������n���ˣ���������룬���ԭʼ����Ĵ�ӡ
{
	NodeType* pCur = pHead;
	if (!IsEmptyList(pHead)) //����EmptyList()�������ж�if����Ƿ�ִ�У���pHeadΪ����ִ��
	{
		printf("--ID-- --PASSWORD--\n");
		do 
		{
			printf("%3d  %7d\n",pCur->id,pCur->password);
			pCur = pCur->next; //��ָ�����pCur��Ϊָ���̽��
		} while (pCur != pHead);
	}
}

int IsEmptyList(NodeType* pHead) 
{
	if (!pHead) 
	{
		//��pHeadΪ�գ���ʾ���ա���������ֵ
		printf("The list is empty!\n");
		return 1;
	}
	return 0;//���򷵻�0
}

void JosephusOperate(NodeType** ppHead, int iPassword)
{
	int iCounter = 0;
	int iFlag = 1;
	NodeType* pPrv = NULL;
	NodeType* pCur = NULL;
	NodeType* pDel = NULL;
	pPrv = pCur = *ppHead;
	while (pPrv->next != *ppHead) 
	{
		pPrv = pPrv->next; //��pPrv��ʼΪָ��β��㣬Ϊɾ���������׼��
	}
	while (iFlag) 
	{
		for (iCounter = 1; iCounter < iPassword;iCounter++)
		{
			pPrv = pCur;
			pCur = pCur->next;
		}
		if (pPrv == pCur) 
		{
			iFlag = 0;
		}
		pDel = pCur;      //ɾ��pCurָ��Ľ�㣬�����˳���
		pPrv->next = pCur->next; //ʹ��pPrvָ���������¸������������pCur���������ѽ�
		pCur = pCur->next;//��ָ��pCur��Ϊָ���̽�㣬����һ�����
		iPassword = pDel->password; //��¼���е������е�����
		printf("��%d���˳���<���룺%d>\n", pDel->password,pDel->password);
		free(pDel); //�ͷ�ɾ��pDelָ��Ľ��
	}
	*ppHead = NULL;
	getchar();
}*/