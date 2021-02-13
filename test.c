#include<stdio.h>
int leap(int a)
{
	if(a%4==0&&a%100==0||a%400==0)
	return 1;
	else
	return 0;
}
int number(int year,int month,int day)
{
	int sum = 0,i,j,k;
	int a[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int b[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	if(leap(year)==1)
	for(i = 0;i<month-1;i++)
	sum+=b[i];
	else
	for(i = 0;i<month-1;i++)
	sum+= a[i];
	for(j = 2011;j<year;j++)
	if(leap(j) == i)
	sum+=366 ;
	else
	sum+=365;
	sum+=day;
	return sum;
}
int main()
{
	int year,month,day,n;
	printf("请输入年月日\n");
	scanf("%d%d%d0",&year,&month,&day);
	n = number(year,month,day);
	if((n%5)<4&&(n%5)>0)
	printf("%d年%d月%d日 打渔",year,month,day);
	else
	printf("%d年%d月%d日 晒网",year,month,day);
	return 0;
}
