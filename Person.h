#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;
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
class Person
{
public:
    Person(int id, string name, int age,string flag);
    int getId();
    string getName();
    int getAge();
    string getFlag();
    virtual void print();
    virtual ~Person(){};
private:
    int id;
    string name;
    int age;
    string flag;
};

#endif // PERSON_H
