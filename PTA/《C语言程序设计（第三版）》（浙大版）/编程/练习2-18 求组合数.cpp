#include<stdio.h>
#include<math.h>

double Fact(int n){  //Fact�����Ķ��壨�۳˺�����
    int i;
    double sum=1;
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;
}

int main() //������
{
	int m,n;
	double up,down,result;
	scanf("%d %d",&m,&n);
	if(m<=n)
	{
		up=Fact(n); //�����
		down=Fact(m)*Fact(n-m); //���ĸ
		result= 1.0*up/down;
	}else{
		return 0;
	}
	printf("result = %.0f\n",result);
	return 0;

}