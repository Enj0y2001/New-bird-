package ��������;

import java.awt.Container;
import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.ButtonGroup;
import javax.swing.JCheckBox;
import javax.swing.JRadioButton;
import javax.swing.JComboBox;
import javax.swing.JList;
import javax.swing.JScrollBar;
import javax.swing.JTextArea;
import java.awt.Color;
import java.awt.Dimension;
import javax.swing.JPanel;
import javax.swing.JSlider;
public class У԰��¼���� extends JFrame {
	У԰��¼����()
	{
		super("У԰����ϵͳ��½����");
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		JLabel lab1 = new JLabel("�û�����");
		c.add(lab1);
		JTextField txt = new JTextField(6);
		c.add(txt);
		JLabel lab2 = new JLabel("���룺");
		c.add(lab2);
		JPasswordField jp = new JPasswordField(8);
		c.add(jp);
		
		JCheckBox jb1 =new JCheckBox("��ʾ����");
		c.add(jb1);
		
		JLabel lab3 = new JLabel("��ݣ�");
		c.add(lab3);
		JRadioButton student=new JRadioButton("ѧ��");
		JRadioButton teacher=new JRadioButton("��ʦ");
		ButtonGroup bg = new ButtonGroup();
		bg.add(teacher);
		bg.add(student);
		c.add(teacher);
		c.add(student);
		
		JLabel lab4 = new JLabel("����У����");
		c.add(lab4);
		String s[]={"����У��","����У��"};
		JComboBox jc = new JComboBox(s);
		c.add(jc);
	}
	public static void main(String[] args)
	{
		У԰��¼���� jf = new У԰��¼����();
		jf.setSize(300,200);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setVisible(true);
	}
}
