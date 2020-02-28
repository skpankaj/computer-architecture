#include<iostream.h>
#include<conio.h>
void main()
{
 char ch[20],rev[20];
 int i=0,j,k;
 clrscr();
 cout<<"enter any string:";
 cin>>ch;
 while(ch[i]!='\0')

 i++;i--;
 for(j=0,k=i;j<=i,k>=0;j++,k--)
 {
 rev[j]=ch[k];
 }
 cout<<endl<<rev;
 getch();
 }