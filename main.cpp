#include <iostream>
#include <windows.h>
using namespace std;
// Nama = ZAJIROH
// Nim  = 1121031082
// Kelas= B
// Deskripsi : memasukan jam, menit, dan detik lalu divalidasi menggunakan ADT
int main()
{
    int HH,MM,SS,a,b;
    b=a=0;
    while(b==0)
    {
        cout<<"set jam : "<<endl;
        cin>>HH;
        cout<<"set menit : "<<endl;
        cin>>MM;
        cout<<"set detik : "<<endl;
        cin>>SS;
        if(HH<23&&MM<59&&SS<59)
        b++;
        else
        system("cls");
    }
    while(a==0)
    {
        system("cls");
        cout<<HH<<":"<<MM<<":"<<SS<<endl;
        Sleep(1000);
        SS++;
        if(SS>59)
        {
            SS=0;
            MM++;
        }
        if(MM>59)
        {
            MM=0;
            HH++;
        }
        if(HH>23)
        {
            HH=0;
        }
    }
    return 0;
}
