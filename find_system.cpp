#include "myhead.h"
string select5[] = { "��ְ����Ų���","����������","�˳�"};
int select5_len = sizeof(select5) / sizeof(select5[0]);
//ͨ��map������ָ��id�Ķ���
void findById(map<int, Person *> &m)
{
    int id;
    cout<<"������Ҫ���ҵ�id��";
    cin >> id;

    std::map<int,Person *>::iterator it = m.find(id);

    if (it != m.end())
    {
        it->second->print();

    }
    else
    {
        cout << "û���ҵ���id�Ķ���" << endl;
    }
    isEixt();
}
//ͨ��map������ָ��name�Ķ���
bool findByName(map<int, Person *> &m)
{
    string name;
    cout<<"������Ҫ���ҵ�name��";
    cin >> name;
    std::map<int,Person *>::iterator it;
    for ( it= m.begin(); it != m.end(); it++)
    {
        if (it->second->getName() == name)
        {
            it->second->print();
            isEixt();
            return true;
        }
    }
    return false;
}

void find_system(vector<Person *> &v,map<int, Person *> &m)
{
    while(1)
    {
        system("cls");
        int key1 =info(select5,select5_len);
        switch (key1) {
        case 0:
            {
                findById(m);
                break;
            }
        case 1:
            {
                bool b = findByName(m);
                if(!b)
                {
                    cout<<"û���ҵ�"<<endl;
                    isEixt();
                }
                break;
            }
        case 2:
            {
                return;
            }
        }
    }

}
