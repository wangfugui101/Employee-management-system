#include "myhead.h"

//ͨ��map����ְ����Ž���ɾ��ְ��
void deleteById(vector<Person *> &v,map<int, Person *> &m)
{
    int id;
    cout<<"������Ҫɾ����id��";
    cin >> id;
    std::map<int,Person *>::iterator it = m.find(id);
    if (it != m.end())
    {
        m.erase(it);
        //ɾ��vector�еĶ���
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (v[i]->getId() == id)
            {
                v.erase(v.begin()+i);
                break;
            }
        }
        cout<<"ɾ���ɹ�"<<endl;
    }
    else
    {
        cout << "û���ҵ���id�Ķ���" << endl;
    }
    isEixt();
}
void del_system(vector<Person *> &v,map<int, Person *> &m)
{
    deleteById(v,m);
}
