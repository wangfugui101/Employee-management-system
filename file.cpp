#include "myhead.h"
//��Vector���������ְ����Ϣд���ļ�
void SaveVector(vector<Person *> &v)
{
    fstream fd;
    fd.open("1.txt",ios::out|ios::trunc);
    if (!fd.is_open())
    {
        cout << "�ļ���ʧ��" << endl;
    }
    else
    {
        for (unsigned int i = 0; i < v.size(); i++)
        {
            fd << v[i]->getId() << " " << v[i]->getName() << " " << v[i]->getAge() << " " << v[i]->getFlag() << endl;
        }
    }
    fd.close();
}
//���ļ��е�ְ����Ϣ����Vector
void ReadVector(vector<Person *> &v,map<int, Person *> &m)
{
    fstream fd;
    fd.open("1.txt",ios::in);
    if (!fd.is_open())
    {
        cout << "�ļ���ʧ��" << endl;
    }
    else
    {
        int id;
        string name;
        int age;
        string flag;
        while (fd >> id >> name >> age >> flag)
        {
            if (flag == "CEO")
            {
                CEO *s = new CEO(id, name, age);
                v.push_back(s);
            }
            if (flag == "staff")
            {
                Staff *s = new Staff(id, name, age);
                v.push_back(s);
            }
            if (flag == "manager")
            {
                Manager *s = new Manager(id, name, age);
                v.push_back(s);
            }
        }
    }
    fd.close();
    createmap(v,m);
}
