#include<stdio.h>
#include<conio.h>
void main()
{
struct emp
{
int emp_id;
char emp_name[10];
char emp_address[10];
};
clrscr();
struct emp e[10];
int i;
for(i=0;i<10;i++)
{
printf("\nenter emp-id;") ;
scanf("%d",&e[i].emp_id);
printf("\nenter name:");
scanf("%s",&e[i].emp_name);
printf("\nenter address:");
scanf("%s",&e[i].emp_address);
}
for(i=0;i<10;i++)
{
printf("\n%d ",e[i].emp_id );
printf("\n%s",e[i].emp_name);
printf("\n%s",e[i].emp_address);
}
getch();
}