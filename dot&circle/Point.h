#pragma once//防止再次被添加头文件 
#include<iostream>
using namespace std;
//在头文件包含中，只有函数声明和变量声明就可以了。 
class Point
{
	public:
		void setX(int x);
		int getX();
		void setY(int y);
		int getY();
	private:
		int X;
		int Y;
}; 
