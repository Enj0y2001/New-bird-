package property;

//��ϰ-����
public class Arrmor extends Item{	//����
	int ac;	//���׵ȼ�
	public static void main(String[] args) {
		Arrmor cloth = new Arrmor();
		Arrmor hauberk = new Arrmor();
		
		cloth.name = "����";
		cloth.price = 300;
		cloth.ac = 15;
		
		hauberk.name = "���Ӽ�";
		hauberk.price = 500;
		hauberk.ac = 40;
	}
}
