package ����;
import java.util.Scanner;  //���ö�ȡ����
public class Exam2_3 {
	public static void main(String[] args) {
		Scanner reader = new Scanner(System.in); //Scanner ��ȡ������
		double count=0,price=0;
		System.out.print("�����������");
		count=reader.nextDouble();   //����ȡ������count��ֵ
		if(count>=1&&count<=90)
			price=0.6*count;
		if(count>91&&count<=150)
			price=0.6*90+1.1*(count-90);
		if(count>=151)
			price=0.6*90+1.1*60+1.7*(count-150);
		System.out.println(price); //ֱ�����price
	}
}
