package ����;

public class Exam2_1 {
	public static void main(String[] args) {
		byte a;
		int b=325;
		double c =346.73;
		a=(byte)b; //bתbyte����
		System.out.println("int->byte:"+b+"->"+a);
		b=(int)c;//cתint����
		System.out.println("double->int:"+c+"->"+b);
	}
}
