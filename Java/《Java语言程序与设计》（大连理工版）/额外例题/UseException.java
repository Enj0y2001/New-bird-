package ��������;
class Circle2{
	  private double r;
	  public void setR(double r1) throws Exception{ //���������׳��쳣	
	    if(r1<0)
	      throw new Exception();//�׳��쳣ʵ��
		else
	      r=r1;
	  }
	  public void printArea(){
		System.out.println("Area is "+Math.PI*r*r);
	  }
	}
public class UseException {
	public static void main(String[] args){
		Circle2 r1=new Circle2();
		try{
		  r1.setR(-2);
		}catch(Exception e){
		  System.out.println(e.toString());
		}finally{
		  r1.printArea();
		}
	  }
}
