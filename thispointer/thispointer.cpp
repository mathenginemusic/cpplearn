#include<iostream>
using namespace std;
class Person
{
    public:
    Person(int age)
    {
        //this指针指向被调用成员函数的所属对象
        this->age=age;//无this相当于上三个是age1
    }
    int age;//此时参数age重复，之后的是age2
};
//解决名称冲突
void test01()
{
    Person p1(18);
    cout<<p1.age<<endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}