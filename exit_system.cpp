#include "myhead.h"
void clearVector(vector<Person *> &v)
{
    for (unsigned int i = 0; i < v.size(); i++)
    {
        delete v[i];
    }
    v.clear();
}
void clearMap(map<int, Person *> &m)
{
    m.clear();
}
void exit_system(vector<Person *> &v,map<int, Person *> &m)
{
    SaveVector(v);
    vector<Person *>::iterator it;
    std::map<int,Person *>::iterator it1;
    for (it = v.begin(); it != v.end(); it++)
    {
        if (NULL != *it)
        {
            delete *it;
            *it = NULL;
        }
    }
    for (it1 = m.begin(); it1 != m.end(); it++)
    {
        if (NULL != *it)
        {
            delete *it;
            *it = NULL;
        }
    }
    clearVector(v);
    clearMap(m);

}
