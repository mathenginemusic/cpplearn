#include<iostream>
using namespace std;
//构造函数的调用规则 
//1.创建一个类，C++编译器给每个类至少添加三个函数
//默认构造(空实现)
//析构函数(空实现) 
//拷贝构造(值拷贝)

//2.如果写了有参构造函数，则编译器不再提供默认构造 
//如果写了拷贝构造函数，则编译器不再提供前两个 
class Person
{
	public:
		Person()
		{
			cout<<"Person的默认构造函数调用"<<endl; 
		}                                          
		Person(int age,int height)
		{
			Height=new int(height);
			cout<<"Person的有参构造函数调用"<<endl; 
			Age=age;
		}

		//自己实现拷贝构造函数，解决浅拷贝带来的问题


		Person(const Person &p)
		{
			cout<<"Person的拷贝构造函数调用"<<endl;
			Age=p.Age;//是和有参构造相同的结构，不再加上int; 
			//Height=p.Height;编译器默认执行该代码
			//深拷贝操作
			Height=new int(*p.Height);//new int是深拷贝。
		}
		~Person()
		{
			//析构代码，将堆区开辟数据做释放操作。
			if(Height!=NULL)
			{
				delete Height;//会出现断点。。。。。
				Height=NULL;
			}
			cout<<"Person的析构函数调用"<<endl;
		}
		int Age;
		int *Height;//指针的目的是把身高数据开辟到堆区。
 };
void test01()
{
	Person p1(18,160);
	Person p2(p1);
	cout<<"Age="<<p1.Age<<"Height="<<*p1.Height<<endl;
	cout<<"Age="<<p2.Age<<"Height="<<*p2.Height<<endl;
	//此时Height是在堆区。
}
int main()
{
	test01();
	system("pause");
	return 0;
 } 
//浅拷贝：简单的赋值拷贝操作。
//深拷贝：在堆区重新申请空间，进行拷贝操作。
//浅拷贝带来的问题：p1和p2堆区内存重复释放。
//其原因是重载函数的顺序调用。