package ����;

class A{  //����
	int i,j; //������������Ա����i��j
	void showij() {  //������һ����Ա������������ʾ��Ա����i��j��ֵ
		System.out.println("i and j:"+i+" "+j);	
	}
}
class B extends A{ //B��̳�A�ࣨB����A������ࣩ
	int k;  //������һ����Ա����k
	void showk() {  //��Ա��������ʾk��ֵ
		System.out.println("k:"+k);
	}
	void sum() {  //��Ա�������������i��j��k�ĺ�
		System.out.println("i+j+k:"+(i+j+k));
	}
}

public class Exam3_7 {  //����
	public static void main(String[] args) {
		A father =new A();  //father �������
		B son = new B();    //son �������
		father.i=10;father.j=20; //�������еĳ�Ա������ֵ
		father.showij();  //��ʾ�����Ա������ֵ
		son.i=7;son.j=8;son.k=9; //�������еĳ�Ա������ֵ
		son.showij(); //����̳и���ĳ�Ա����������ʾ�޸ĸ����Ա����i��j����ֵ
		son.showk();  //������ʾ�Լ��ĳ�Ա����k����ֵ
		son.sum();  //�������i+j+k�ĺ�
		}
}
