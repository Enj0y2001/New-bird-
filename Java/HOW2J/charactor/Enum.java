package charactor;

import java.util.Scanner;

//��ϰ-ö��
public class Enum{
	public enum HeroType {
		TANK,WIZARD,ASSASSIN,ASSIST,WARRIOR,RANGED,PUSH,FARMING
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
//ö�ٱ���
//		for(HeroType ht: HeroType.values()) {
//			System.out.println(ht);
//		}
		System.out.println("��ѡ��Ӣ�����ͣ�");
		System.out.println("TANK		(̹��)");
		System.out.println("WIZARD 		(��ʦ)");
		System.out.println("ASSASSIN 	(�̿�)");
		System.out.println("ASSIST 		(����)");
		System.out.println("WARRIOR 	(��ս)");
		System.out.println("RANGED 		(Զ��)");
		System.out.println("PUSH 		(�ƽ�)");
		System.out.println("FARMING 	(��Ұ)");
		System.out.println();
		System.out.print("������ѡ��Ӣ�����ͣ�Ӣ�ģ���");
		String herotype = s.nextLine();
		System.out.print("��ѡ���Ӣ�������ǣ�");
		switch(herotype) {
			case "TANK":
				System.out.println("̹��");
				break;
			case "WIZARD":
				System.out.println("��ʦ");
				break;
			case "ASSASSIN":
				System.out.println("�̿�");
				break;
			case "ASSIST":
				System.out.println("����");
				break;
			case "WARRIOR":
				System.out.println("��ս");
				break;
			case "RANGED":
				System.out.println("Զ��");
				break;
			case "PUSH":
				System.out.println("�ƽ�");
				break;
			case "FARMING":
				System.out.println("��Ұ");
				break;
			default:
				System.out.println("�����������������");
		}
	}
}
