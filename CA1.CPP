#include<iostream.h>
#include<conio.h>
class demo
{
public:
char st[10],i;
void input()
{
cout<< "type the sop expression";
cin>>st;
while(st[i]!= NULL)
{
if(st[i]== '+')
	{
	st[i]=='*';
	i++;
	}
	if(st[i]=='+')
	{
	st[i]=='*';
	i++;
	}
	else
	i++;

}
}
void output()
{
cout<<"the expression in pos is:";
for(i=0;st[i]!=NULL;i++)
{
cout<<st[i];
}
}
};
void main()
{
clrscr();
demo p;
p.input();
p.output();
getch();
}
