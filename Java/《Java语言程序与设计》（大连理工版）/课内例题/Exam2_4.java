package ����;
import java.util.Scanner; //������JDK����ṩ��Scanner�࣬������Ի�ȡ�Ӽ������������
public class Exam2_4 {
	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in); //ʵ����һ������input��System.in�ǲ���
		System.out.println("������ɼ�");
		double score = input.nextDouble();//������÷�����ȡ���ݣ�input.nextDouble()�ǻ�ȡ���ݲ���ֵ��score
		if(score>=90)
			System.out.println("��ĳɼ��ȼ�Ϊ������");
		else if(score>=80) 
			System.out.println("��ĳɼ��ȼ�Ϊ������");
		else if(score>=70)
			System.out.println("��ĳɼ��ȼ�Ϊ���е�");
		else if(score>=60)
			System.out.println("��ĳɼ��ȼ�Ϊ������");
		else 
			System.out.println("��ĳɼ��ȼ�Ϊ��������");
	}
}
