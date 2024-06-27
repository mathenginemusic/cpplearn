#include<iostream>
#include<string.h>
using namespace std;
//设计一个学生类，属性有姓名和学号，
//可以给姓名学号赋值，可以显示学生的姓名和学号。 
class Student
{
	public://公共权限
		//属性：
	
		//行为
		//给姓名赋值;
		void setName(string name)
		{
			Name=name;
		 } 
		//获取姓名 
		string getName()
		{
			return Name;
		 } 
		//给年龄赋值(要求为只读)
		void setAge()
		{
			Age=18;
		 } 
		//获取年龄 
		int getAge()
		{
			return Age;
		 }
		//设置偶像 
		void setIdol(string idol)  
		{
			IDol=idol;
		}
		//显示姓名和学号
//		void show()
//		{
//			cout<<"Name:"<<Name<<",ID:"<<ID<<endl;
//		 }
	private:
	 	string Name;  
		string IDol;//偶像要求只写。 
		int Age;//要求年龄为只读，即不可随意修改。	
}; 		// 但在私有成员中，不能直接赋值。 
int main()
{
	//实例化对象； 
	Student s1;
	s1.setName("彭义轩");
	//s1.ID="20221121102";
	//s1.show();
	cout<<"姓名："<<s1.getName()<<endl;
	s1.setAge();
	cout<<"年龄："<<s1.getAge()<<endl;
	system("pause");
	s1.setIdol("彭义轩的偶像");
	return 0;
 } 
