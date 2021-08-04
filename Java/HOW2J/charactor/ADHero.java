package charactor;

public class ADHero extends Hero {	//������Ӣ��
	public ADHero(String name) {
		super(name);
	}

	public void attack() {
		System.out.println(name + " ������һ�ι��� �����ǲ�ȷ������˭��");
	}

	// �ɱ������Ĳ���
	public void attack(Hero... heros) {
		for (int i = 0; i < heros.length; i++) {
			System.out.println(name + " ������ " + heros[i].name);

		}
	}

	public static void main(String[] args) {
		ADHero bh = new ADHero("�ͽ�����");
		
		Hero h1 = new Hero("����");
		Hero h2 = new Hero("��Ī");

		bh.attack(h1);
		bh.attack(h1, h2);

	}

}
