#include<iostream>
#include<string.h>
using namespace std;
//获取长宽高
//获取表面积
//获取体积 
//分别利用全局函数和成员函数判断两个立方体是否相等 
class Cube
{
	public:
		//行为
		//获取长宽高
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
		//获取表面积
		int calculateS()
		{
			return 2*(L*W+L*H+W*H);
		}
		//获取体积 
		int calculateV()
		{
			return L*W*H;
		}
		//利用成员函数判断两个立方体是否相等 
		bool isSameClass(Cube&c) 
		{
			if(H==c.getH()&&L==c.getL()&&W==c.getW()) 
				return true;
			else
				return false;
		}
	private:
		//属性 
		int L;
		int W;
		int H;	
};
//全局函数判断两立方体是否相等
bool isSame(Cube &c1,Cube &c2)
{
	if(c1.getH()==c2.getH()&&c1.getL()==c2.getL()&&c1.getW()==c2.getW()) 
		return true;
	else
		return false;
} 
int main()
{
	//创建第一个立方体 
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout<<"S="<<c1.calculateS()<<endl;
	cout<<"V="<<c1.calculateV()<<endl;
	//创建第二个立方体 
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(8);
	bool ret=isSame(c1,c2);
	bool ret2=c1.isSameClass(c2);
	//全局函数判断 
	if(ret)
		cout<<"Same"<<endl;
	else
		cout<<"Not Same"<<endl;
	//成员函数判断	
	if(ret2)
		cout<<"Same2"<<endl;
	else
		cout<<"Not Same2"<<endl;
	system("pause");
	return 0;
}
