package ����;

class Intsort{
	public String sort(int a,int b) {  //�������������򷽷�
		if(a>b)return a+" "+b;
		else return b+" "+b;
	}
	public String sort(int a,int b,int c) { //�������������򷽷�
		int swp;
		if(a<b) {swp=a;a=b;b=swp;}
		if(a<c) {swp=a;a=c;c=swp;}
		if(b<c) {swp=b;b=c;c=swp;}
		return a+" "+b+" "+c; 
	}
}

public class Exam3_5 { //�������࿼��Intsort���еķ���
	public static void main(String[] args) {
		Intsort s=new Intsort();
		System.out.println("�������Ӵ�С��������"+s.sort(1, 2));
		System.out.println("�������Ӵ�С��������"+s.sort(1, 2, 3));
		}
}
