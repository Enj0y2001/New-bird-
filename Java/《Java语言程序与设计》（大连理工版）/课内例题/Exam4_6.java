package ����;
import java.awt.Container;
import java.awt.FlowLayout;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JList;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
public class Exam4_6 extends JFrame{
	Exam4_6(){
		super("�ı���Ϣʵ��");
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		String s[]= {"����","�Ϻ�","����"};
		JComboBox jc = new JComboBox(s);
		c.add(jc);
		JList j1 =new JList(s);
		c.add(j1);
		JTextArea jt = new JTextArea("����\n�Ϻ�\n����\n���\n����\n����\n",3,3);
		JScrollPane sp = new JScrollPane(jt);
		c.add(sp);
	}
	public static void main(String[] args) {
		Exam4_6 jf = new Exam4_6();
		jf.setSize(400,300);
		jf.setVisible(true);
		}
}
