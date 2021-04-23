package ����;
class MyDate{     //����һ��MyDate��
	private int year;      //���ó�Ա�������꣬�£���
	private int month;
	private int day;
	public MyDate(int year,int month,int day) { //��Ա������¼��������
		this.year=year;
		this.month=month;
		this.day=day;
	}
	public MyDate(){  //��Ա�������Զ�Ĭ������MyDate����Ϊ2020.1.1
		this(2020,1,1);
	}
	public MyDate(MyDate oday) { //��Ա����������ĳ����
		this(oday.year,oday.month,oday.day);
	}
	public void setYear(int year) {  //��Ա����������¼�����
		this.year=year;
	}
	public int getYear() {  //��Ա���������ظ������
		return year;
	}
	public void setMonth() { //��Ա����������¼���·�
		this.month=month;
	}
	public int getMonth() {  //��Ա���������ظ����·�
		return month;
	}
	public void setDay(int day) {  //��Ա����������¼������
		this.day=day;
	}
	public int getDay() {  //��Ա��������������
		return this.day=((day>=1)&(day<=31))?day:1;
	}
	public String toString() { //��Ա���������ؼ䵥������������Ϻõ�����
		return this.year+"-"+this.month+"-"+this.day;
	}
	public void print() { //��Ա������������Ϻ������
		System.out.println("date is "+this.toString());
	}
}

public class Date {
	public static void main(String[] args) {
		MyDate oday1=new MyDate();
		MyDate oday2=new MyDate(2020,1,1);
		MyDate oday3=new MyDate(oday2);
		oday1.print();
		oday2.print();
		oday3.print();
		}
}
