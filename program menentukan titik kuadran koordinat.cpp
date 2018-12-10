#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"=======================================\n"<<endl;
    cout<<"========PROGRAM KUADRAN KOORDINAT=========\n"<<endl;
    cout<<"==========================================\n"<<endl;
    cout<<"masukan koordinat 'x' :";cin>>x;
    cout<<"masukan koordinat 'y' :";cin>>y;
    cout<<"==========================================\n";
    cout<<endl;
    if(x>=0&&y>=0)
    {
        cout<<"titik x="<<x<<" dan titik y="<<y<<endl;
        cout<<"berada dikuadran 1"<<endl;
    }
    else if(x<0&&y>=0)
    {
        cout<<"titik x="<<x<<" dan titik y="<<y<<endl;
        cout<<"berada dikuadran 2"<<endl;
    }
    else if(x<0&&y<0)
    {
        cout<<"titik x="<<x<<" dan titk y="<<y<<endl;
        cout<<"berada dikuadran 3"<<endl;
    }
    else if(x>=0&&y<0)
        {cout<<"titik x="<<x<<" dan titik y="<<y<<endl;
        cout<<"berada dikuadran 4"<<endl;
        }
        else
        {
            cout<<"anda salah memasukan nilai"<<endl;
        }
        getch ();
}
