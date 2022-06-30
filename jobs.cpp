#include "jobs.h"

Staff::Staff(int id, string name, int age, string flag) : Person(id, name, age,flag)
{
    cout<<"This is Staff!"<<endl;
}

void Staff::print()
{
    cout << "id:" << getId() << " name:" << getName() << " age:" << getAge() << " flag:"    << getFlag()  << endl;
}

Manager::Manager(int id, string name, int age, string flag) : Person(id, name, age,flag)
{
    cout<<"This is Manager!"<<endl;
}

void Manager::print()
{
    cout << "id:" << getId() << " name:" << getName() << " age:" << getAge() << " flag:" << getFlag()  << endl;
}

CEO::CEO(int id, string name, int age, string flag) : Person(id, name, age,flag)
{
    cout<<"This is CEO!"<<endl;
}

void CEO::print()
{
    cout << "id:" << getId() << " name:" << getName() << " age:" << getAge() << " flag:" << getFlag()  << endl;
}
