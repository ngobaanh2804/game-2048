#include<iostream>
#include <cstdio>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <fstream>
using namespace std;
int diem=0;
int a[4][4]={0};
int kiemtra[4][4];
void gotoXY(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void clrScr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;
	HANDLE	hConsoleOut;
	COORD	Home = { 0, 0 };
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}
void gioithieu()
{
    TextColor(12);
    cout<<"                        CHAO MUNG BAN DEN VOI TRO CHOI                        "<<endl;
    cout<<"                                                                              "<<endl;
    cout<< "      2 2 2           0 0 0                 4 4         8 8 8 8 8          \n"<<endl;system("color 1");Sleep(10);
    cout<< "    2       2       0       0             4   4       8           8        \n"<<endl;system("color 2");Sleep(10);
    cout<< "            2     0           0         4     4       8           8        \n"<<endl;system("color 3");Sleep(10);
    cout<< "          2       0           0       4       4         8 8 8 8 8          \n"<<endl;system("color 4");Sleep(10);
    cout<< "        2         0           0     4 4 4 4 4 4 4     8           8        \n"<<endl;system("color 5");Sleep(10);
    cout<< "      2             0       0                 4       8           8        \n"<<endl;system("color 6");Sleep(10);
    cout<< "    2 2 2 2 2         0 0 0                   4         8 8 8 8 8          \n"<<endl;system("color 7");Sleep(10);
    cout<< "                       An 1 phim bat ki de tiep tuc                        \n"<<endl;
    getch();
    system("cls");
    system("color 11");
    cout<< "         Su dung cac phim mui ten de di chuyen          "<<endl;
    cout<< "         An 1 phim bat ki de tiep tuc                 \n"<<endl;
    getch();
    system("cls");
    system("color 9");
}
void start()
{
    TextColor(12);
    gotoXY(5,1);
    cout<< " Su dung cac phim mui ten de choi game ";
    TextColor(12);
    for(int i=0;i<=32;i++)
        for(int j=0;j<=16;j++)
        if(i==0 && j==0)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==0 && j==16)
    {
       gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==32 && j==16)
    {
       gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==32 && j==0)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==0 && j==4)
    {
       gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==0 && j==8)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==0 && j==12)
    {
       gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==8 && j==0)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==8 && j==4)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==8 && j==8)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==8 && j==12)
    {
       gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==8 && j==16)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==16 && j==0)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
        else if(i==16 && j==4)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
        else if(i==16 && j==8)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
        else if(i==16 && j==12)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
        else if(i==16 && j==16)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==24 && j==0)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==24 && j==4)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==24 && j==8)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==24 && j==12)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==24 && j==16)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==32 && j==4)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==32 && j==8)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==32 && j==12)
    {
        gotoXY(i+40,j+3);
        cout<< char(3);
    }
    else if(i==0 || i==8 || i==16 || i==24 || i==32)
    {
        gotoXY(i+40,j+3);
        cout<< char(179);
    }
    else if(j==0 || j==4 || j==8 || j==12 || j==16)
    {
       gotoXY(i+40,j+3);
        cout<< char(196);
    }
    TextColor(12);
    gotoXY(80,4);
    cout<<"Diem cua ban: ";
    gotoXY(80,6);
    cout<<"Diem cao nhat: ";
}
void write_bestScore(int diem)
{
	fstream fileScore;
	fileScore.open("Score.txt", ios::out);
	fileScore << diem;
	fileScore.close();
}
int get_bestScore()
{
	int diem;
	fstream fileScore;
	fileScore.open("Score.txt", ios::in);
	fileScore >> diem;
	fileScore.close();
	return diem;
}
void refill_Score()
{
    gotoXY(95,4);
    TextColor(0);
    cout<<"          ";
    gotoXY(95,4);
    TextColor(11);
    cout<<diem;
    if (diem > get_bestScore())
    {
		write_bestScore(diem);
	}
    gotoXY(95,6);
    TextColor(11);
    cout<<get_bestScore();
}
bool checkZero()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[i][j] == 0) {
				return true;
			}
		}
	}
	return false;
}
void creCheck()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			kiemtra[i][j] = a[i][j];
		}
	}
}

bool checkMove()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (kiemtra[i][j] != a[i][j]) return true;
		}
	}
	return false;
}

bool kiemtra_ketthucgame()
{
    if (checkZero() == true)
        return false;
	else if (checkZero() == false)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (a[i][j] == a[i][j + 1])
					return false;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (a[i][j] == a[i + 1][j])
					return false;
			}
		}
	}
	return true;
}
void taoso()
{
    srand(time(NULL));
    int potx,poty,ramdom;
    do
    {
        potx=rand()%4;
        poty=rand()%4;
    }
    while(a[potx][poty]!=0);
    ramdom=rand()%100;
    if (ramdom<80)
        a[potx][poty]=2;
    else
        a[potx][poty]=4;
}
void setColor(int value)
{
	switch (value) {
	    case 0:     TextColor(0);          break;
        case 2:		TextColor(15);         break;
        case 4:		TextColor(14);         break;
        case 8:		TextColor(13);         break;
        case 16:	TextColor(12);         break;
        case 32:	TextColor(11);         break;
        case 64:	TextColor(10);         break;
        case 128:	TextColor(9);          break;
        case 256:	TextColor(8);          break;
        case 512:	TextColor(7);          break;
        case 1024:  TextColor(6);          break;
        case 2048:  TextColor(5);          break;
        case 4096:  TextColor(4);          break;
        case 8192:  TextColor(3);          break;
        case 16384: TextColor(2);          break;
	}
}
void taolai_matran()
{
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            gotoXY(41+i*8,5+j*4);
            TextColor(0);
            cout<<"       ";
        }
    for(int y = 0; y < 4 ; y++ )
        for(int x = 0; x < 4;x++ )
        {
                if(a[y][x]<100)
                {
                    gotoXY(44+x*8,5+y*4);
                    setColor(a[y][x]);
                    cout<<a[y][x];
                }
                else if(a[y][x]<10000)
                {
                    gotoXY(43+x*8,5+y*4);
                    setColor(a[y][x]);
                    cout<<a[y][x];
                }

        }
}
void choigame()
{
    for(int i=0;i<2;i++)
        taoso();
    taolai_matran();
    refill_Score();
    start();
}
void dichuyentrai()
{
    for(int q=0;q<3;q++)
    {
        for(int i=0;i<4;i++)
            for(int j=0;j<3;j++)
                if(a[i][j]==0&&a[i][j+1]!=0)
                {
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=0;
                }
    }
    for(int w=0;w<4;w++)
        for(int e=0;e<3;e++)
            if(a[w][e]==a[w][e+1]&&a[w][e]!=0)
            {
                a[w][e]=a[w][e]+a[w][e+1];
                a[w][e+1]=0;
                diem=diem+a[w][e];
            }
    for(int r=0;r<4;r++)
        for(int t=0;t<3;t++)
        if(a[r][t]==0&&a[r][t+1]!=0)
        {
            a[r][t]=a[r][t+1];
            a[r][t+1]=0;
        }
}
void dichuyenphai()
{
    for(int q=0;q<3;q++)
    {
        for(int i=0;i<4;i++)
            for(int j=3;j>0;j--)
                if(a[i][j]==0&&a[i][j-1]!=0)
                {
                    a[i][j]=a[i][j-1];
                    a[i][j-1]=0;
                }
    }
    for(int w=0;w<4;w++)
        for(int e=3;e>0;e--)
            if(a[w][e]==a[w][e-1]&&a[w][e]!=0)
            {
                a[w][e]=a[w][e]+a[w][e-1];
                a[w][e-1]=0;
                diem=diem+a[w][e];
            }
    for(int r=0;r<4;r++)
        for(int t=3;t>0;t--)
        if(a[r][t]==0)
        {
            a[r][t]=a[r][t-1];
            a[r][t-1]=0;
        }
}
void dichuyenlen()
{
    int test=0;
    for(int q=0;q<3;q++)
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<4;j++)
                if(a[i][j]==0&&a[i+1][j]!=0)
                {
                    test++;
                    a[i][j]=a[i+1][j];
                    a[i+1][j]=0;
                }
    }
    for(int w=0;w<3;w++)
        for(int e=0;e<4;e++)
            if(a[w][e]==a[w+1][e]&&a[w][e]!=0)
            {
                test++;
                a[w][e]=a[w][e]+a[w+1][e];
                a[w+1][e]=0;
                diem=diem+a[w][e];
            }
    for(int r=0;r<3;r++)
        for(int t=0;t<4;t++)
        if(a[r][t]==0)
        {
            a[r][t]=a[r+1][t];
            a[r+1][t]=0;
        }
}
void dichuyenxuong()
{
    for(int q=0;q<3;q++)
    {
        for(int i=3;i>0;i--)
            for(int j=0;j<4;j++)
                if(a[i][j]==0&&a[i-1][j]!=0)
                {
                    a[i][j]=a[i-1][j];
                    a[i-1][j]=0;
                }
    }
    for(int w=3;w>0;w--)
        for(int e=0;e<4;e++)
            if(a[w][e]==a[w-1][e]&&a[w][e]!=0)
            {
                a[w][e]=a[w][e]+a[w-1][e];
                a[w-1][e]=0;
                diem=diem+a[w][e];
            }
    for(int r=3;r>0;r--)
        for(int t=0;t<4;t++)
        if(a[r][t]==0)
        {
            a[r][t]=a[r-1][t];
            a[r-1][t]=0;
        }
}
void ketthuc()
{
    gotoXY(80,22);
    TextColor(14);
    cout<<"Over!";
}
void dichuyen()
{
    char c=_getch();
    if(c==75)
        dichuyentrai();
    else if(c==77)
        dichuyenphai();
    else if(c==72)
        dichuyenlen();
    else if(c==80)
        dichuyenxuong();
    else
        dichuyen();
}
int main()
{
    gioithieu();
    choigame();
    while(kiemtra_ketthucgame() == false)
    {
        creCheck();
        dichuyen();
        if( checkMove() == true)
            taoso();
        taolai_matran();
        refill_Score();
    }
    ketthuc();
}
