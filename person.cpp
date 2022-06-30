#include "Person.h"
/*************************************************
类名称:Person
类功能、性能等的描述:
    一个基类，可以派生出三个子类
公有参数说明：
    int getId();            获取编号
    string getName();       获取名字
    int getAge();           获取年龄
    string getFlag();       获取职位
    virtual void print();   打印个人信息
私有参数的说明:
    int id;         编号
    string name;    姓名
    int age;        年龄
    string flag;    职位
其它说明: 无
*************************************************/
Person::Person(int id, string name, int age,string flag)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->flag = flag;
}
int Person::getId()
{
    return id;
}
string Person::getName()
{
    return name;
}
int Person::getAge()
{
    return age;
}

string Person::getFlag()
{
    return flag;
}

void Person::print()
{
    cout << "id:" << id << " name:" << name << " age:" << age <<" flag:" << flag << endl;
}
