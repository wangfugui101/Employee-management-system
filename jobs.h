#ifndef JOBS_H
#define JOBS_H
#include <iostream>
#include "Person.h"

using namespace std;
/*************************************************
������:Staff
�๦�ܡ����ܵȵ�����:
    Staff�࣬�̳���Person��
���в���˵����
    Staff(int id, string name, int age,string flag= "staff");
                        ��ʼ��
    void print();       ��ӡstaff������Ϣ
˽�в�����˵��:
    int id;         ���
    string name;    ����
    int age;        ����
    string flag;    ְλ
����˵��: ��
*************************************************/
class Staff : public Person
{
public:
    Staff(int id, string name, int age,string flag= "staff");
    void print();
};
/*************************************************
������:Manager
�๦�ܡ����ܵȵ�����:
    Manager�࣬�̳���Person��
���в���˵����
    Manager(int id, string name, int age,string flag= "manager");
                        ��ʼ��
    void print();       ��ӡManager������Ϣ
˽�в�����˵��:
    int id;         ���
    string name;    ����
    int age;        ����
    string flag;    ְλ
����˵��: ��
*************************************************/
class Manager : public Person
{
public:
    Manager(int id, string name, int age,string flag= "manager");
    void print();
};
/*************************************************
������:CEO
�๦�ܡ����ܵȵ�����:
    CEO�࣬�̳���Person��
���в���˵����
    CEO(int id, string name, int age,string flag= "manager");
                        ��ʼ��
    void print();       ��ӡCEO������Ϣ
˽�в�����˵��:
    int id;         ���
    string name;    ����
    int age;        ����
    string flag;    ְλ
����˵��: ��
*************************************************/
class CEO : public Person
{
public:
    CEO(int id, string name, int age,string flag= "CEO");
    void print();
};
#endif // JOBS_H
