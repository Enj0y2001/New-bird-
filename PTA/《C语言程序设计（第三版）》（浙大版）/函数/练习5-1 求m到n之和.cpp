#include<stdio.h>

int sum(int m,int n);

int main()
{
	int m,n;

	scanf("%d %d",&m,&n);
	printf("sum = %d\n",sum(m,n));

	return 0;
}

int sum(int x,int y)   //�ۼӺ������塣
{
	int sum=0;         //�ۼ�sumһ��Ҫ��ʼ����

	for(x;x<=y;x++)
	{
		sum += x;
	}

	return sum;
}