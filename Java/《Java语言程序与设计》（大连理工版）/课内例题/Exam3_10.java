package ����;
interface N1{ //�ӿڵ�����
	int year=2020; //yearĬ��Ϊstatic final����
	int age(); //�޷����壬��ʹ��ʱ����뷽����
}
public class Exam3_10 implements N1{
	String xm;
	int sr; //��Ա����xmΪ������srΪ�������
	public static void main(String[] args) {
		Exam3_10 p1=new Exam3_10("�ų�",2004);
		p1.output();
		}
	Exam3_10(String a,int b){ //���췽��
		xm=a;
		sr=b;
	}
	
	public int age() { //ʵ�ֽӿڵķ�������������ֵ
		return year-sr;
	}
	
	public void output() { //ʵ�ֽӿڷ���,�������
		System.out.println(xm+"������Ϊ��"+this.age());
	}
}
