#include "Person.h"
/*************************************************
������:Person
�๦�ܡ����ܵȵ�����:
    һ�����࣬������������������
���в���˵����
    int getId();            ��ȡ���
    string getName();       ��ȡ����
    int getAge();           ��ȡ����
    string getFlag();       ��ȡְλ
    virtual void print();   ��ӡ������Ϣ
˽�в�����˵��:
    int id;         ���
    string name;    ����
    int age;        ����
    string flag;    ְλ
����˵��: ��
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
