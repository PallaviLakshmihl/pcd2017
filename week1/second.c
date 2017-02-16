#include<stdio.h>
int add(int a,int b, int c)
{
	return (a+b+c);
}
int main()
{
	int x = 10;
	int y = 20;
	int z =30;
	int sum = add(x,y,z);
	printf("sum of three numbers is : %d \n",sum);
	return 0;

}
