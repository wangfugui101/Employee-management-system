/************************************************************
Copyright (C), 2022-2031, ������. Co., Ltd.
�ļ�����: ְ������ϵͳ�����
�ļ�˵����

����: ������  �汾 : v1.0 ��������: 2022��06��20��
����ϵͳ�汾(lsb_release -a)��  Ubuntu 18.04 LTS
GCC�������汾(gcc  -v)�� gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)
�����б�:
1. main�������������ں���
��ʷ��¼:
<����>  <����ʱ��>       <�汾��>
������   2022��06��20��    v1.0
***********************************************************/
#include "myhead.h"
vector<Person *> v;
map<int, Person *> m;
string select0[] = { "�˳�","����ְ��","ɾ��ְ��","��ʾ����ְ����Ϣ","�޸�ְ����Ϣ","����ְ��","����ĵ�"};
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
                    cout<<"�˳���ϵͳ�ɹ������Զ���������..."<<endl;
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
