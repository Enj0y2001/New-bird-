//1.5.1 Sales_item ��
//��дSale_item
/*#include<iostream>      //�������Ա�׼���ͷ�ļ��ã�<>����Χͷ�ļ���
#include"Sales_item.h"    //���ڲ����ڱ�׼���ͷ�ļ�������˫���ţ�""����Χ
int main() 
{
	Sales_item book;
	//����ISBN�š��۳��Ĳ����Լ����ۼ۸�
	std::cin >> book;
	//д��ISBN�����۵Ĳ����������۶��ƽ���۸�
	std::cout << book << std::endl;
	return 0;
}*/
 
//Sales_item ����ļӷ�
/*#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;  //��ȡһ�Խ��׼�¼
	std::cout << item1 + item2 << std::endl; //��ӡ���ǵĺ�
	return 0;
}*/

//1.5.1����ϰ
//��ϰ1.20����ȡһ���鼮���ۼ�¼����ÿ����¼��ӡ����׼����ϡ�
/*#include<iostream>
#include"Sales_item.h"
int main(int argc,char** argv)
{
	using namespace std;
	Sales_item item;
	while(cin>>item)
	cout << item << endl;
	return 0;
}*/

//��ϰ1.21����д���򣬶�ȡ����ISBN��ͬ��Sales_item����������ǵĺ͡�
/*#include<iostream>
#include"Sales_item.h"
int main(int argc,char** argv) 
{
    using namespace std;
	Sales_item item1, item2;
	cin >> item1 >> item2;  //��ȡһ�Խ��׼�¼
	if (item1.isbn() == item2.isbn())
	{
		cout << item1 + item2 << endl;
	}
	else
	{
		cout << "���������ISBN����ͬ" << endl;
	}
	return 0;
}*/

//��ϰ1.22����д���򣬶�ȡ���������ͬISBN�����ۼ�¼��������м�¼�ĺ͡�
/*#include<iostream>
#include"Sales_item.h"
int main(int argc,char** argv)
{
	using namespace std;
	Sales_item item1,item2;
	while (cin>>item2)
	{
		item1 += item2;
	}
	cout << item1 << endl;
	return 0;
}*/

//1.5.2��ʶ��Ա����
//������Sales_item������ӵĳ�������Ӧ�ü�����������Ƿ������ͬ��ISBN
/*#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	//�����ȼ��item1��item2�Ƿ��ʾ��ͬ��
	if (item1.isbn() == item2.isbn()) 
	{
		std::cout << item1 + item2 << std::endl;
		return 0; //��ʾ�ɹ�
	}
	else 
	{
		std::cerr << "Data must refer to sam ISBN"
			<< std::endl;
		return -1; //��ʾʧ��
	}
}*/

//1.5.2����ϰ
//��ϰ1.23����ȡ�������ۼ�¼����ͳ��ÿ��ISBN��ÿ���飩�м������ۼ�¼��
//δ����
/*#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item  trans1, trans2;
	int num = 1;                                        // ����
	std::cout << "���������������ۼ�¼"
		<< std::endl;
	if (std::cin >> trans1) {                          // �ж��Ƿ����������ۼ�¼ ������һ�����ۼ�¼��ֵ�� trans1 �� 
		while (std::cin >> trans2) {                   // �پ���һ��ѭ�����ٴν���һ�����ݸ�ֵ�� trans2 ��
			if (compareIsbn(trans1, trans2)) {         // �ж� trans1 ��trans2 �Ƿ���ͬ
				++num;
				std::cout << trans1.isbn() << "����"
					<< num << "�����ۼ�¼" << std::endl;
			}
			else {
				std::cout << "û�����ݣ�"
					<< std::endl;
				return -1;
			}
		}
	}
	return 0;
}*/

//��ϰ1.24�������ʾ���ISBN�Ķ������ۼ�¼��������һ������ÿһ��ISBN�ļ�¼Ӧ�þ���һ��

