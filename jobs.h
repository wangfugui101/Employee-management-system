#ifndef JOBS_H
#define JOBS_H
#include <iostream>
#include "Person.h"

using namespace std;
/*************************************************
类名称:Staff
类功能、性能等的描述:
    Staff类，继承了Person类
公有参数说明：
    Staff(int id, string name, int age,string flag= "staff");
                        初始化
    void print();       打印staff个人信息
私有参数的说明:
    int id;         编号
    string name;    姓名
    int age;        年龄
    string flag;    职位
其它说明: 无
*************************************************/
class Staff : public Person
{
public:
    Staff(int id, string name, int age,string flag= "staff");
    void print();
};
/*************************************************
类名称:Manager
类功能、性能等的描述:
    Manager类，继承了Person类
公有参数说明：
    Manager(int id, string name, int age,string flag= "manager");
                        初始化
    void print();       打印Manager个人信息
私有参数的说明:
    int id;         编号
    string name;    姓名
    int age;        年龄
    string flag;    职位
其它说明: 无
*************************************************/
class Manager : public Person
{
public:
    Manager(int id, string name, int age,string flag= "manager");
    void print();
};
/*************************************************
类名称:CEO
类功能、性能等的描述:
    CEO类，继承了Person类
公有参数说明：
    CEO(int id, string name, int age,string flag= "manager");
                        初始化
    void print();       打印CEO个人信息
私有参数的说明:
    int id;         编号
    string name;    姓名
    int age;        年龄
    string flag;    职位
其它说明: 无
*************************************************/
class CEO : public Person
{
public:
    CEO(int id, string name, int age,string flag= "CEO");
    void print();
};
#endif // JOBS_H
