#include "myhead.h"

string str = "-> ";
void gotoxy(int xpos, int ypos)
{
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos; scrn.Y = ypos;
    SetConsoleCursorPosition(hOuput, scrn);
}

int getKey(string *select1,int len)
{
    int index = 0;
    char ch;
    while (true) {
        if (_kbhit()) {//_kbbit()�����������Ǽ�����̨���ڵİ����Ƿ񱻰���
            ch = _getch();//not print at screen
            if (ch == 72 || ch == 80 || ch == '\r')//up,down,�س���
            {
                if (ch == 27) {//esc
                    cout << "exit system" << endl;
                    Sleep(2000);
                    return -1;
                }
                else if (ch == 72) {//up
                    printf("\r%*c\r", 79, ' ');
                    gotoxy(9, 3 + index);
                    cout << select1[index];
                    index--;
                }
                else if (ch == 80) {//down
                    printf("\r%*c\r", 79, ' ');
                    gotoxy(9, 3 + index);
                    cout << select1[index];
                    index++;
                }
                if (index < 0) {
                    index = len-1;
                }
                else if (index >= len) {
                    index = 0;
                }
            }
            gotoxy(5, 3 + index);
            cout << "          ";
//            Sleep(100);
            cout << str + select1[index];
            if (ch == '\r') {
                system("cls");
//                Sleep(1000);

                return index;
            }
        }
    }
}
int  info(string *select1,int len)
{
    cout<<"==============��ӭ����ְ������ϵͳ=============="<<endl;
    gotoxy(5, 1);
    cout << "Please Enter �� �� to Control System" << endl;
    for (int i = 0; i < len; i++) {
//        cout<<"i="<<i<<endl;
        gotoxy(9, 3 + i);
        cout << select1[i];
    }
    cout<<endl;
    cout<<endl;
    cout<<"============================================="<<endl;
    gotoxy(5, 3);
    cout << str+" "+select1[0];
    return getKey(select1,len);
}
void isEixt()
{
    char ret;
    while (1) {
        cout<<"�˳���(Y/N)"<<endl;
        ret = _getch();
        if(ret == '\r')
        {
            return;
        }
    }
}
