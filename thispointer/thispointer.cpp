#include<iostream>
using namespace std;
class Person
{
    public:
    Person(int age)
    {
        //thisָ��ָ�򱻵��ó�Ա��������������
        this->age=age;//��this�൱����������age1
    }
    int age;//��ʱ����age�ظ���֮�����age2
};
//������Ƴ�ͻ
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