package JAVA����;

import java.util.Scanner;

import java.util.Arrays;

public class HelloWorld {
//��ϰ-���
//	public static void main(String[] args) {
//		Scanner s =	new	Scanner(System.in);
//		int a = s.nextInt();
//		System.out.println("��һ��������"+a);
//		int b = s.nextInt();
//		System.out.println("�ڶ���������"+b);
//		System.out.println("�������ĺ��ǣ�"+(a+b));
//	}
	
//��ϰ-����
//	public static void main(String[] args) {
//		int i = 1;
//		int j =++i + i++ + ++i + ++i + i++;
//		System.out.println(j);
//	}
	
//��ϰ-BMI
//	public static void main(String[] args) {
//		double BMI;
//		Scanner s = new Scanner(System.in);
//		System.out.println("��������ߣ�m����");
//		double height = s.nextFloat();
//		System.out.println("���������أ�kg����");
//		double  weight = s.nextFloat();
//		BMI	=	weight/(height*height);
//		System.out.println("��ǰ��BMI�ǣ�"+BMI);
//		
//		if(BMI<18.5) {
//			System.out.println("���ع���");
//		}
//		else if(BMI >=18.5 && BMI<24) {
//			System.out.println("������Χ");
//		}
//		else if(BMI >=24 && BMI<27) {
//			System.out.println("���ع���");
//		}
//		else if(BMI >=27 && BMI<30) {
//			System.out.println("��ȷ���");
//		}
//		else if(BMI >=30 && BMI<35) {
//			System.out.println("�жȷ���");
//		}
//		else if(BMI >=35) {
//			System.out.println("�ضȷ���");
//		}
//	}
	
//��ϰ-��ϵ������
//	public static void main(String[] args) {
//		Scanner s =	new Scanner(System.in);
//		int a = s.nextInt();
//		System.out.println("��һ��������"+a);
//		int b = s.nextInt();
//		System.out.println("�ڶ���������"+b);
//		
//		System.out.print("�Ƚ�"+a+">"+b+"��");
//		if(a>b) 
//		{
//			System.out.println("true");
//		}
//		else {
//			System.out.println("false");
//		}
//		
//		System.out.print("�Ƚ�"+a+">="+b+"��");
//		if(a>=b) 
//		{
//			System.out.println("true");
//		}
//		else {
//			System.out.println("false");
//		}
//		
//		System.out.print("�Ƚ�"+a+"<"+b+"��");
//		if(a<b) 
//		{
//			System.out.println("true");
//		}
//		else {
//			System.out.println("false");
//		}
//		
//		System.out.print("�Ƚ�"+a+"<="+b+"��");
//		if(a<=b) 
//		{
//			System.out.println("true");
//		}
//		else {
//			System.out.println("false");
//		}
//		
//		System.out.print("�Ƚ�"+a+"=="+b+"��");
//		if(a==b) 
//		{
//			System.out.println("true");
//		}
//		else {
//			System.out.println("false");
//		}
//		
//		System.out.print("�Ƚ�"+a+"!="+b+"��");
//		if(a!=b) 
//		{
//			System.out.println("true");
//		}
//		else {
//			System.out.println("false");
//		}
//	}
	
//��ϰ-�߼�������
//	public static void main(String[] args) {
//		int i = 1;
//
//		boolean b = !(i++ == 3) ^ (i++ ==2) && (i++==3);
//
//		System.out.println(b);
//
//		System.out.println(i);
//	}
	
//��ϰ-���ټ���2x16
//	public static void main(String[] args) {
//		System.out.println(16<<1);
//	}
	
//��ϰ-λ������
//	public static void main(String[] args) {
//		int i = 3; // ��������11
//
//		int j = 2; // ��������10
//
//		int c = ((i | j) ^ (i & j)) << 2 >>> 1;
//		System.out.println(c);
//	}
	
//��ϰ-��ֵ������
//	public static void main(String[] args) {
//		int i = 1;
//		i+=++i;
//		System.out.println(i);
//	}
	
//��ϰ-�ж��Ƿ��ǹ�����
//	public static void main(String[] args) {
//		Scanner s = new Scanner(System.in);
//		System.out.println("�������ܼ�?");
//		int date = s.nextInt();
//		String massage = date < 6 ? "�����ǹ�����": "��������ĩ";
//		System.out.println(massage);
//	}
	
//��ϰ-����
//	public static void main(String[] args) {
//		Scanner s = new Scanner(System.in);
//		int year = s.nextInt();
//		if(year % 4 == 0 && year % 100 !=0 ) {
//			System.out.println(year+"������");
//		}
//		else if(year % 400 == 0) {
//			System.out.println(year+"������");
//		}
//		else {
//			System.out.println(year+"��������");
//		}
//	}
	
//��ϰ-����
//	public static void main(String[] args) {
//		Scanner s = new Scanner(System.in);
//		System.out.println("�������·�");
//		int month = s.nextInt();
//		switch(month) {
//		case 1:
//		case 2:
//		case 3:
//			System.out.println("����");
//			break;
//		case 4:
//		case 5:
//		case 6:
//			System.out.println("����");
//			break;			
//			
//		case 7:
//		case 8:		
//		case 9:
//			System.out.println("����");
//			break;			
//
//		case 10:
//		case 11:
//		case 12:		
//			System.out.println("����");
//			break;			
//
//		}
//	}
	
//��ϰ-�׳�
//	public static void main(String[] args) {
//		Scanner s = new Scanner(System.in);
//		System.out.println("������һ��������");
//		int num = s.nextInt();
//		int i=1;
//		int result=1;
//		while(i<=num) {
//			result *=i;
//			i++;
//		}
//		System.out.println("�׳��ǣ�"+result);
//	}
	
//��ϰ-��ؤ
//	static int inCome(int day,int income) {
//		for(int i = 1; i<=day-1;i++) {
//			income=income*2;
//		}
//		return income;
//	}
//	
//	public static void main(String[] args) {
//		int income = 1;
//		int summy = 0;
//		for(int day=1;day<=10;day++) {
//			summy +=income;
//			income = inCome(day,2);
//		}
//		System.out.println(summy);
//	}
	
//��ϰ-���Ա���
//	public static void main(String[] args) {
//		for(int i=1;i<=100;i++) {
//			if(i%3==0 || i%5==0) {
//				continue;
//			}
//			System.out.println(i);
//		}
//	}
	
//��ϰ-������
//	final float monthincome	=	3000;	//������
//	final float investment	=	1000;	//ÿ��Ͷ��
//	final float p = 10000;	//����
	
//��ϰ-�ƽ�ָ��
//	public static void main(String[] args) {
//		float demominator	=	0;	//��ĸ
//		float member	=	0;	//����
//		float closer	=	0;	//����Ĵ�
//		float result	=	0;
//		float outputresult  = 0;
//		float i,j;
//		
//		
//		for(i=1;i<=20;i++) {
//			for(j=1;j<=20;j++) {
//				result = j	/	i;
//				
//				if(result>closer && result<0.618) {
//					closer=result;
//					member = j;
//					demominator	=	i;
//				}
//			}
//		}
//		outputresult = member / demominator;
//		System.out.print("��ƽ�ָ�㣨0.618�����������������ǣ�"+member+"/"+demominator+"="+outputresult);
//	}
	
//��ϰ-ˮ�ɻ���
//	public static void main(String[] args) {
//		int sum;
//		for(int i=1;i<=9;i++) {
//			for(int j = 0;j<=9;j++) {
//				for(int k = 0;k<=9;k++) {
//					sum=i*100+j*10+k;
//					if(sum==i*i*i+j*j*j+k*k*k) {
//						System.out.println(sum);
//					}
//				}
//			}
//		}
//	}
	
//��ϰ-Сѧ������
//	public static void main(String[] args) {
//		int a,b,c,d;
//		for(a=0;a<100;a++) {
//			for(b=0;b<100;b++) {
//				for(c=0;c<100;c++) {
//					for(d=0;d<100;d++) {
//						if(a+b==8 && a+c==14 && b+d==10 &&c-d==6) {
//							System.out.println("a="+a+",b="+b+",c="+c+",d="+d);
//						}
//					}
//				}
//			}
//		}
//	}
	
//��ϰ-������С��ֵ
//	public static void main(String[] args) {
//		int []a = new int[5];
//		a[0] = (int) (Math.random() * 100);
//		a[1] = (int) (Math.random() * 100);
//		a[2] = (int) (Math.random() * 100);
//		a[3] = (int) (Math.random() * 100);
//		a[4] = (int) (Math.random() * 100);
//		
//		System.out.println("�����еĸ����������:");
//		for (int i = 0; i < a.length; i++) 
//			System.out.println(a[i]);
//		
//		int min=a[0];
//		for(int i =1;i<5;i++) {
//			if(min>a[i]) {
//				min=a[i];
//			}
//		}
//		System.out.println("��������СֵΪ��"+min);
//	}
	
//��ϰ-���鷴ת
//	public static void main(String[] args) {
//		int []a = new int[5];
//		a[0] = (int) (Math.random() * 100);
//		a[1] = (int) (Math.random() * 100);
//		a[2] = (int) (Math.random() * 100);
//		a[3] = (int) (Math.random() * 100);
//		a[4] = (int) (Math.random() * 100);
//		
//		System.out.println("�����еĸ����������:");
//		for (int i = 0; i < a.length; i++) 
//			System.out.print(a[i]+"	");
//		
//		System.out.println();
//		
//		int []b=new int [5];
//		System.out.println("���鷴ת��:");
//		for(int i=0;i<b.length;i++) {
//			b[i]=a[4-i];
//			System.out.print(b[i]+"	");
//		}
//	}
	
//��ϰ-����
//	public static void printArray(int []a) {
//		for(int i = 0;i<a.length;i++) {
//			System.out.print(a[i]+"	");
//		}
//		System.out.println(" ");
//	}
//	
//	public static void main(String[] args) {
//		int []a = new int[5];
//		a[0] = (int) (Math.random() * 100);
//		a[1] = (int) (Math.random() * 100);
//		a[2] = (int) (Math.random() * 100);
//		a[3] = (int) (Math.random() * 100);
//		a[4] = (int) (Math.random() * 100);
//		
//		System.out.println("�����еĸ����������:");
//		printArray(a);
//			
//		System.out.println("ѡ��������:");
//		int temp;
//		int min;
//		for(int i=0;i<a.length-1;i++) {
//			min = a[i];
//			for(int j = i;j<a.length;j++) {
//				if(a[j]<min) {
//					temp=a[i];
//					a[i]=a[j];
//					a[j]=temp;
//					}
//				}
//			}
//		printArray(a);
//		
//		System.out.println("ð�ݷ�������");
//		for(int j = 0;j<a.length-1;j++) {
//			for(int i=0;i<a.length-1;i++) {
//				if(a[i]<a[i+1]) {
//					temp=a[i];
//					a[i]=a[i+1];
//					a[i+1]=temp;
//				}
//			}
//		}
//		printArray(a);
//		}
	
//��ϰ-���ֵ
//	public static void main(String[] args) {
//		int []a = new int[5];
//		a[0] = (int) (Math.random() * 100);
//		a[1] = (int) (Math.random() * 100);
//		a[2] = (int) (Math.random() * 100);
//		a[3] = (int) (Math.random() * 100);
//		a[4] = (int) (Math.random() * 100);
//		
//		System.out.println("�����еĸ����������:");
//		for(int i = 0;i<a.length;i++) {
//			System.out.print(a[i]+"	");
//		}
//		System.out.println(" ");
//		int max=a[0];
//		for(int each:a) {	
//			if(each>max) {
//				max=each;
//			}
//		}
//		System.out.println("max="+max);
//	}
	
//��ϰ-�ϲ�����
//	public static void main(String[] args) {
//		int alength =(int) (Math.random()*10);
//		int blength =(int) (Math.random()*10);
//		int []a = new int[alength];
//		int []b = new int[blength];
//		int []c = new int[alength+blength];
//
//		System.out.println("����a�����ݣ�");
//		for(int i=0;i<a.length;i++) {
//			a[i]= (int) (Math.random() * 100);
//			System.out.print(a[i]+" ");
//		}
//		System.out.println(" ");
//		
//		System.out.println("����b�����ݣ�");
//		for(int i=0;i<b.length;i++) {
//			b[i]= (int) (Math.random() * 100);
//			System.out.print(b[i]+" ");
//		}
//		System.out.println(" ");
//		
//		System.arraycopy(a, 0, c, 0, a.length);
//		System.arraycopy(b, 0, c, a.length,b.length);
//		
//		System.out.println("����c�����ݣ�");
//		for(int each:c) {
//			System.out.print(each+" ");
//		}
//	}
	
//��ϰ-��ά����
//	public static void main(String[] args) {
//		int [][] a = new int[5][5];
//		for(int i=0 ;i<5;i++) {
//			for(int j = 0 ;j<5;j++) {
//				a[i][j]	=(int) (Math.random() * 100);
//				System.out.print(a[i][j]+"	");
//			}
//			System.out.println(" ");
//		}
//		
//		int x=0,y=0;
//		int max = a[0][0];
//		for(int i=0 ;i<5;i++) {
//			for(int j = 0 ;j<5;j++) {
//				if(max<a[i][j]) {
//					max=a[i][j];
//					x=i;
//					y=j;
//				}
//			}
//		}
//		System.out.println("�ҳ��������ǣ�"+max);
//		System.out.println("��������["+x+"] ["+y+"]");
//	}
	
//��ϰ-��ά��������
//	public static void main(String[] args) {
//		int [][]a = new int[5][8];
//		int []b = new int [5*8];
//		System.out.println("����ǰ���飺");
//		for(int i = 0;i<5;i++) {
//			for(int j = 0;j<8;j++) {
//				a[i][j]	=(int) (Math.random() * 100);
//				System.out.print(a[i][j]+"	");
//			}
//			System.out.println(" ");
//		}
//		
//		System.out.println(" ");
//		for(int i=0;i<5;i++) {
//			System.arraycopy(a[i],0, b, i*8, 8);
//		}
//		Arrays.sort(b);
//		
//		for(int i=0;i<5;i++) {
//			System.arraycopy(b, 8*i, a[i], 0, 8);
//		}
//		
//		
//		System.out.println("��������飺");
//		for(int []each:a) {
//			for(int j:each) {
//				System.out.print(j+"	");
//			}
//			System.out.println();
//		}
//	}
} 
