#include "myhead.h"
string select3[] = { "��ʾ���е�ְ����Ϣ","����ְ���������","����ְ����Ž���","�˳�"};
int select3_len = sizeof(select3) / sizeof(select3[0]);
//�ж�map�Ƿ�Ϊ��
bool isMapEmpty(map<int, Person *> &m)
{
    if (m.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//��ʾmap���������ְ����Ϣ
void showMapAll(map<int, Person *> &m)
{
        system("cls");
    //map��Ϊ�մ�ӡ����ְ����Ϣ
    if (!isMapEmpty(m))
    {
        std::map<int,Person *>::iterator it;
        for ( it= m.begin(); it != m.end(); it++)
        {
            it->second->print();
        }
    }
    else
    {
        cout<<"û���κ�һ��ְ���ڲᣡ"<<endl;
    }
    isEixt();
}
//����map���������ְ����Ϣ
void showMapReverse(map<int, Person *> &m)
{
        system("cls");
    //map��Ϊ�մ�ӡ����ְ����Ϣ
    if (!isMapEmpty(m))
    {
        std::map<int,Person *>::reverse_iterator it;
        for ( it= m.rbegin(); it != m.rend(); it++)
        {
            it->second->print();
        }
    }
    else
    {
        cout<<"û���κ�һ��ְ���ڲᣡ"<<endl;
    }
    isEixt();
}
//�ж�vector�Ƿ�Ϊ��
bool isVectorEmpty(vector<Person *> &v)
{
    if (v.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//��ʾvector���������ְ����Ϣ
void showVectorAll(vector<Person *> &v)
{
    system("cls");
    //vector��Ϊ�մ�ӡ����ְ����Ϣ
    if (!isVectorEmpty(v))
    {
        for (unsigned int i = 0; i < v.size(); i++)
        {
            v[i]->print();
        }
    }
    else
    {
        cout<<"û���κ�һ��ְ���ڲᣡ"<<endl;
    }
    isEixt();
}
void show_system(vector<Person *> &v,map<int, Person *> &m)
{
    while(1)
    {
        system("cls");
        int key1 =info(select3,select3_len);
    //    cout <<"key1="<<key1<<endl;
        switch (key1) {
        case 0:
            {
                showVectorAll(v);
                break;
            }
        case 1:
            {
                showMapAll(m);
                break;
            }
        case 2:
            {
                showMapReverse(m);
                break;
            }
        case 3:
            {
               return;
            }
        }
    }

}
