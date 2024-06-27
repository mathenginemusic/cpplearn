#include<iostream>
using namespace std;
//静态成员变量
class Person
{
    public:
    //所有对象都共享同一份数据。
    //编译阶段就分配内存。
    //类内声明，类外初始化操作。
    static int A;//此处是类内声明。
    //静态成员变量有访问权限的。
    private:
    static int B;
};
int Person::A=100;//此处是类外初始化
//该处初始化的是Person内的局部变量
void test01()
{
    Person p;
    cout<<p.A<<endl;
    Person p2;
    p2.A=200;//共享数据，最后都改成200了。
    cout<<p.A<<endl;
}
void test02()
{
    //静态成员变量不属于某个对象上，都是共享一个数据。
    //两种访问方式
    //1、通过对象访问
    //2、通过类名访问
    cout<<Person::A<<endl;
}
int main()
{
    test02();
    system("pause");
    return 0;
}
//调用时在内外的类的定义中分别设置打印项。
//通过打印的顺序来找到调用的顺序。
//得出顺序：构造函数先有内中对象，最后是最外层。
//但析构顺序与此相反。