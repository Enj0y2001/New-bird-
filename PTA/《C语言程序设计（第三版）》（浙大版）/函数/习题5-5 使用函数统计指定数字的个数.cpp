#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit ){
    int count=0,remainder;

    if(number<0){
        number*=-1;              //ȥ����
    }
    while(number>10){             
        remainder=number%10;         //ͨ����������һ������������ֳ�һ��һ���������Ƚ�
        number=number/10;            //ÿ���һ�������ͼ���һ������
        if(remainder==digit){        //�����ֳ�����������Ҫ��������������һ��
            count=count+1;
        }
    }
    if(number==digit){              //���һλ����������������������һ��
        count=count+1;
    }

    return count;
}
