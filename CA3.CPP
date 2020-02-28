#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
for(k=5;k>=i;k--)
{
cout<<" ";
}
for (j=1;j<=i+i;j++)
	{
	cout<<"*";
	}
cout<<endl;
}
getch();
}
