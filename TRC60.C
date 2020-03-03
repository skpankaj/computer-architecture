/*call by reference passing structure element to a function*/
#include<stdio.h>
#include<conio.h>
void main()
void print(struct emp *)
{
struct emp
{
int emp_id;
char emp_name[10];
char emp_add[10];
};
struct emp e;
printf("enter id,name,add");
scanf("%d %s %s",&e.emp_id,&e.emp_name,&e.emp_add);
}
void print (struct emp*)
{
print("%d"*x->emp_id);
printf("%s%s",*x-> emp_name,*x->emp_add);
}