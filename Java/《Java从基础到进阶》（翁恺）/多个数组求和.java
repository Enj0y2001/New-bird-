package hello;
import java.util.Scanner;
public class ���������� {
	public static void sum(int a,int b)
	{
		int i;
		int sum;
		sum=0;
		for(i=a;i<=b;i++) 
		{
			sum+=i;
		}
		System.out.println(a+"��"+b+"�ĺ���"+sum);
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		sum(1,10);
		sum(20,30);
		sum(30,40);
		}
}
