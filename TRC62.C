#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,m;
clrscr();
for(i=1;i<=10;i++)
{
for(j=5;j>=i;j--)
{
printf("*");
}
for(k=1;k<=i;k++)
{
printf(" ");
}
for (l=1;l<=i;l++)
{
printf(" ");
}
for(m=1;m<=i;m++)
{
printf("*");
}
printf("\n");
}
getch();
}