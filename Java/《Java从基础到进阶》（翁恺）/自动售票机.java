package hello;
import java.util.Scanner;

public class �Զ���Ʊ�� {
	//	�Զ���Ʊ��
	public static void main(String[] args) {
		//��ʼ��
		Scanner in =new Scanner(System.in);
		int balance=0;
		//	����Ͷ�ҽ��
		while(true)
		{
			System.out.println("��Ͷ�ң�");
			int amount = in.nextInt();
			balance=balance+amount;
			System.out.println(amount);
			if(balance>=10)
			{
				//	��ӡ��Ʊ
				System.out.println("********************");
				System.out.println("* Java�Ǽ���·ר�� *");
				System.out.println("*   ��ָ����λƱ   *");
				System.out.println("*   Ʊ�ۣ� 10Ԫ    *");
				System.out.println("********************");
				//	���㲢��ӡ����
				System.out.println("���㣺"+(amount-10));
				balance=0;
			}
			else 
			{
				balance=balance+amount;
			}
		}	
	}
}
