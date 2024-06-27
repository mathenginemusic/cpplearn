//来源于黑马程序员哔哩哔哩。 
#include<iostream>
#include<string.h>
#include<math.h>
#include"Point.h"
#include"Circle.h"
using namespace std;
//对点的头文件 
void Point::setX(int x)
	{
		X=x;
	}
int Point::getX()
	{
		return X;
	}
void Point::setY(int y)
	{
		Y=y;
	}
int Point::getY()
	{
		return Y;
	}
//对圆的头文件 
void Circle::setR(int r)
	{
		R=r;
	}
int Circle::getR()
	{
		return R;
	}
void Circle::setCenter(Point center)
	{
		Center=center;
	}
Point Circle::getCenter()
	{
		return Center;
	}

void isIncircle(Circle &c,Point &p)
{
//	int dist=(c.getCenter().getX()-p.getX())^2+(c.getCenter().getY()-p.getY())^2;
//	int Rdist=c.getR()^2;这样不正确，"^"符号是异或，但该函数可以用pow来实现。 
	
	int dist=(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())
	+(c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
	int Rdist=c.getR()*c.getR();
	
	cout<<dist<<","<<Rdist;	
	if(dist==Rdist)
		cout<<"点在圆上"<<endl;
	else if(dist<Rdist)
		cout<<"点在圆内"<<endl;
	else
		cout<<"点在圆外"<<endl; 	
}
int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center1;
	center1.setX(10);
	center1.setY(0);
	c.setCenter(center1);
	//创建点
	Point p; 
	p.setX(10);
	p.setY(10);
	//判断位置关系
	isIncircle(c,p);
	
	system("pause");
	return 0; 
}

//点和圆关系案例
//class Point
//{
//	public:
//		void setX(int x)
//		{
//			X=x;
//		}
//		int getX()
//		{
//			return X;
//		}
//		void setY(int y)
//		{
//			Y=y;
//		}
//		int getY()
//		{
//			return Y;
//		}
//	private:
//		int X;
//		int Y;
//}; 
//class Circle 
//{
//	public:
//		void setR(int r)
//		{
//			R=r;
//		}
//		int getR()
//		{
//			return R;
//		}
//		void setCenter(Point center)
//		{
//			Center=center;
//		}
//		Point getCenter()
//		{
//			return Center;
//		}
//	private:
//		int R;
//		Point Center;//在一个类中，可以让另一个类作为该类的成员。 
//};















