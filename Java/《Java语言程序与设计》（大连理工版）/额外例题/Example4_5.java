package ��������;

class Point1{
	int x,y;
	public Point1(int x,int y) {
		this.x=x;
		this.y=y;
		System.out.println("����Point:"+this.print());
	}
	public Point1() {
		this(1,1);
	}
	public String print() {
		return "["+x+","+y+"]";
	}
}
class Circle1 extends Point1{
	double r;
	public Circle1(double r,int x,int y) {
		super(x,y);	//���ø���Ĺ��췽����������Ϊ��һ�����
		this.r=r;
		System.out.println("Cirle:"+this.print());
	}
	public String print() {
		return "����Center="+super.print()+"	r="+r;
	}
}
public class Example4_5 {
	public static void main(String[] args) {
		Point1 p=new Point1();
		Circle1 circle=new Circle1(3.5,10,20);
		}
}
