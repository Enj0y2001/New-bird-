package JAVA����;

public class Hero {
		String name;	//����
		float hp;	//Ѫ��
		float armor;	//����
		int moveSpeed;	//�ƶ��ٶ�
		int killNum;	//ɱ�˴���
		int assistNum;	//��������
		int money;	//��Ǯ
		int secondPitNum; //������
		String killspech;	//ɱ�˺�˵�Ļ�
		String deadspech;	//��ɱ��˵�Ļ�
		
		//��û���ֵ
		float getArmor() {
			return armor;
		}
		
		//�Ӷ���
		void keng() {
			System.out.println("�Ӷ��ѣ�");
		}
		
		//�����ƶ��ٶ�
		void addSpeed(int speed) {
			//��ԭ���Ļ����������ƶ��ٶ�
			moveSpeed = moveSpeed + speed;
		}
		
		//����
		void legendary() {
			System.out.println("����");
		}
		
		//��ȡ��ǰ��Ѫ��
		float getHp() {
			return hp;
		}
		
		//��Ѫ
		void recovery(float blood) {
			hp = hp + blood; 
		}
		
		
	public static void main(String[] args) {
		Hero garen = new Hero();
		garen.name = "����";
		garen.hp = 616.28f;
		garen.armor = 350;
		garen.moveSpeed = 350;
		garen.addSpeed(100);
		
		Hero teemo = new Hero();
		teemo.name = "��Ī";
		teemo.hp = 383f;
		teemo.armor = 14f;
		teemo.moveSpeed = 330;
	}
}
