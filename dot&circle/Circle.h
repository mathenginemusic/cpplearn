#pragma once//��ֹ�ٴα����ͷ�ļ� 
#include<iostream>
#include"Point.h"
using namespace std;
//��ͷ�ļ������У�ֻ�к��������ͱ��������Ϳ����ˡ� 
class Circle 
{
	public:
		void setR(int r);
		int getR();
		void setCenter(Point center);
		Point getCenter();
	private:
		int R;
		Point Center;//��һ�����У���������һ������Ϊ����ĳ�Ա�� 
};
