package ����;
import java.awt.Color;
import java.awt.Container;
import java.awt.FlowLayout; 
import javax.swing.JFrame;
import javax.swing.JLabel;
public class Exam4_1 extends JFrame{
	Exam4_1(){
		super("�ҵĿ�ܴ���");//���ø��๹�췽�����ô��ڵı���
		Container c=getContentPane();
		c.setLayout(new FlowLayout(FlowLayout.CENTER));
		JLabel lab=new JLabel("��ӭѧϰJavaͼ���û�������Ʊ��");
		lab.setForeground(Color.red);
		c.add(lab);
	}
	public static void main(String[] args) {
		Exam4_1 ob=new Exam4_1();
		ob.setSize(600,300);
		ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		ob.setVisible(true);
		}
}

