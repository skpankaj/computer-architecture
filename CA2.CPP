#include<iostream.h>
#include<conio.h>
int fact(int num)
{
	if(num==0)
	   return 1;
	else
	{
	     cout<<num<<"x" ;
	   return num*fact(num-1);

	 }
}
main()
{
	int num,f;
	clrscr();
	cout<<"enter number";
	cin>>num;
	f=fact(num);
	cout<<"= "<<f;
	getch();
	return 0;
}
