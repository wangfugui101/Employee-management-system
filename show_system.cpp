#include "myhead.h"
string select3[] = { "显示所有的职工信息","按照职工编号升序","按照职工编号降序","退出"};
int select3_len = sizeof(select3) / sizeof(select3[0]);
//判断map是否为空
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
//显示map里面的所有职工信息
void showMapAll(map<int, Person *> &m)
{
        system("cls");
    //map不为空打印所有职工信息
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
        cout<<"没有任何一个职工在册！"<<endl;
    }
    isEixt();
}
//逆序map里面的所有职工信息
void showMapReverse(map<int, Person *> &m)
{
        system("cls");
    //map不为空打印所有职工信息
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
        cout<<"没有任何一个职工在册！"<<endl;
    }
    isEixt();
}
//判断vector是否为空
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
//显示vector里面的所有职工信息
void showVectorAll(vector<Person *> &v)
{
    system("cls");
    //vector不为空打印所有职工信息
    if (!isVectorEmpty(v))
    {
        for (unsigned int i = 0; i < v.size(); i++)
        {
            v[i]->print();
        }
    }
    else
    {
        cout<<"没有任何一个职工在册！"<<endl;
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
