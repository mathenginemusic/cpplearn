//��Դ�ں������Ա���������� 
#include<iostream>
#include<string.h>
#include<math.h>
#include"Point.h"
#include"Circle.h"
using namespace std;
//�Ե��ͷ�ļ� 
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
//��Բ��ͷ�ļ� 
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
//	int Rdist=c.getR()^2;��������ȷ��"^"��������򣬵��ú���������pow��ʵ�֡� 
	
	int dist=(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())
	+(c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
	int Rdist=c.getR()*c.getR();
	
	cout<<dist<<","<<Rdist;	
	if(dist==Rdist)
		cout<<"����Բ��"<<endl;
	else if(dist<Rdist)
		cout<<"����Բ��"<<endl;
	else
		cout<<"����Բ��"<<endl; 	
}
int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center1;
	center1.setX(10);
	center1.setY(0);
	c.setCenter(center1);
	//������
	Point p; 
	p.setX(10);
	p.setY(10);
	//�ж�λ�ù�ϵ
	isIncircle(c,p);
	
	system("pause");
	return 0; 
}

//���Բ��ϵ����
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
//		Point Center;//��һ�����У���������һ������Ϊ����ĳ�Ա�� 
//};















