#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
void main()
{
char str[]="Arya college of engineering & technology.";
char sne[]="invented by Sunil kumar";
int i=0;
clrscr();
system("cls");
while(i<=40)
  {

  textcolor(8+BLINK);
  textbackground(7);
 // sound(2000);
  gotoxy(5+i,5);cprintf("%c",str[i]);
  i++;
  sleep(1);
 // nosound();
  }
  i=0;
  while(i<=23)
  {
  textcolor(8+BLINK);
  textbackground(7);
  gotoxy(10+i,10);cprintf("%c",sne[i]);
  i++;
  sleep(1);
  }
 system("cls");
 sleep(5);
 gotoxy(15,15);
 printf("thanks, for using..... enjoy your life:");
 getch();
 exit(0);
}