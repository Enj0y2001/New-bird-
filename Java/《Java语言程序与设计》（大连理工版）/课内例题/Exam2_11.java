package ����;
import java.util.Arrays; //������JDK����ṩ��Arrays�࣬������Զ�������в���
public class Exam2_11 {
	public static void main(String[] args) 
	{
		int[]a= {1,2,3,4,500,600,700,800};
		int[]b,c,d;
		b=new int[8];
		c=new int[8];
		d=new int[8];
		System.out.println(Arrays.toString(a));//���a����Arrays.toString()Ϊֱ���������
		System.arraycopy(a,0,b,0,a.length);//��a����ĵ�һ������ʼ����ֱ�����һ�������Ƶ�b����ĵ�һ����ʼ�滻
		System.out.println(Arrays.toString(b));
		System.arraycopy(a,0,c,0,4);//arraycopyΪȡ����Ԫ�ع��ܣ���ʽ��arraycopy(����1����������1��ʼ����Ԫ���±꣬����2����������2��ʼ����Ԫ���±꣬���Ƹ���)
		//����arraycopy������������aǰ4��Ԫ�ص�����c�е�ǰ4��Ԫ��
		System.out.println(Arrays.toString(c));
		//Arrays����toString������������c��Ԫ��ֵ
		System.arraycopy(a,4,d,0,4);
		//����arraycopy������������a�ĺ�4��Ԫ�ص�����d�е�ǰ4��Ԫ��
		System.out.println(Arrays.toString(d));
		c[c.length-1]=-100;
		//��-100��������c�����һ��Ԫ��
		d[d.length-1]=-200;
		System.out.println(Arrays.toString(c));
		System.out.println(Arrays.toString(d));
	}
}
