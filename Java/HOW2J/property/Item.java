package property;



public class Item {	//��Ʒ
	protected String name;
	protected int price;
//��ϰ-����ģʽ������ʽ��
	private Item() {
		
	}
	private static Item instance;
	
	public static Item getInstance() {
		if(null==instance) {
			instance = new Item();
		}
		return instance;
	}
}
