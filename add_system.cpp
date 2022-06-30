#include "myhead.h"
string select1[] = { "单个增加Staff","批量增加Staff","单个增加Manager","批量增加Manager","单个增加CEO","批量增加CEO","退出"};
int select1_len = sizeof(select1) / sizeof(select1[0]);
//创建一个方法，来添加Staff对象
void addStaff(vector<Person *> &v)
{
    int id;
    string name;
    int age;
    cout<<"请输入职工编号：";
    cin >> id ;
    cout<<"请输入职工姓名：";
    cin >> name;
    cout<<"请输入职工年龄：";
    cin >> age;
    //创建一个Staff对象
    Staff *s = new Staff(id,name,age);
    //将Staff对象添加到vector中
    v.push_back(s);

}
//创建一个方法，来专门调用addStaff来批量创建Staff对象
void addStaffs(vector<Person *> &v)
{
    int n;
    cout<<"请输入要创建的员工数量：";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        addStaff(v);
    }
    isEixt();
}
//创建一个方法，来添加Manager对象
void addManager(vector<Person *> &v)
{
    int id;
    string name;
    int age;
    cout<<"请输入经理编号：";
    cin >> id ;
    cout<<"请输入经理姓名：";
    cin >> name;
    cout<<"请输入经理年龄：";
    cin >> age;
    //创建一个Manager对象
    Manager *m = new Manager(id, name, age);
    //将Manager对象添加到vector中
    v.push_back(m);

}
//创建一个方法，来专门调用addManagers来批量创建Managers对象
void addManagers(vector<Person *> &v)
{
    int n;
    cout<<"请输入要创建的经理数量：";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        addManager(v);
    }
    isEixt();
}
//创建一个方法，来添加CEO对象
void addCEO(vector<Person *> &v)
{
    int id;
    string name;
    int age;
    cout<<"请输入总裁编号：";
    cin >> id ;
    cout<<"请输入总裁姓名：";
    cin >> name;
    cout<<"请输入总裁年龄：";
    cin >> age;
    //创建一个CEO对象
    CEO *c = new CEO(id, name, age);
    //将CEO对象添加到vector中
    v.push_back(c);

}
//创建一个方法，来专门调用addCEO来批量创建CEO对象
void addCEOs(vector<Person *> &v)
{
    int n;
    cout<<"请输入要创建的总裁数量：";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        addCEO(v);
    }
    isEixt();
}
//创建一个map来存储vector中的所有对象,其中key存储person的id,value存储person的指针
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
            cout << "插入失败" << endl;
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


