#include<iostream.h>
#include<conio.h>
 void main()
{
	   int num,rem,hexadecimal[20],c,i;
	   clrscr();
	   cout<<"enter any no";
	   cin>>num ;
	   c=0;
	   while(num!=0)
	   {
	     rem=num%16;
		hexadecimal[c]=rem;
	     c++;
	     num=num/16;
	     }
	       c--;
	       for(i=c;i>=0;i--)
	       {
		  if(hexadecimal[i]<=9)
			cout<< " "<<hexadecimal[i];
		  else
		    {
		      switch(hexadecimal[i])
			{
				case 10:cout<<"A";
					break;
				case 11:cout<<"B";
					break;
				case 12:cout<<"C";
					break;
				case 13:cout<<"D";
					break;
				case 14:cout<<"E";
				   break;
				default:cout<<"F";

			}
		    }
		}
getch();
}
