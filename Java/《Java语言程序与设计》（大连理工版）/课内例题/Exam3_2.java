package ����;

public class Exam3_2 {
	public static void main(String[] args) 
	{
		var1 v1=new var1();
		var1 v2=new var1();
		v1.print();
		v2.print();
	}
}
class var1{
	static int a=1; //��Ա����  a�Ǿ�̬����
	int b=1; //��Ա���� b��Ĭ�ϱ���
	public void print() {
		int c=1; //c���ڷ����ڵı���
		++a;
		++b;
		++c;
		System.out.println("a="+a);
		System.out.println("b="+b);
		System.out.println("c="+c);
	}
}
