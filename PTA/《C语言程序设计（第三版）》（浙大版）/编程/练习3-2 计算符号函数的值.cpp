#include<stdio.h>
//���ź���
int sign(int n)
{
	if(n==0)
	{
		return 0;
	}else if(n<0){
		return -1;
	}else{
		return 1;
	}//else
}//sign

//������
int main()
{
	int n,result;
	scanf("%d",&n);
	result=sign(n);
	printf("sign(%d) = %d\n",n,result);
	return 0;
}