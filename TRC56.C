#include<stdio.h>
#include<conio.h>
void main()
{
struct student
{
int roll;
int marks;
char name[10];
};
struct student ram,shayam;
printf("enter ram's roll,ram's marks,ram's name:");
scanf("%d%d%s",&ram.roll,&ram.marks,&ram.name);
printf("\n%d \n%d \n%s",ram.roll,ram.marks,ram.name);
printf("enter shayam's roll,shayam's marks,shayam's name");
scanf("%d%d%s",&shayam.roll,&shayam.marks,&shayam.name);
printf("\n%d  \n%d  \n%s",shayam.roll,shayam.marks,shayam.name);

getch();
}