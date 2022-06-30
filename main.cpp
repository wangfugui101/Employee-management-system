/************************************************************
Copyright (C), 2022-2031, 周湘祯. Co., Ltd.
文件名称: 职工管理系统的设计
文件说明：

作者: 周湘祯  版本 : v1.0 创建日期: 2022年06月20日
开发系统版本(lsb_release -a)：  Ubuntu 18.04 LTS
GCC编译器版本(gcc  -v)： gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)
函数列表:
1. main：启动代码的入口函数
历史记录:
<作者>  <创建时间>       <版本号>
周湘祯   2022年06月20日    v1.0
***********************************************************/
#include "myhead.h"
vector<Person *> v;
map<int, Person *> m;
string select0[] = { "退出","增加职工","删除职工","显示所有职工信息","修改职工信息","查找职工","清空文档"};
int select0_len = sizeof(select0) / sizeof(select0[0]);
int main()
{
    ReadVector(v,m);
    while(1)
    {
        system("cls");
        int key =info(select0,select0_len);
        switch (key) {
            case 0:
                {
                    cout<<"退出本系统成功！已自动保存数据..."<<endl;
                    exit_system(v,m);
                    Sleep(3000);
                    return 0;
                }
            case 1:
                {
                    add_system(v,m);
                    break;
                }
             case 2:
                {
                    del_system(v,m);
                    break;
                }
            case 3:
                {
                    show_system(v,m);
                    break;
                }
            case 4:
                {
                    update_system(v,m);
                    break;
                }
            case 5:
                {
                    find_system(v,m);
                    break;
                }
            case 6:
                {
                    clear_system(v,m);
                    break;
                }
        }
    }
    return 0;
}
