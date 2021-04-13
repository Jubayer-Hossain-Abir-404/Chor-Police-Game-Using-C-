#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
class chor_police
{
    int i,j,face,data[100],d,c=0,p,e,q,l,m,sum[100],f,number,n,ab,bc,choose,ed,geb,pel,pela,mui,muia,x[100],y[100][100],z[100],jack,sum1=0,xy[100];
    int temp,yj[100],maximum,jet,minimum,med,r,a1,a2,a3,a4,az,ap,ac,ad;
    int zeno,zemo,letto,loitta,maximum2,maximum3,ash[100],goku=0;
    int toriama=0,toriama1=0,toriama2=0,donald,micky,mona,gohan=0,easy=-1,doggy=0;
    char pikacchu;
    int easy1=-1;
    int f1,f2,f3,f4,so1,accah=0,mj1,mj2,mj3,mj4;
public:
    int find_chor_police(string s[],int saitama)
    {
        srand(time(0));
        easy1=-1;
        for(i=1; i<=saitama; i++)
        {
            mj1=0;
            mj2=0;
            mj3=0;
            mj4=0;
            easy++;
            cout<<endl<< "Run time no."<<i<<endl<<endl<<endl<<endl<<endl;
            cout<< "Do you wish to continue with the game???"<<endl;
            cout<< "Press any key to continue and press 1 to quit and press 0 to restart the game again:";
            cin>>pikacchu;
            if(doggy>0)
            {
                easy1++;
                if(pikacchu=='1')
                {
                    doggy=0;
                    return easy;
                }
                else if(pikacchu=='0')
                {
                    goku=0;
                    doggy=0;
                    easy=-1;
                    return 0;
                }
                else
                {
                    cout<<endl<< "Continue the game at your will"<<endl<<endl;
                    system("pause");
                    system("cls");
                }
            }
            else if(pikacchu=='1'&&i==1)
            {
                return 100;
            }
            else if(pikacchu=='1')
            {
                cout<<endl<<endl<<endl<<endl;
                system("pause");
                system("cls");
                return easy;
            }
            else if(pikacchu=='0')
            {
                doggy++;
                goku=0;
                return 0;
            }
            else
            {
                cout<<endl<< "Continue the game at your will"<<endl<<endl;
                system("pause");
                system("cls");
            }
            jack=0;
            c=1;
            e=0;
            for(j=1; j<=6000000; j++)
            {
                face=1+rand()%4;
                if(e==4)
                {
                    break;
                }
                if(c==1)
                {
                    data[face]=100;
                    p=face;
                    c++;
                    e++;
                }
                else if(c==2&&face!=p)
                {
                    data[face]=80;
                    q=face;
                    c++;
                    e++;
                }
                else if(c==3&&face!=p&&face!=q)
                {
                    data[face]=60;
                    l=face;
                    c++;
                    e++;
                }
                else if(face!=p&&face!=q&&face!=l)
                {
                    data[face]=40;
                    e++;
                }
            }
            cout<<endl<<endl;
            cout<< "                  --------         --------"<<endl;
            cout<< "                  |   1  |         |   2  |"<<endl;
            cout<< "                  --------         --------"<<endl;
            cout<<endl<<endl;
            cout<< "                  --------         --------"<<endl;
            cout<< "                  |   3  |         |   4  |"<<endl;
            cout<< "                  --------         --------"<<endl;
            cout<<endl<<endl;
            cout<< "You can choose any number from the range of 1 to 4 :"<<endl;
            int a1=0;
            int leka=0;
            int doll=0;
            accah=0;
            f1=0;
            f2=0;
            f3=0;
            f4=0;
            for(int k=1; k<=4; k++)
            {
                if(accah==1)
                {
                    accah=0;
                    cout<<endl<<endl<<endl<<endl;
                    system("pause");
                    system("cls");
                }
                if(k==2)
                {
                    f1=number;
                    so1=number;
                }
                if(k==3)
                {
                    f2=number;
                }
                if(k==4)
                {
                    f3=number;
                }
                if(so1==1)
                {
                    if(f1==1)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   3  |         |   4  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        f1=-1;
                    }
                    if(f1==-1&&f2==2)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   3  |         |   4  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        f2=-2;
                    }
                    if(f1==-1&&f2==-2&&f3==3)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-1&&f2==-2&&f3==4)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-1&&f2==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        f2=-3;
                    }
                    if(f1==-1&&f2==-3&&f3==2)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-1&&f2==-3&&f3==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-1&&f2==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        f2=-4;
                    }
                    if(f1==-1&&f2==-4&&f3==2)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-1&&f2==-4&&f3==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                }
                else if(so1==2)
                {
                    if(f1==2)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   3  |         |   4  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        f1=-2;
                    }
                    if(f1==-2&&f2==1)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   3  |         |   4  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        f2=-1;
                    }
                    if(f1==-2&&f2==-1&&f3==3)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-2&&f2==-1&&f3==4)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-2&&f2==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        f2=-3;
                    }
                    if(f1==-2&&f2==-3&&f3==1)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-2&&f2==-3&&f3==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-2&&f2==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        f2=-4;

                    }
                    if(f1==-2&&f2==-4&&f3==1)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-2&&f2==-4&&f3==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                }
                else if(so1==3)
                {
                    if(f1==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   1  |         |   2  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        f1=-3;
                    }
                    if(f1==-3&&f2==1)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        f2=-1;
                    }
                    if(f1==-3&&f2==-1&&f3==2)
                    {
                        cout<<endl<<endl;
                        cout<< "                                           "<<endl;
                        cout<< "                                           "<<endl;
                        cout<< "                                           "<<endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-3&&f2==-1&&f3==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-3&&f2==2)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        f2=-2;
                    }
                    if(f1==-3&&f2==-2&&f3==1)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   4  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-3&&f2==-2&&f3==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-3&&f2==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   1  |         |   2  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        f2=-4;
                    }
                    if(f1==-3&&f2==-4&&f3==1)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-3&&f2==-4&&f3==2)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                }
                if(so1==4)
                {
                    if(f1==4)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   1  |         |   2  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        f1=-4;
                    }
                    if(f1==-4&&f2==1)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        f2=-1;
                    }
                    if(f1==-4&&f2==-1&&f3==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-4&&f2==-1&&f3==2)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-4&&f2==2)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        f2=-2;
                    }
                    if(f1==-4&&f2==-2&&f3==1)
                    {
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   3  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-4&&f2==-2&&f3==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-4&&f2==3)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<< "                  |   1  |         |   2  |"<<endl;
                        cout<< "                  --------         --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                        f2=-3;
                    }
                    if(f1==-4&&f2==-3&&f3==1)
                    {
                        cout<<endl<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<< "                                   |   2  |"<<endl;
                        cout<< "                                   --------"<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                    if(f1==-4&&f2==-3&&f3==2)
                    {
                        cout<<endl<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<< "                  |   1  |                 "<<endl;
                        cout<< "                  --------                 "<<endl;
                        cout<<endl<<endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<                                                endl;
                        cout<<endl<<endl;
                    }
                }
                cout<<s[k]<< " please choose:";
                while(1)
                {
                    cin>>number;
                    if(number==1&&mj1==0)
                    {
                        mj1++;
                        break;
                    }
                    else if(number==2&&mj2==0)
                    {
                        mj2++;
                        break;
                    }
                    else if(number==3&&mj3==0)
                    {
                        mj3++;
                        break;
                    }
                    else if(number==4&&mj4==0)
                    {
                        mj4++;
                        break;
                    }
                    else
                    {
                        cout<<endl<<endl<<endl;
                        cout<<s[k]<< " please choose again:";
                        continue;
                    }
                }
                if(data[number]==100)
                {
                    cout<<s[k]<< " got Babu="<<data[number]<<endl;
                    m=number;
                    z[k]=data[number];
                    geb=k;
                }
                else if(data[number]==80)
                {
                    cout<<s[k]<< " got Police="<<data[number]<<endl;
                    cout<< "Now you have to find who is chor and who is dakat"<<endl;
                    z[k]=data[number];
                    n=number;
                    ed=k;
                }
                else if(data[number]==60)
                {
                    pel=number;
                    z[k]=data[number];
                    pela=k;
                }
                else if(data[number]==40)
                {
                    mui=number;
                    z[k]=data[number];
                    muia=k;
                }
                accah++;
            }
            cout<<endl<<endl<<endl<<endl;
            system("pause");
            system("cls");
            cout<< "^_^ ^_^ ^_^ "<<s[geb]<< " got Babu"<<endl<<endl<<endl<<endl;
            if(pel>mui)
            {
                cout<<s[ed]<< " Now you have to choose between the number "<<mui<<" and "<<pel<<" to find the thief between "<<s[muia]<< " and "<<s[pela]<< ":";
            }
            else
            {
                cout<<s[ed]<< " Now you have to choose between the number "<<pel<<" and "<<mui<<" to find the thief between "<<s[pela]<< " and "<<s[muia]<< ":";
            }
            int lol=0;
            cin>>choose;
            while(1)
            {
                if(choose!=mui&&choose!=pel)
                {
                    cout<<endl<< "You are not allowed to choose this"<<endl;
                    cout<<endl<< "Choose again:";
                    cin>>choose;
                }
                else
                {
                    break;
                }
            }
            switch(choose)
            {
            case 1:
                if(data[choose]==40)
                {
                    cout<< "You have caught the thief.Congratulations"<<endl;
                    data[pel]=0;
                    data[mui]=0;
                    jack+=2;
                }
                else
                {
                    cout<< "You have chosen the wrong guy"<<endl;
                    data[n]=0;
                    jack++;
                }
                break;
            case 2:
                if(data[choose]==40)
                {
                    cout<< "You have caught the thief.Congratulations"<<endl;
                    data[pel]=0;
                    data[mui]=0;
                    jack+=2;
                }
                else
                {
                    cout<< "You have chosen the wrong guy"<<endl;
                    data[n]=0;
                    jack++;
                }
                break;
            case 3:
                if(data[choose]==40)
                {
                    cout<< "You have caught the thief.Congratulations"<<endl;
                    data[pel]=0;
                    data[mui]=0;
                    jack+=2;
                }
                else
                {
                    cout<< "You have chosen the wrong guy"<<endl;
                    data[n]=0;
                    jack++;
                }
                break;
            case 4:
                if(data[choose]==40)
                {
                    cout<< "You have caught the thief.Congratulations"<<endl;
                    data[pel]=0;
                    data[mui]=0;
                    jack+=2;
                }
                else
                {
                    cout<< "You have chosen the wrong guy"<<endl;
                    data[n]=0;
                    jack++;
                }
                break;
            default:
                cout<< "Wrong input"<<endl;
                break;
            }
            if(jack==1)
            {
                z[ed]=data[n];
            }
            else if(jack==2)
            {
                z[pela]=data[pel];
                z[muia]=data[mui];
            }
            for(int deq=1; deq<=4; deq++)
            {
                y[i][deq]=z[deq];
            }
            goku++;
            cout<<endl<<endl<<endl<<endl;
            for(int duck=1; duck<=4; duck++)
            {
                cout<<setw(15)<<s[duck]<<setw(10);
            }
            cout<<endl;
            for(donald=1; donald<=goku; donald++)
            {
                for(micky=1; micky<=4; micky++)
                {
                    cout<<setw(15)<<y[donald][micky]<<setw(13);
                }
                cout<<endl;
            }
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            system("pause");
            system("cls");
        }

        cout<<endl<<endl<<endl<< "The game is over.So the final result is shown below"<<endl<<endl<<endl<<endl;
        cout<<endl<<endl<<endl<<endl;
        for(i=1; i<=4; i++)
        {
            cout<<setw(15)<<s[i]<<setw(10);
        }
        cout<<endl;
        for(i=1; i<=saitama; i++)
        {
            for(j=1; j<=4; j++)
            {
                cout<<setw(15)<<y[i][j]<<setw(13);
            }
            cout<<endl;
        }
        for(i=1; i<=4; i++)
        {
            sum1=0;
            for(j=1; j<=saitama; j++)
            {
                sum1=sum1+y[j][i];
            }
            xy[i]=sum1;
        }
        cout<< "-------------------------------------------------------------------------"<<endl;
        for(i=1; i<=4; i++)
        {
            cout<<setw(15)<<xy[i]<<setw(13);
        }
        maximum=xy[1];
        minimum=xy[1];
        int a2[100],a3[100],c=0,d=0,pq,gq;
        for(int i=1; i<=4; i++)
        {
            if(xy[i]>maximum)
            {
                maximum=xy[i];
                pq=i;
            }
        }
        for(int i=1; i<=4; i++)
        {
            if(xy[i]<minimum)
            {
                minimum=xy[i];
                gq=i;
            }
        }
        for(int i=1; i<=4; i++)
        {
            if(maximum==xy[i])
            {
                if(c==0)
                {
                    p=i;
                    c++;
                }
                else if(c==1)
                {
                    q=i;
                    c++;
                }
                else if(c==2)
                {
                    r=i;
                    c++;
                }
                else if(c==3)
                {
                    l=i;
                    c++;
                }
            }
        }
        d=0;
        for(int i=1; i<=4; i++)
        {
            if(minimum==xy[i])
            {
                if(d==0)
                {
                    ad=i;
                    d++;
                }
                else if(d==1)
                {
                    az=i;
                    d++;
                }
                else if(d==2)
                {
                    ap=i;
                    d++;
                }
                else if(d==3)
                {
                    ac=i;
                    d++;
                }
            }
        }
        e=0;
        if(c==2&&d==2)
        {
            cout<< endl<<endl<<"Guess two player have won the game"<<endl;
            cout<<s[p]<< " and "<<s[q]<< " are the winner with "<<maximum<< " points"<<endl;
            cout<<endl<<s[ad]<< " and "<<s[az]<< " both share the second position with "<<minimum<< " points"<<endl;
        }
        else
        {
            if(c==1)
            {
                cout<< endl<<endl<<"Congratulations!!! "<<s[p]<< " is the winner of all  with "<<maximum<< " points"<<endl;
            }
            if(c==2)
            {
                cout<< endl<<endl<<"Guess two player have won the game"<<endl;
                cout<<s[p]<< " and "<<s[q]<< " are the winner with "<<maximum<< " points"<<endl;
                toriama++;
            }
            if(c==3)
            {
                cout<< endl<<endl<<"Guess three player have won the game"<<endl;
                cout<<s[p]<< ","<<s[q]<<","<<s[r]<< " are the winner with "<<maximum<< " points"<<endl;
                toriama1++;
            }
            if(c==4)
            {
                cout<<endl<<endl<< "Guess everyone wins!!!"<<endl;
                cout<<s[p]<< ","<<s[q]<< ","<<s[r]<< ","<<s[l]<< " are the winner with"<<maximum<< " points "<<endl;
                toriama2++;
            }
            if(d==2)
            {
                gohan++;
            }
            if(toriama==0&&gohan!=1)
            {
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&e==0)
                    {
                        maximum2=xy[i];
                        zeno=i;
                        e++;
                    }
                    else if(xy[i]!=maximum&&xy[i]!=minimum&&e==1)
                    {
                        maximum3=xy[i];
                        zemo=i;
                        e++;
                    }

                }
                if(xy[zeno]<xy[zemo])
                {
                    maximum2=xy[zemo];
                    maximum3=xy[zeno];
                    letto=zemo;
                    loitta=zeno;
                    cout<<endl<<s[letto]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[loitta]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(xy[zeno]>xy[zemo])
                {
                    maximum2=xy[zeno];
                    maximum3=xy[zemo];
                    loitta=zeno;
                    letto=zemo;
                    cout<<endl<<s[loitta]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[letto]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(maximum2==maximum3)
                {
                    cout<<endl<<s[zeno]<< " and "<<s[zemo]<< " both share the second position with "<<maximum2<< " points"<<endl;
                }
                gohan+=2;
            }
            if(toriama==1)
            {
                mona=0;
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&(d==2||c==2))
                    {
                        maximum2=xy[i];
                        zeno=i;
                        mona++;
                    }
                }
                cout<<endl<< s[zeno]<< " is the second with "<<maximum2<< " points"<<endl;
                gohan+=2;
            }
            if(gohan==0)
            {
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&e==0)
                    {
                        maximum2=xy[i];
                        zeno=i;
                        e++;
                    }
                    else if(xy[i]!=maximum&&xy[i]!=minimum&&e==1)
                    {
                        maximum3=xy[i];
                        zemo=i;
                        e++;
                    }

                }
                if(xy[zeno]<xy[zemo])
                {
                    maximum2=xy[zemo];
                    maximum3=xy[zeno];
                    letto=zemo;
                    loitta=zeno;
                    cout<<endl<<s[letto]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[loitta]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(xy[zeno]>xy[zemo])
                {
                    maximum2=xy[zeno];
                    maximum3=xy[zemo];
                    loitta=zeno;
                    letto=zemo;
                    cout<<endl<<s[loitta]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[letto]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(maximum2==maximum3)
                {
                    cout<<endl<<s[zeno]<< " and "<<s[zemo]<< " both share the second position with "<<maximum2<< " points"<<endl;
                }
            }
            if(gohan==1)
            {
                mona=0;
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&(d==2||c==2))
                    {
                        maximum2=xy[i];
                        zeno=i;
                        mona++;
                    }
                }
                cout<<endl<< s[zeno]<< " is the second with "<<maximum2<< " points"<<endl;
            }
            if(d==1)
            {
                cout<<endl<< "Awwh guess "<<s[ad]<< " is the laddu guddu with "<<minimum<< " points "<<endl;
            }
            if(d==2)
            {
                cout<<endl<< "Guess there are two laddu guddus"<<endl;
                cout<<endl<<s[ad]<< ","<<s[az]<< " are the two laddu guddus with "<<minimum<< " points "<<endl;
            }
            if(d==3)
            {
                cout<<endl<< "Guess there are three laddu guddus"<<endl;
                cout<<endl<<s[ad]<< ","<<s[az]<< ","<<s[ap]<< " are the three laddu guddus"<<endl;
            }
            if(d==4)
            {
                cout<<endl<< "Guess all of them sucked "<<endl;
                cout<<endl<<s[ad]<< ","<<s[az]<< ","<<s[ap]<< ","<<s[ac]<< " are the legends"<<endl;
            }
        }
        return -13;
    }
    void final_result(string s[],int saitama)
    {
        cout<<endl<<endl<<endl<< "The game is over.So the final result is shown below"<<endl<<endl<<endl<<endl;
        cout<<endl<<endl<<endl<<endl;
        for(i=1; i<=4; i++)
        {
            cout<<setw(15)<<s[i]<<setw(10);
        }
        cout<<endl;
        for(i=1; i<=saitama; i++)
        {
            for(j=1; j<=4; j++)
            {
                cout<<setw(15)<<y[i][j]<<setw(13);
            }
            cout<<endl;
        }
        for(i=1; i<=4; i++)
        {
            sum1=0;
            for(j=1; j<=saitama; j++)
            {
                sum1=sum1+y[j][i];
            }
            xy[i]=sum1;
        }
        cout<< "-------------------------------------------------------------------------"<<endl;
        for(i=1; i<=4; i++)
        {
            cout<<setw(15)<<xy[i]<<setw(13);
        }
        maximum=xy[1];
        minimum=xy[1];
        int a2[100],a3[100],c=0,d=0,pq,gq;
        for(int i=1; i<=4; i++)
        {
            if(xy[i]>maximum)
            {
                maximum=xy[i];
                pq=i;
            }
        }
        for(int i=1; i<=4; i++)
        {
            if(xy[i]<minimum)
            {
                minimum=xy[i];
                gq=i;
            }
        }
        for(int i=1; i<=4; i++)
        {
            if(maximum==xy[i])
            {
                if(c==0)
                {
                    p=i;
                    c++;
                }
                else if(c==1)
                {
                    q=i;
                    c++;
                }
                else if(c==2)
                {
                    r=i;
                    c++;
                }
                else if(c==3)
                {
                    l=i;
                    c++;
                }
            }
        }
        d=0;
        for(int i=1; i<=4; i++)
        {
            if(minimum==xy[i])
            {
                if(d==0)
                {
                    ad=i;
                    d++;
                }
                else if(d==1)
                {
                    az=i;
                    d++;
                }
                else if(d==2)
                {
                    ap=i;
                    d++;
                }
                else if(d==3)
                {
                    ac=i;
                    d++;
                }
            }
        }
        e=0;
        if(c==2&&d==2)
        {
            cout<< endl<<endl<<"Guess two player have won the game"<<endl;
            cout<<s[p]<< " and "<<s[q]<< " are the winner with "<<maximum<< " points"<<endl;
            cout<<endl<<s[ad]<< " and "<<s[az]<< " both share the second position with "<<minimum<< " points"<<endl;
        }
        else
        {
            if(c==1)
            {
                cout<< endl<<endl<<"Congratulations!!! "<<s[p]<< " is the winner of all  with "<<maximum<< " points"<<endl;
            }
            if(c==2)
            {
                cout<< endl<<endl<<"Guess two player have won the game"<<endl;
                cout<<s[p]<< " and "<<s[q]<< " are the winner with "<<maximum<< " points"<<endl;
                toriama++;
            }
            if(c==3)
            {
                cout<< endl<<endl<<"Guess three player have won the game"<<endl;
                cout<<s[p]<< ","<<s[q]<<","<<s[r]<< " are the winner with "<<maximum<< " points"<<endl;
                toriama1++;
            }
            if(c==4)
            {
                cout<<endl<<endl<< "Guess everyone wins!!!"<<endl;
                cout<<s[p]<< ","<<s[q]<< ","<<s[r]<< ","<<s[l]<< " are the winner with"<<maximum<< " points "<<endl;
                toriama2++;
            }
            if(d==2)
            {
                gohan++;
            }
            if(toriama==0&&gohan!=1)
            {
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&e==0)
                    {
                        maximum2=xy[i];
                        zeno=i;
                        e++;
                    }
                    else if(xy[i]!=maximum&&xy[i]!=minimum&&e==1)
                    {
                        maximum3=xy[i];
                        zemo=i;
                        e++;
                    }

                }
                if(xy[zeno]<xy[zemo])
                {
                    maximum2=xy[zemo];
                    maximum3=xy[zeno];
                    letto=zemo;
                    loitta=zeno;
                    cout<<endl<<s[letto]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[loitta]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(xy[zeno]>xy[zemo])
                {
                    maximum2=xy[zeno];
                    maximum3=xy[zemo];
                    loitta=zeno;
                    letto=zemo;
                    cout<<endl<<s[loitta]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[letto]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(maximum2==maximum3)
                {
                    cout<<endl<<s[zeno]<< " and "<<s[zemo]<< " both share the second position with "<<maximum2<< " points"<<endl;
                }
                if(maximum2==minimum&&maximum2==maximum3&&maximum3==minimum)
                {
                    cout<<endl<<endl<<endl;
                    cout<< "Guess rest of the players have become second altogether"<<endl;
                }
                gohan+=2;
            }
            if(toriama==1)
            {
                mona=0;
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&(d==2||c==2))
                    {
                        maximum2=xy[i];
                        zeno=i;
                        mona++;
                    }
                }
                cout<<endl<< s[zeno]<< " is the second with "<<maximum2<< " points"<<endl;
                gohan+=2;
            }
            if(toriama1==1)
            {
                cout<<endl<<endl<<endl;
                cout<<s[l]<< " is the second with "<<minimum<< " points"<<endl;
            }
            if(toriama2==2)
            {
                cout<<endl<<endl<<endl;
                cout<< "Guess there is no one left to be in second or third position"<<endl;
            }
            if(gohan==0)
            {
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&e==0)
                    {
                        maximum2=xy[i];
                        zeno=i;
                        e++;
                    }
                    else if(xy[i]!=maximum&&xy[i]!=minimum&&e==1)
                    {
                        maximum3=xy[i];
                        zemo=i;
                        e++;
                    }

                }
                if(xy[zeno]<xy[zemo])
                {
                    maximum2=xy[zemo];
                    maximum3=xy[zeno];
                    letto=zemo;
                    loitta=zeno;
                    cout<<endl<<s[letto]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[loitta]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(xy[zeno]>xy[zemo])
                {
                    maximum2=xy[zeno];
                    maximum3=xy[zemo];
                    loitta=zeno;
                    letto=zemo;
                    cout<<endl<<s[loitta]<< " is the second with "<<maximum2<< " points"<<endl;
                    cout<<endl<<s[letto]<< " is the third with "<<maximum3<< " points"<<endl;
                }
                if(maximum2==maximum3)
                {
                    cout<<endl<<s[zeno]<< " and "<<s[zemo]<< " both share the second position with "<<maximum2<< " points"<<endl;
                }
            }
            if(gohan==1)
            {
                mona=0;
                for(i=1; i<=4; i++)
                {
                    if(xy[i]!=maximum&&xy[i]!=minimum&&(d==2||c==2))
                    {
                        maximum2=xy[i];
                        zeno=i;
                        mona++;
                    }
                }
                cout<<endl<< s[zeno]<< " is the second with "<<maximum2<< " points"<<endl;
            }
            if(d==1)
            {
                cout<<endl<< "Awwh guess "<<s[ad]<< " is the laddu guddu with "<<minimum<< " points "<<endl;
            }
            if(d==2)
            {
                cout<<endl<< "Guess there are two laddu guddus"<<endl;
                cout<<endl<<s[ad]<< ","<<s[az]<< " are the two laddu guddus with "<<minimum<< " points "<<endl;
            }
            if(d==3)
            {
                cout<<endl<< "Guess there are three laddu guddus"<<endl;
                cout<<endl<<s[ad]<< ","<<s[az]<< ","<<s[ap]<< " are the three laddu guddus"<<endl;
            }
            if(d==4)
            {
                cout<<endl<< "Guess all of them sucked "<<endl;
                cout<<endl<<s[ad]<< ","<<s[az]<< ","<<s[ap]<< ","<<s[ac]<< " are the legends"<<endl;
            }
        }

    }

};
int main()
{
    chor_police c;
    string a[10],b[10];
    int n,number;
    cout<< "                                  Welcome to the world of Chor Police   "<<endl<<endl<<endl<<endl;
    cout<< "Instructions:"<<endl<<endl;
    cout<< "# First of all,4 player is needed to play this game"<<endl;
    cout<< "# Each player has to choose a number from the range of 1 to 4 to see whether the player is babu or police or chor or dakat"<<endl;
    cout<< "# The player who finds babu will be remained safe and get 100 points"<<endl;
    cout<< "# But the rest of the players are not safe"<<endl;
    cout<< "# The player who gets the police will have to choose between the chor and dakat"<<endl;
    cout<< "# If the police is able to catch the chor the police will get 80 points otherwise chor and dakat will get 40 and 60 points respectively"<<endl;
    cout<< "# The game will continue to be like this and all the points achieved by the players will be added to their previous points respectively"<<endl;
    cout<< "# At the end whoever has the maximum point will be declared as the first winner and others will be declared as second,third and ladduguddu according to their points"<<endl;
    cout<< "# Therefore the game will be completed and will be completely shut down"<<endl<<endl;
    system("pause");
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    char choose;
    cout<<setw(70)<< "<New Game(Press any key for a New game)"<<endl;
    cout<<setw(63)<< "<Quit Game(Press 1 to quit game)"<<endl;
    cout<<setw(38)<< "Press:";
    cin>>choose;
    cout<<endl<<endl<<endl;
    system("pause");
    system("cls");
    if(choose=='1')
    {
        cout<< "The game has been shut down"<<endl;
        return 0;
    }
    else
    {
        cout<< "Continue the game at your own will"<<endl<<endl<<endl<<endl;
        system("pause");
        system("cls");
    }
    cout<<endl<< "Enter 4 player names:"<<endl<<endl;
    for(int i=1; i<=4; i++)
    {
        cout<< "Player no. "<<i<< ":";
        if(i==1)
        {
            cin.ignore();
        }
        getline(cin,a[i]);
    }
    cout<<endl<< "So how many times do you guys want to play:";
    cin>>number;
    system("cls");
    int ans=c.find_chor_police(a,number);
    if(ans==0)
    {
        while(1)
        {
            cout<< endl<<endl<<endl<<"The game has been restarted"<<endl<<endl<<endl;
            system("pause");
            system("cls");
            cout<<endl<< "Enter 4 player names:"<<endl<<endl;
            for(int i=1; i<=4; i++)
            {
                cout<< "Player no. "<<i<< ":";
                if(i==1)
                {
                    cin.ignore();
                }
                getline(cin,b[i]);
            }
            cout<<endl<< "So how many times do you guys want to play:";
            cin>>number;
            system("cls");
            int ans=c.find_chor_police(b,number);
            if(ans==0)
            {
                continue;
            }
            else if(ans==1000)
            {
                break;
            }
            else if(ans==-13)
            {
                cout<<endl<<endl<<endl;
                system("pause");
                system("cls");
                cout<< "The game has been shut down completely"<<endl;
                break;
            }
            else
            {
                c.final_result(b,ans);
                cout<<endl<<endl<<endl<<endl;
                system("pause");
                system("cls");
                cout<< "The game has been completely shut down"<<endl;
                break;
            }
        }
    }
    else if(ans==100)
    {
        cout<<endl<<endl<<endl<<endl;
        system("pause");
        system("cls");
        cout<< "The game has been shut down completely"<<endl;
    }
    else if(ans==-13)
    {
        cout<<endl<<endl<<endl;
        system("pause");
        system("cls");
        cout<< "The game has been shut down completely"<<endl;
    }
    else
    {
        c.final_result(a,ans);
        cout<<endl<<endl<<endl<<endl;
        system("pause");
        system("cls");
        cout<< "The game has been shut down completely"<<endl;
    }
    return 0;
}
