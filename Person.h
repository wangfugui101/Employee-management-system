#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;
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
