package ����;

import java.awt.Container;
import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
public class Exam4_8 extends JFrame{
	Exam4_8()
	{
		super("˳�򲼾�");
		Container c= getContentPane();
		c.setLayout(new FlowLayout());
		JButton button1=new JButton("��ť1");
		JButton button2=new JButton("��ť2");
		JButton button3=new JButton("��ť3");
		c.add(button1);
		c.add(button2);
		c.add(button3);
	}
	public static void main(String[] args)
	{
		Exam4_8 ob =new Exam4_8();
		ob.setSize(600,300);
		ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		ob.setVisible(true);
	}
}

