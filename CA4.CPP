#include <iostream.h>
#include <conio.h>
void main()
{
	int num, c=-1,i,bin[10];
	clrscr();
	cout<<"enter any decimal number ";
	cin>>num;
	while(num!=0)
	{
		c++;
		bin[c]=num%2;
		num=num/2;
	}
	for(i=c;i>=0;i--)
		cout<<" "<<bin[i];
getch();
}
