#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10]={11,12,13,14,15,16,17,18,19,20};
int c[20];
int i,j;
clrscr();
for(i=0;i<10;i++)
{
c[i]=a[i];
}
for(i=0;i<10;i++)
{
c[10+i]=b[i];
}
for(i=0;i<20;i++)
{
printf("%d",c[i]);
}
getch();
}










