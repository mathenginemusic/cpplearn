#include<iostream>
using namespace std;
//��̬��Ա����
//���ж�����ͬһ������
//���г�Ա����ֻ�ܷ��ʾ�̬��Ա������
class Person
{
    public:
    //��̬��Ա����
    static void f()
    {
        A=100;//��̬�������Է��ʾ�̬��Ա�������ǹ���ġ�
        //B=200;������̬�������ܷ��ʷǾ�̬��Ա��������ĳ�������ϵġ�
        cout<<"static void func����"<<endl;
    }
    static int A;//��̬��Ա����
    int B;//��̬��Ա����

    //��̬��Ա�����з���Ȩ��
    private:
    static void f2()
    {
        cout<<"f2"<<endl;
    }//������ʲ����ľ�̬��Ա������
};
void test01()
{
    //ͨ���������
    Person p;
    p.f();//vscode�����˴��������������еġ�
    //ͨ����������
    Person::f();
}
int main()
{
    test01();
    system("pause");
    return 0;
}