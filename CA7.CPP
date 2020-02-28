#include <iostream.h>
#include <conio.h>
 void main()
{
	long int num, rem, revnum=0;
	clrscr();
	cout<<"Enter Num";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		revnum=revnum*10+rem;
		num=num/10;
	}
	cout<<" Reverse Num "<<revnum;
getch();
}
