package ����;
import java.awt.Container;
import java.awt.FlowLayout;
import javax.swing.ButtonGroup;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JRadioButton;
public class Exam4_5 extends JFrame{
	Exam4_5(){
		super("��ťʵ��");
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		JCheckBox jb1= new JCheckBox("�Ӵ�");
		JCheckBox jb2= new JCheckBox("��б");
		c.add(jb1);
		c.add(jb2);
		JRadioButton red = new JRadioButton("��ɫ");
		JRadioButton blue = new JRadioButton("��ɫ");
		ButtonGroup bg = new ButtonGroup();
		bg.add(red);
		bg.add(blue);
		c.add(red);
		c.add(blue);
		}
	public static void main(String[] args) {
		Exam4_5 jf = new Exam4_5();
		jf.setSize(400,300);
		jf.setVisible(true);
		}
}
