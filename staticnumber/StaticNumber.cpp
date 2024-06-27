#include<iostream>
using namespace std;
//静态成员函数
//所有对象共享同一个函数
//所有成员函数只能访问静态成员变量。
class Person
{
    public:
    //静态成员函数
    static void f()
    {
        A=100;//静态函数可以访问静态成员变量。是共享的。
        //B=200;报错，静态函数不能访问非静态成员变量。是某个对象上的。
        cout<<"static void func调用"<<endl;
    }
    static int A;//静态成员变量
    int B;//动态成员变量

    //静态成员函数有访问权限
    private:
    static void f2()
    {
        cout<<"f2"<<endl;
    }//类外访问不到的静态成员函数。
};
void test01()
{
    //通过对象访问
    Person p;
    p.f();//vscode报错但此处是正常编译运行的。
    //通过类名访问
    Person::f();
}
int main()
{
    test01();
    system("pause");
    return 0;
}