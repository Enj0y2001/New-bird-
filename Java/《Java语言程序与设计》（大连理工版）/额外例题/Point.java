package ��������;

public class Point {
	private int x;
	private int y;
	public Point(int initX,int initY) {
		x=initX; 
		y=initY;
	}
	public void setX(int xValue) {
		x=xValue;
	}
	public int getX() {
		return x;
	}
	public void setY(int yValue) {
		y=yValue;
	}
	public int getY() {
		return y;
	}
	public double getToO() {
		return Math.sqrt(x*x+y*y);
	}
	public static void main(String[] args) {
		Point p1=new Point(3,5);
		Point p2=new Point(7,9);
		System.out.println("����p1��ԭ��ľ���Ϊ��"+p1.getToO());
		System.out.println("����p2��ԭ��ľ���Ϊ��"+p2.getToO());
		}
}
