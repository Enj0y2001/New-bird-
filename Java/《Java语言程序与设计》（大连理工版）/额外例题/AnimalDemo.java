package ��������;
abstract class Animal{
	protected String name;
	public Animal(String objName) {
		name=objName;
	} 
	protected abstract void show();
} 

class Elephant extends Animal{
	private int age =0;
	public Elephant(String objName,int objAge) {
		super(objName);
		age=objAge;
	}
	public void show() {
		String massage="����һֻ��ů�Ĵ���";
		massage+="\n�ҵ����ֽ�"+name;
		massage+="\n�ҵ�������"+age+"��";
		System.out.println(massage);
	}
}

class Monkey extends Animal{
	private String coatColor;
	public Monkey(String objName,String color) {
		super(objName);
		coatColor=color;
	}
	public void show() {
		String massage="����һֻ�ɰ���С��";
		massage+="\n�ҵ����ֽ�"+name;
		massage+="\n������һ��"+coatColor+"��ë��";
		System.out.println(massage);
	}
}

public class AnimalDemo {
	public static void main(String[] args) {
		Elephant elephant = new Elephant("��¡��",16);
		elephant.show();
		Monkey monkey=new Monkey("������","���ɫ");
		monkey.show();
		}
}
