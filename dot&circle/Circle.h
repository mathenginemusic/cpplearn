#pragma once//防止再次被添加头文件 
#include<iostream>
#include"Point.h"
using namespace std;
//在头文件包含中，只有函数声明和变量声明就可以了。 
class Circle 
{
	public:
		void setR(int r);
		int getR();
		void setCenter(Point center);
		Point getCenter();
	private:
		int R;
		Point Center;//在一个类中，可以让另一个类作为该类的成员。 
};
