#include "myhead.h"
//�޸�map�еĶ�����Ϣ
void updateById(vector<Person *> &v,map<int, Person *> &m)
{
    int id;
    cout<<"������Ҫ�޸ĵ�id��";
    cin >> id;
    std::map<int,Person *>::iterator it = m.find(id);
    if (it != m.end())
    {
        // it->second->print();
        cout<<"������Ҫ�޸ĵ���Ϣ��"<<endl;
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
                cout << "����ʧ��" << endl;
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
                cout << "����ʧ��" << endl;
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
                cout << "����ʧ��" << endl;
            }
        }
        cout<<"�޸ĳɹ�"<<endl;
    }
    else
    {
        cout << "û���ҵ���id�Ķ���" << endl;
    }
    isEixt();
}
void update_system(vector<Person *> &v,map<int, Person *> &m)
{
    updateById(v,m);
}
