package ����;

import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class Exam4_11 extends JFrame implements ActionListener {
	int i = 0;
	JLabel	lab;
	Container c;	
	Exam4_11(){	//���캯��
		super("�¼�����");	//���ڱ���
		c=getContentPane();	//��������c
		c.setLayout(new FlowLayout());	//����c������ʽ����
		JButton button1 =new JButton("��ť");	//������ťbutton1
		c.add(button1);	//�Ѱ�ťbutton1��ӵ�����c��
		button1.addActionListener(this);	//ע�ᰴťbutton1Ϊ�¼�Դ�ļ�����
		lab=new JLabel("������ť"+i+"��");	//��ӱ�ǩlab
		c.add(lab);	//�ѱ�ǩlab��ӵ�����c��
	}
	
	public void paint() 
	{
		String s ="������ť"+i+"��";
		lab.setText(s);	//ÿ��һ�δ������ñ�ǩ
		
		
		repaint();
	}
	
	public static void main(String[] args) {
		Exam4_11 ob=new Exam4_11();	//��������ob
		ob.setSize(600,300);	//����������С
		ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);	//���ùر�ѡ��
		ob.setVisible(true);	//��ʾ������Ŀ
		}
	
	public void actionPerformed(ActionEvent arg0) 
	{
		i++;
		paint();
	}
}
