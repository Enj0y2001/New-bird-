#include<stdio.h>
void pyramid( int n);

int main()
{
	int n;

	scanf("%d",&n);
	pyramid(n);

	return 0;
}

void pyramid(int n)             //�������������
{
	for(int i=1;i<=n;i++)        //������
	{
		for(int j=n-i;j>0;j--)   //����ո����е�����һ��Ҫ������ϵ��
		{
			printf(" ");
		}
	for(int k=1;k<=i;k++)        //���������Ԫ�ء����е�����һ��Ҫ������ϵ
	{
		printf("%d ",i);		
	}
	printf("\n");
	}
}
