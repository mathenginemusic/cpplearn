#include<iostream>
#include<string.h>
using namespace std;
//���һ��ѧ���࣬������������ѧ�ţ�
//���Ը�����ѧ�Ÿ�ֵ��������ʾѧ����������ѧ�š� 
class Student
{
	public://����Ȩ��
		//���ԣ�
	
		//��Ϊ
		//��������ֵ;
		void setName(string name)
		{
			Name=name;
		 } 
		//��ȡ���� 
		string getName()
		{
			return Name;
		 } 
		//�����丳ֵ(Ҫ��Ϊֻ��)
		void setAge()
		{
			Age=18;
		 } 
		//��ȡ���� 
		int getAge()
		{
			return Age;
		 }
		//����ż�� 
		void setIdol(string idol)  
		{
			IDol=idol;
		}
		//��ʾ������ѧ��
//		void show()
//		{
//			cout<<"Name:"<<Name<<",ID:"<<ID<<endl;
//		 }
	private:
	 	string Name;  
		string IDol;//ż��Ҫ��ֻд�� 
		int Age;//Ҫ������Ϊֻ���������������޸ġ�	
}; 		// ����˽�г�Ա�У�����ֱ�Ӹ�ֵ�� 
int main()
{
	//ʵ�������� 
	Student s1;
	s1.setName("������");
	//s1.ID="20221121102";
	//s1.show();
	cout<<"������"<<s1.getName()<<endl;
	s1.setAge();
	cout<<"���䣺"<<s1.getAge()<<endl;
	system("pause");
	s1.setIdol("��������ż��");
	return 0;
 } 
