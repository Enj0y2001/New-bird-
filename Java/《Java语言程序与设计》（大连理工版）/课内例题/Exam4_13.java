package ����;
import java.awt.Container;
import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;

public class Exam4_13 extends JFrame{
	Exam4_13()
	{
		super("�˵�ʵ��");
		Container c =getContentPane();
		c.setLayout(new FlowLayout());
		JMenuBar jm =new JMenuBar();
		JMenu file = new JMenu("�ļ�");
		JMenu edit = new JMenu("�༭");
		JMenuItem open = new JMenuItem("��");
		JMenuItem save = new JMenuItem("����");
		jm.add(file);
		jm.add(edit);
		file.add(open);
		file.add(save);
		this.setJMenuBar(jm);
	}
	public static void main(String[] args)
	{
		Exam4_13 jf= new Exam4_13();
		jf.setSize(400, 300);
		jf.setVisible(true);
	}

}
