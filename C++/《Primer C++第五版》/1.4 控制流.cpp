//1.4.1 while ���
//��1��10��ʮ����֮�ͣ�
/*#include<iostream>
int main()
{
	int sum = 0, va1 = 1;
	//ֻҪva1��ֵС�ڵ���10��whileѭ���ͻ����ִ��
	while (va1<=10)
	{
		sum += va1;//��sum +va1����sum
		++va1;     //��va1��1
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}*/


//1.4.1 ����ϰ
//��ϰ1.9����д����ʹ��whileѭ����50��100��������ӡ�
/*#include<iostream>
int main() 
{
	int sum = 0, va1 = 50;
	//ֻҪva1��ֵС�ڵ���100��whileѭ���ͻ��������
	while (va1<=100)
	{
		sum += va1;
		++va1;
	}
	std::cout << "Sum of 50 to 100 inclusive is "
		<< sum << std::endl;
	return 0;
}*/

//��ϰ1.10 ʹ�õݼ�������ѭ���еݼ�˳���ӡ��10��0֮�������
/*#include<iostream>
int main()
{
	using namespace std;
	int i = 10;
	cout << "��10��0֮�������Ϊ��" <<endl;	
	while (i>0)
	{
		cout << "i: "<<i<<endl;
		i--;
	}
	return 0;
}*/

//��ϰ1.11����д������ʾ�û�����������������ӡ������������ָ���ķ�Χ�ڵ���������
/*#include<iostream>
int main()
{
	using namespace std;
	int a=0, b=0;
	cout << "����������������" ;
	cin >> a >> b;
	if (a > b)
	{
		int t=0;
		t = a;
		a = b;
		b = t;
	}
	cout << "The number between " << a << " to " << b << " is:"<<endl;
	for (int i=a;i<=b;i++) 
	{
		cout << i<<endl;
	}
	return 0;
}*/


//1.4.2 for ���
//��for�������д��1�ӵ�10�ĳ���
/*#include<iostream>
int main()
{
	int sum = 0;
	//��1�ӵ�10
	for (int val = 1; val <= 10; ++val)
		sum += val;//�ȼ��� sum = sum +val
		std::cout << "Sum of 1 to 10 inclusive is "
			<< sum << std::endl;
		return 0;
}*/


//1.4.2����ϰ
//��ϰ��1.12�������forѭ�������ʲô���ܣ�sum����ֵ�Ƕ��٣�
// int sum = 0��
// for��int i = -100;i <= 100;++i��  //��-100�ӵ�100�ĺ�
//     sum+=i;                       //sum������ֵΪ0

//��ϰ��1.13ʹ��forѭ������1.4.1���е�������ϰ
//��1����д����ʹ��forѭ����50��100���������
/*#include<iostream>
int main()
{
	using namespace std;
	int a = 50, sum = 0;
	for (int i =a;i<=100;++i) 
	{
		sum += i;
	}
	cout << "Sum of 50 to 100 inclusive is " << sum << endl;
	return 0;
}*/

//(2����д����ʹ�õݼ��������ѭ���а��ݼ�˳���ӡ��10��0֮���������
/*#include<iostream>
int main()
{
	using namespace std;
	int a = 10;
	for (int i = a; i > 0; i--)
	{
		cout << i << endl;
	}
	return 0;
}*/

//(3)��д������ʾ�û�����������������ӡ��������������ָ���ķ�Χ������������
/*#include<iostream>
int main()
{
	using namespace std;
	int a = 0, b = 0;
	cout << "����������������";
	cin >> a >> b;
	if (a > b) 
	{
		int t;
		t = a;
		a = b;
		b = t;
	}
	cout << "The number between " << a << " to " << b << " is: " << endl;
	for (int i = a; i <= b; i++) 
	{
		cout << i << endl;
	}
	return 0;
}*/

//��ϰ1.14:�Ա�forѭ����whileѭ����������ʽ����ȱ�����ʲô��
//forѭ�����ŵ㣺1��
//         ȱ�㣺1��
//whileѭ�����ŵ㣺1��
//           ȱ�㣺1��

//��ϰ1.15����д���򣬰�����14ҳ����̽���롱�������еĳ�������ѧϰ���������ɵĴ�����Ϣ��


//1.4.3��ȡ����������������
//Ԥ�Ȳ�֪��Ҫ�Զ��ٸ�����ͣ���Ҫ���ϵĶ�ȡ����ֱ��û���µ�����Ϊֹ��
/*#include<iostream>
int main()
{
	int sum = 0, value = 0;   //����sum �� value ��int ��������ʼ��Ϊ0
	//��ȡ����ֱ�������ļ�β���������ж����ֵ�ĺ�
	while (std::cin >> value)    //�����û������ÿһ����
		sum += value;//�ȼ���sum= sum + value 
	std::cout << "Sum is:" << sum << std::endl;
	return 0;
}*/

//1.4.4 if���
//��if��䣬��ͳ����������ÿ��ֵ���������˶��ٴΣ�
/*#include<iostream>
int main()
{
	//currVal ����������ͳ�Ƶ��������ǽ��������ֵ����val
	int currVal = 0, val = 0;
	//��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
	if(std::cin>>currVal)
	{
		int cnt = 1;   //�����������ڴ���ĵ�ǰ�ĸ���
		while (std::cin>>val) //��ȡʣ�����
		{
			if (val==currVal) //���ֵ��ͬ
			{
				++cnt;        //��cnt��1
			}
			else
			{
				std::cout << currVal << " occurs "
					<< cnt << " times" << std::endl;
				currVal = val;//��ס��ֵ
				cnt = 1;//���ü�����
			}
		}//whileѭ�����������
		//��ס��ӡ�ļ������һ��ֵ�ĸ���
		std::cout << currVal << " occurs"
			<< cnt << " times" << std::endl;
	}//������if������������
	return 0;
}*/

//1.4.4����ϰ
//��ϰ1.17��������������ֵ������ȵģ����ڵĳ������ʲô�����û���ظ�ֵ������ֻ�����ô���ģ�
//          ������������ֵ������ȵģ���ʾ��xxx occurs xxx times��
//          ���û���ظ�ֵ:ÿһ��ֵ���ֵĴ�������1��ʾ����

//��ϰ1.18�����벢���б��ڵĳ��򣬸�������ȫ����ͬ��ֵ���ٴ����г�������û���ظ���ֵ��
//          ��������ȫ����ͬ��ֵ��û����ʾ
//          ����û���ظ���ֵ��ÿһ��ֵ���ֵĴ�������1��ʾ����

//��ϰ1.19���޸���Ϊ1.4.1����ϰ1.10����д�ĳ��򣨴�ӡһ����Χ�ڵ�������ʹ���ܴ����û�����ĵ�һ�����ȵڶ�����С�������
/*#include<iostream>
int main()
{
	using namespace std;
	int a = 0, b = 0;
	cout << "����������������";
	cin >> a >> b;
	if (a > b)
	{
		int t;
		t = a;
		a = b;
		b = t;
	}
	cout << "The number between " << a << " to " << b << " is: " << endl;
	for (int i = a; i <= b; i++)
	{
		cout << i << endl;
	}
	return 0;
}*/