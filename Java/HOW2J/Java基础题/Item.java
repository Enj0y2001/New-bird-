package JAVA����;



public class Item {
	private String name;
	private int price;
	public Item(String objName,int objprice) 
	{
		name=objName;
		price=objprice;
	}
	
	public static void main(String[] args) {
		Item bloodBottle =new Item("Ѫƿ",50);
		Item item2=new Item("��Ь",300);
		Item item3=new Item("����",350);
		
		System.out.println("����\t�۸�");
		System.out.println(bloodBottle.name+"\t"+bloodBottle.price);
		System.out.println(item2.name+"\t"+item2.price);
		System.out.println(item3.name+"\t"+item3.price);
		}
}
