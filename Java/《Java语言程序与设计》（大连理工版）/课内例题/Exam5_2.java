package ����;

public class Exam5_2 {
	public static void main(String[] args)
	{
		fun(0);
		fun(1);
		fun(2);
	}
	static void fun(int i)
	{
		System.out.println("���÷�����fun("+i+")");
		try
		{
			if(i==0)
			{
				System.out.println("û���쳣��");
			}
			if(i==1){int a=0;int b =0;b/=a;}
			if(i==2){int m[]=new int [5];m[5]=100;}
		}
		catch(ArithmeticException e)
		{
			System.out.println("��׽��ArithmeticException�쳣��");
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("��׽��ArrayIndexOutOfBoundsException�쳣��");
		}
		finally{System.out.println("������ϣ�");}
	}
}
