#include<iostream>
#include<string.h>
using namespace std;
//��ȡ�����
//��ȡ�����
//��ȡ��� 
//�ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���� 
class Cube
{
	public:
		//��Ϊ
		//��ȡ�����
		void setL(int l)
		{
			L=l;
		} 
		int getL()
		{
			return L;
		}
		void setW(int w)
		{
			W=w;
		}
		int getW()
		{
			return W;
		}
		void setH(int h)
		{
			H=h;
		}
		int getH()
		{
			return H;
		}
		//��ȡ�����
		int calculateS()
		{
			return 2*(L*W+L*H+W*H);
		}
		//��ȡ��� 
		int calculateV()
		{
			return L*W*H;
		}
		//���ó�Ա�����ж������������Ƿ���� 
		bool isSameClass(Cube&c) 
		{
			if(H==c.getH()&&L==c.getL()&&W==c.getW()) 
				return true;
			else
				return false;
		}
	private:
		//���� 
		int L;
		int W;
		int H;	
};
//ȫ�ֺ����ж����������Ƿ����
bool isSame(Cube &c1,Cube &c2)
{
	if(c1.getH()==c2.getH()&&c1.getL()==c2.getL()&&c1.getW()==c2.getW()) 
		return true;
	else
		return false;
} 
int main()
{
	//������һ�������� 
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout<<"S="<<c1.calculateS()<<endl;
	cout<<"V="<<c1.calculateV()<<endl;
	//�����ڶ��������� 
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(8);
	bool ret=isSame(c1,c2);
	bool ret2=c1.isSameClass(c2);
	//ȫ�ֺ����ж� 
	if(ret)
		cout<<"Same"<<endl;
	else
		cout<<"Not Same"<<endl;
	//��Ա�����ж�	
	if(ret2)
		cout<<"Same2"<<endl;
	else
		cout<<"Not Same2"<<endl;
	system("pause");
	return 0;
}
