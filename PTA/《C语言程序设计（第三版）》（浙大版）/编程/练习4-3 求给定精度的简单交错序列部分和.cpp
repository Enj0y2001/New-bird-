#include <stdio.h>
#include <math.h>
int main(){
	double sum,eps;
	sum=0;
	scanf("%lf",&eps); //double��˫���ȸ����ͣ���Ӧ%lf
	int i=1;
	sum=1.0/i+sum;
	
	for(;fabs(1.0/i)>eps;){	//fabs���������ֵ
		i=i+3;	
		if(i%2==1){
			sum=1.0/i+sum;
		}else{
			sum=-1.0/i+sum;
		}
	}
			
	printf("sum = %.6lf",sum);//double ����ʹ����%f��ʽ���ᵼ������ֵ����
}
 