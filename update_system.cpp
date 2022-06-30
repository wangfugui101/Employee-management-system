#include "myhead.h"
//修改map中的对象信息
void updateById(vector<Person *> &v,map<int, Person *> &m)
{
    int id;
    cout<<"请输入要修改的id：";
    cin >> id;
    std::map<int,Person *>::iterator it = m.find(id);
    if (it != m.end())
    {
        // it->second->print();
        cout<<"请输入要修改的信息："<<endl;
        if(it->second->getFlag() == "CEO")
        {
            m.erase(it);

            for (unsigned int i = 0; i < v.size(); i++)
            {
                if (v[i]->getId() == id)
                {
                    v.erase(v.begin()+i);
                    break;
                }
            }
            addCEO(v);
            pair <int,Person *> p;
            pair<std::map<int,Person *>::iterator,bool> ret;
            p.first = v[v.size()-1]->getId();
            p.second = v[v.size()-1];
            ret = m.insert(p);
            if (ret.second == false)
            {
                cout << "插入失败" << endl;
            }
        }
        else if(it->second->getFlag() == "staff")
        {
            m.erase(it);

            for (unsigned int i = 0; i < v.size(); i++)
            {
                if (v[i]->getId() == id)
                {
                    v.erase(v.begin()+i);
                    break;
                }
            }

            addStaff(v);

            pair <int,Person *> p;
            pair<std::map<int,Person *>::iterator,bool> ret;
            p.first = v[v.size()-1]->getId();
            p.second = v[v.size()-1];
            ret = m.insert(p);
            if (ret.second == false)
            {
                cout << "插入失败" << endl;
            }

        }
        else if(it->second->getFlag() == "manager")
        {
            m.erase(it);
            for (unsigned int i = 0; i < v.size(); i++)
            {
                if (v[i]->getId() == id)
                {
                    v.erase(v.begin()+i);
                    break;
                }
            }
            addManager(v);
            pair <int,Person *> p;
            pair<std::map<int,Person *>::iterator,bool> ret;
            p.first = v[v.size()-1]->getId();
            p.second = v[v.size()-1];
            ret = m.insert(p);
            if (ret.second == false)
            {
                cout << "插入失败" << endl;
            }
        }
        cout<<"修改成功"<<endl;
    }
    else
    {
        cout << "没有找到该id的对象" << endl;
    }
    isEixt();
}
void update_system(vector<Person *> &v,map<int, Person *> &m)
{
    updateById(v,m);
}
