#include<iostream>
using namespace std;
//���캯���ĵ��ù��� 
//1.����һ���࣬C++��������ÿ�������������������
//Ĭ�Ϲ���(��ʵ��)
//��������(��ʵ��) 
//��������(ֵ����)

//2.���д���вι��캯����������������ṩĬ�Ϲ��� 
//���д�˿������캯����������������ṩǰ���� 
class Person
{
	public:
		Person()
		{
			cout<<"Person��Ĭ�Ϲ��캯������"<<endl; 
		}                                          
		Person(int age,int height)
		{
			Height=new int(height);
			cout<<"Person���вι��캯������"<<endl; 
			Age=age;
		}

		//�Լ�ʵ�ֿ������캯�������ǳ��������������


		Person(const Person &p)
		{
			cout<<"Person�Ŀ������캯������"<<endl;
			Age=p.Age;//�Ǻ��вι�����ͬ�Ľṹ�����ټ���int; 
			//Height=p.Height;������Ĭ��ִ�иô���
			//�������
			Height=new int(*p.Height);//new int�������
		}
		~Person()
		{
			//�������룬�����������������ͷŲ�����
			if(Height!=NULL)
			{
				delete Height;//����ֶϵ㡣��������
				Height=NULL;
			}
			cout<<"Person��������������"<<endl;
		}
		int Age;
		int *Height;//ָ���Ŀ���ǰ�������ݿ��ٵ�������
 };
void test01()
{
	Person p1(18,160);
	Person p2(p1);
	cout<<"Age="<<p1.Age<<"Height="<<*p1.Height<<endl;
	cout<<"Age="<<p2.Age<<"Height="<<*p2.Height<<endl;
	//��ʱHeight���ڶ�����
}
int main()
{
	test01();
	system("pause");
	return 0;
 } 
//ǳ�������򵥵ĸ�ֵ����������
//������ڶ�����������ռ䣬���п���������
//ǳ�������������⣺p1��p2�����ڴ��ظ��ͷš�
//��ԭ�������غ�����˳����á�