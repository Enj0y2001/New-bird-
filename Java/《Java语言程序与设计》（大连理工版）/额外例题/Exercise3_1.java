package ��������;

class StaticDemo{
	static int x;
	int y;
	public static int getX() {
		return x;
	}
	public static void setX(int newX) {
		x=newX;
	}
	public int getY() {
		return y;
	}
	public void setY(int newY) {
		y=newY;
	}
}
public class Exercise3_1 {
	public static void main(String[] args) {
		System.out.println("��̬��x="+StaticDemo.getX());
//		//��ʾ�������Ƿ�������ʱ���������Ϊʲô��
//		System.out.println("ʵ����y="+StaticDemo.getY());
		StaticDemo a = new StaticDemo();
		StaticDemo b = new StaticDemo();
		a.setX(1);
		a.setY(2);
		b.setX(3);
		b.setY(4);
		System.out.println("��̬��a.x="+a.getX());
		System.out.println("ʵ����a.y="+a.getY());
		System.out.println("��̬��b.x="+b.getX());
		System.out.println("ʵ����b.y="+b.getY());
		
		}
}
