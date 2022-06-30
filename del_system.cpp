#include "myhead.h"

//通过map按照职工编号进行删除职工
void deleteById(vector<Person *> &v,map<int, Person *> &m)
{
    int id;
    cout<<"请输入要删除的id：";
    cin >> id;
    std::map<int,Person *>::iterator it = m.find(id);
    if (it != m.end())
    {
        m.erase(it);
        //删除vector中的对象
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (v[i]->getId() == id)
            {
                v.erase(v.begin()+i);
                break;
            }
        }
        cout<<"删除成功"<<endl;
    }
    else
    {
        cout << "没有找到该id的对象" << endl;
    }
    isEixt();
}
void del_system(vector<Person *> &v,map<int, Person *> &m)
{
    deleteById(v,m);
}
