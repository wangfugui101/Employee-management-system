#include "myhead.h"
void clear_system(vector<Person *> &v,map<int, Person *> &m)
{
    clearVector(v);
    clearMap(m);
    SaveVector(v);
}
