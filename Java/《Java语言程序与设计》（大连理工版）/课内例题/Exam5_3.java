package ����;
class Age
{
	private int age;
	public void set(int age) throws Exception
	{
		if(age>0 && age<160)
			this.age = age;
		else
			throw new Exception("������Ч"+age);
	}
}
public class Exam5_3 {
	public static void main(String[] args)
	{
		Age a1=new Age();
		Age a2=new Age();
		try{
			a1.set(-2);
		}catch(Exception e){
			System.out.println(e.toString());
		}
	}
}
