package ����;
import java.util.*;
public class Exam2_5 {
	public static void main(String[] args) 
	{
		Scanner input = new Scanner (System.in);
		System.out.println("������1~7��������");
		int day = input.nextInt();//������÷�����ȡ����
		switch(day) 
		{
		case 7:System.out.println("������");break;
		case 1:System.out.println("����һ");break;
		case 2:System.out.println("���ڶ�");break;
		case 3:System.out.println("������");break;
		case 4:System.out.println("������");break;
		case 5:System.out.println("������");break;
		case 6:System.out.println("������");break;
		default:System.out.println("����������ڲ�����Ч��Χ�ڣ�");
		}
	}
}
