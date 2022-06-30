#include "myhead.h"
string select1[] = { "��������Staff","��������Staff","��������Manager","��������Manager","��������CEO","��������CEO","�˳�"};
int select1_len = sizeof(select1) / sizeof(select1[0]);
//����һ�������������Staff����
void addStaff(vector<Person *> &v)
{
    int id;
    string name;
    int age;
    cout<<"������ְ����ţ�";
    cin >> id ;
    cout<<"������ְ��������";
    cin >> name;
    cout<<"������ְ�����䣺";
    cin >> age;
    //����һ��Staff����
    Staff *s = new Staff(id,name,age);
    //��Staff������ӵ�vector��
    v.push_back(s);

}
//����һ����������ר�ŵ���addStaff����������Staff����
void addStaffs(vector<Person *> &v)
{
    int n;
    cout<<"������Ҫ������Ա��������";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        addStaff(v);
    }
    isEixt();
}
//����һ�������������Manager����
void addManager(vector<Person *> &v)
{
    int id;
    string name;
    int age;
    cout<<"�����뾭���ţ�";
    cin >> id ;
    cout<<"�����뾭��������";
    cin >> name;
    cout<<"�����뾭�����䣺";
    cin >> age;
    //����һ��Manager����
    Manager *m = new Manager(id, name, age);
    //��Manager������ӵ�vector��
    v.push_back(m);

}
//����һ����������ר�ŵ���addManagers����������Managers����
void addManagers(vector<Person *> &v)
{
    int n;
    cout<<"������Ҫ�����ľ���������";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        addManager(v);
    }
    isEixt();
}
//����һ�������������CEO����
void addCEO(vector<Person *> &v)
{
    int id;
    string name;
    int age;
    cout<<"�������ܲñ�ţ�";
    cin >> id ;
    cout<<"�������ܲ�������";
    cin >> name;
    cout<<"�������ܲ����䣺";
    cin >> age;
    //����һ��CEO����
    CEO *c = new CEO(id, name, age);
    //��CEO������ӵ�vector��
    v.push_back(c);

}
//����һ����������ר�ŵ���addCEO����������CEO����
void addCEOs(vector<Person *> &v)
{
    int n;
    cout<<"������Ҫ�������ܲ�������";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        addCEO(v);
    }
    isEixt();
}
//����һ��map���洢vector�е����ж���,����key�洢person��id,value�洢person��ָ��
void createmap(vector<Person *> &v,map<int, Person *> &m)
{
    pair<std::map<int,Person *>::iterator,bool> ret;
    for (unsigned int i = 0; i < v.size(); i++)
    {
        pair <int,Person *> p;
        p.first = v[i]->getId();
        p.second = v[i];
        ret = m.insert(p);
        if (ret.second == false)
        {
            cout << "����ʧ��" << endl;
        }
    }
}
void add_system(vector<Person *> &v,map<int, Person *> &m)
{
    while (1) {
        system("cls");
        int key1 =info(select1,select1_len);
        switch (key1) {
        case 0:
            {
                system("cls");
                addStaff(v);
                break;
            }
        case 1:
            {
                system("cls");
                addStaffs(v);
                break;
            }
        case 2:
            {
                addManager(v);
                break;
            }
        case 3:
            {
                addManagers(v);
                break;
            }
        case 4:
            {
                addCEO(v);
                break;
            }
        case 5:
            {
                addCEOs(v);
                break;
            }
        case 6:
            {
                return;
            }
        }
        createmap(v,m);
    }


}


