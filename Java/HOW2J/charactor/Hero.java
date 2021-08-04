package charactor;

import property.Weapon;

public class Hero {	//Ӣ��
	
	private int id;
	public String name;	//����
	protected float hp;	//Ѫ��
	float maxHP;
	float armor;	//����
	int moveSpeed;	//�ƶ��ٶ�
	
	int killNum;	//ɱ�˴���
	int assistNum;	//��������
	int secondPitNum; //������
	
	int money;	//��Ǯ
	
	String killspech;	//ɱ�˺�˵�Ļ�
	String deadspech;	//��ɱ��˵�Ļ�
	
	static String copyright;
	
	//��Ʒ��������
	public static int itemCapacity = 8;	
	
	static {
		itemCapacity = 6;
	}

	
	public Hero(String name) {
		this.name = name;
	}
	
	public Hero(String name,float hp) {
		this(name);
		this.hp = hp;
	}
	
	public void die() {
		hp = 0;
	}
	
	public static void battleWin() {
		System.out.println("battle win");
	}
		
//��ϰ-���췽��
//		public Hero(String heroName,float heroHP,float heroArmor,int heroMoveSpeed) {
//			name = heroName;
//			hp = heroHP;
//			armor = heroArmor;
//			moveSpeed = heroMoveSpeed;
//		}
		
//��ϰ-���췽����this��
		public Hero(String name,float hp,float armor,int moveSpeed) {
			this(name,hp);
			this.armor = armor;
			this.moveSpeed = moveSpeed;
		}
		
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
		
		//װ��һ������
		public void equip(Weapon w) {
			
		}
		
//	public static void main(String[] args) {
//		Hero garen = new Hero("����",616.28f,350,100);		
//		Hero teemo = new Hero("��Ī",383f,14f,330);
//		
//		Hero.copyright = "��Ȩ��Riot Games��˾����";
//		
//		System.out.println(garen.name);
//		System.out.println(garen.copyright);
//		System.out.println();
//		
//		System.out.println(teemo.name);
//		System.out.println(teemo.copyright);
//		System.out.println();
//		 
//		garen.copyright = "Blizzard Entertainment Enterprise";
//		System.out.println(garen.name);
//		System.out.println(garen.copyright);
//		System.out.println();
//		
//		System.out.println(teemo.name);
//		System.out.println(teemo.copyright);
//		
//	}

//��ϰ-����ģʽ������ʽ��
		private Hero() {
			
		}
		
		private static Hero instance = new Hero();
		
		public static Hero getInstance() {
			return instance;
		}
}
