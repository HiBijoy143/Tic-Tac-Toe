#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<MMsystem.h>
char a[9]= {'1','2','3','4','5','6','7','8','9'};
int k=0,end=1;
void Display()
{
    printf("\n\t\t\t\t\t || T i c   T a c   T o e ||\n");
    printf("\n\t\t\t\t\t:----------------------------:");
    printf("\n\t\t\t\t\t:         Develop By:        :");
    printf("\n\t\t\t\t\t:       Atiqur Rahman        :");
    printf("\n\t\t\t\t\t:     Md. Hasan Imam Bijoy   :");
    printf("\n\t\t\t\t\t:----------------------------:\n");
    printf("  Player 1 symbol: X\n\n");
    printf("  Player 2 symbol: 0\n\n");
    printf("\n\t\t\t\t\t --------|-------|--------");
    printf("\n\t\t\t\t\t|   %c    |   %c   |   %c    |",a[0],a[1],a[2]);
    printf("\n\t\t\t\t\t --------|-------|--------");
    printf("\n\t\t\t\t\t|   %c    |   %c   |   %c    |",a[3],a[4],a[5]);
    printf("\n\t\t\t\t\t --------|-------|--------");
    printf("\n\t\t\t\t\t|   %c    |   %c   |   %c    |",a[6],a[7],a[8]);
    printf("\n\t\t\t\t\t --------|-------|--------");

}
int count=0;
void Input()
{
    char ch;
    int i;
    count++;
    if(k==0)
    {
        printf("\n\n\n\n  Enter the position for x:");
        fflush(stdin);
        scanf("%c",&ch);
        for(i=0; i<=8; i++)
        {
            if(a[i]==ch)
            {
                a[i]='x';
                k=1;
                //you have to download music and set the url by your own location
                //PlaySound(TEXT("G:\\PROGRAMMING\\C Programming\\Project Tic TacToe\\Player 1 sound.wav"),NULL,SND_SYNC);
                break;
            }
        }
    }
    else
    {
        printf("\n\n\n\n  Enter the position for 0:");
        fflush(stdin);
        scanf("%c",&ch);
        for(i=0; i<=8; i++)
        {
            if(a[i]==ch)
            {
                a[i]='0';
                k=0;
                //you have to download music and set the url by your own location
                //PlaySound(TEXT("G:\\PROGRAMMING\\C Programming\\Project Tic TacToe\\Player 2 sound.wav"),NULL,SND_SYNC);
                break;
            }
        }
    }
}
int gameOver()
{
    if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
    {
        return(1);
    }
    else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
    {
        return(1);
    }
    else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
    {
        return(1);
    }
    else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
    {
        return(1);
    }
    else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
    {
        return(1);
    }
    else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
    {
        return(1);
    }
    else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
    {
        return(1);
    }
    else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
    {
        return(1);
    }
    else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0')
    {
        return(2);
    }
    else if(a[0]=='0'&&a[3]=='0'&&a[6]=='0')
    {
        return(2);
    }
    else if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
    {
        return(2);
    }
    else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
    {
        return(2);
    }
    else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
    {
        return(2);
    }
    else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
    {
        return(2);
    }
    else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
    {
        return(2);
    }
    else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
    {
        return(2);
    }
    else
    {
        return 3;
    }
}
void result()
{
    int var;
    if(count<9)
    {
        var=gameOver();
        if(var==1)
        {
            printf("\n\n\n\t\t\t\t  >>>>>  P L A Y E R  1    W O N  <<<<<");
            end=0;
            count=0;
            //you have to download music and set the url by your own location
            //PlaySound(TEXT("G:\\PROGRAMMING\\C Programming\\Project Tic TacToe\\victory.wav"),NULL,SND_SYNC);
        }
        else if(var==2)
        {
            printf("\n\n\n\t\t\t\t  >>>>>  P L A Y E R  2    W O N  <<<<<");
            end=0;
            count=0;
            //you have to download music and set the url by your own location
            //PlaySound(TEXT("G:\\PROGRAMMING\\C Programming\\Project Tic TacToe\\victory.wav"),NULL,SND_SYNC);
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t   >>>>>>  G A M E  D R A W N  <<<<<<");
        end=0;
        count=0;
        //you have to download music and set the url by your own location
        //PlaySound(TEXT("G:\\PROGRAMMING\\C Programming\\Project Tic TacToe\\Draw.wav"),NULL,SND_SYNC);
        Beep(100,300);
        Beep(800,300);
        Beep(20,300);
        Beep(20,300);
        Beep(30,300);
        Beep(100,300);
    }
}
void main()
{
    char c;
repetgame:
    system("cls");
    Display();
    while(end)
    {
        Input();
        system("cls");
        Display();
        result();
    }
    printf("\n\n\n Do you want to play again?\n\n");
    printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='y'||c=='Y')
    {
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
        k=0;
        end=1;
        goto repetgame;
    }
    printf("\n\n\n\t\t\t\t   >>>>>>  T H A N K  Y O U  <<<<<<");
    getch();
}
