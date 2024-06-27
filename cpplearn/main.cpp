#include<iostream>
using namespace std;

class Person
{
	public:
		//构造函数的分类及调用
		//参数分类：无参（默认）构造和有参构造
		//类型分类：普通构造和拷贝构造。 
		Person()
		{
			cout<<"Person无参构造函数的调用"<<endl;
		}
		Person(int a)
		{
			age=a;
			cout<<"Person有参构造函数的调用"<<endl;
		}
		Person(const Person &p)
		{
			//将传入的所有属性拷贝到身上。
			cout<<"Person拷贝构造函数的调用"<<endl;
			age=p.age;
		} 
		~Person()
		{
			cout<<"Person析构函数的调用"<<endl;
		}
		int age;
 }; 
void test01()
{
	//1、括号法
	Person p1;//在栈上的数据,test01执行完毕后，释放对象，是默认构造函数调用。
	Person p2(10);//有参构造函数
	Person p3(p2);//拷贝构造函数 
	cout<<p2.age<<endl;
	cout<<p3.age<<endl;
	//2、显示法
	//3、隐式转换法
}
int main()
{
	test01();
	system("pause");
	return 0;
}



 
//1，构造函数
//没有返回值，无void 
//函数名与类名相同
//构造函数可以有参数，也可以发生重载
//创建对象时，构造函数会自动调用，而且只调用一次。 

//2,析构函数，进行清理
//无返回值和void
//函数名和类名相同，在名称前加"~" 
//析构函数不可有参数，不可以发生重载
//对象在销毁前，自动调用析构函数，而且只会调用一次

//编译器默认实现空构造函数。 




