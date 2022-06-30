#include "myhead.h"
string select5[] = { "按职工编号查找","按姓名查找","退出"};
int select5_len = sizeof(select5) / sizeof(select5[0]);
//通过map来查找指定id的对象
void findById(map<int, Person *> &m)
{
    int id;
    cout<<"请输入要查找的id：";
    cin >> id;

    std::map<int,Person *>::iterator it = m.find(id);

    if (it != m.end())
    {
        it->second->print();

    }
    else
    {
        cout << "没有找到该id的对象" << endl;
    }
    isEixt();
}
//通过map来查找指定name的对象
bool findByName(map<int, Person *> &m)
{
    string name;
    cout<<"请输入要查找的name：";
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
                    cout<<"没有找到"<<endl;
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
